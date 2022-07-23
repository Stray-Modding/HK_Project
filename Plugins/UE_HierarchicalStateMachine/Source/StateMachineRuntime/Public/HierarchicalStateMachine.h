// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class UCanvas;

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HierarchicalStateMachine.generated.h"

#define STATEMACHINE_ASSERT_ENABLED 1

#if STATEMACHINE_ASSERT_ENABLED 

	#define STATEMACHINE_ASSERT(cond) check(cond)
	#define STATEMACHINE_ASSERT_MSG(cond, msg) checkf(cond, msg)
	#define STATEMACHINE_ASSERT_MSGF(cond, fmt, ...) checkf(cond, fmt, __VA_ARGS__)
#else
	#define STATEMACHINE_ASSERT(cond)
	#define STATEMACHINE_ASSERT_MSGF(cond, fmt, ...)
	#define STATEMACHINE_ASSERT_MSG(cond, msg)
#endif

#ifdef UE_EDITOR
	#define STATEMACHINE_HISTORY_ENABLED 1
#else
	#define STATEMACHINE_HISTORY_ENABLED 0
#endif

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATEMACHINERUNTIME_API UHierarchicalStateMachine : public UObject
{
	GENERATED_BODY()

public:
	DECLARE_DELEGATE(StateEnterDelegate);
	DECLARE_DELEGATE_OneParam(StateTickDelegate, float);
	DECLARE_DELEGATE(StateExitDelegate);

	class Track;
	class State;

	friend class Track;
	friend class State;

	class STATEMACHINERUNTIME_API Track
	{
		friend class UHierarchicalStateMachine;
		friend class State;
	public:
		State* AddState(FName _name);
		State* AddState(FName _name, const StateEnterDelegate& _enter, const StateTickDelegate& _tick, const StateExitDelegate& _exit);
		State* AddDefaultState(FName _name);
		State* AddDefaultState(FName _name, const StateEnterDelegate& _enter, const StateTickDelegate& _tick, const StateExitDelegate& _exit);

		FORCEINLINE State* GetParentState() const { return m_parent; }
		FORCEINLINE const FName& GetName() const { return m_name; }

	private:
		Track(FName _name, State* _parent, UHierarchicalStateMachine* _stateMachine);
		~Track();

		void _AssignIndices(uint16& _index);

		FName m_name;
		TMap<FName, State*> m_states;
		State* m_parent = nullptr;
		State* m_defaultState = nullptr;
		UHierarchicalStateMachine* m_stateMachine = nullptr;
	};

	class STATEMACHINERUNTIME_API State
	{
		friend class UHierarchicalStateMachine;
		friend class State;
	public:
		StateEnterDelegate Enter;
		StateTickDelegate Tick;
		StateExitDelegate Exit;

		Track* AddTrack(FName _name);

		bool IsInTrack(const Track* _track) const;
		bool IsInState(const State* _state) const;

		FORCEINLINE Track* GetParentTrack() const { return m_parent; }
		FORCEINLINE const FName& GetName() const { return m_name; }
		FORCEINLINE uint16 GetIndex() const { return m_index; }

	private:
		State(FName _name, Track* _parent, UHierarchicalStateMachine* _stateMachine);
		~State();

		FName m_name;
		TMap<FName, Track*> m_tracks;
		Track* m_parent;
		UHierarchicalStateMachine* m_stateMachine;
		uint16 m_index = 0;
	};

public:	
	UHierarchicalStateMachine();
	~UHierarchicalStateMachine();

	Track* AddRootTrack(FName _name);
	Track* AddRootTrack(Track* _track);

	void AddEventTransition(FName _eventName, FName _sourceName, FName _targetStateName);

	void Start();
	void Tick(float _dt);
	void Stop();
	void DequeueEvents(uint16 _dequeuedEventsLimit = -1);

	void PostEvent(FName _eventName);

	FORCEINLINE const TArray<State*>& GetCurrentStates() const { return m_currentStates; }
	FORCEINLINE const TArray<Track*>& GetRootTracks() const { return m_rootTracks; }

	FORCEINLINE bool IsStarted() const { return m_started; }

	void DebugDisplayCurrentStates(const FColor& _color);
	void DebugDisplayCurrentStates(UCanvas* _canvas, const FColor& _color);

	void SerializeCurrentStates(TArray<FString>& _outStates);
	void DeserializeCurrentStates(const TArray<FString>& _states);

	bool bImmediatelyDequeueEvents : 1;

#if STATEMACHINE_HISTORY_ENABLED
	bool bPrintHistoryInLog : 1;
#endif

private:
	DECLARE_DELEGATE_RetVal_OneParam(bool, TrackVisitorDelegate, Track*);
	DECLARE_DELEGATE_RetVal_OneParam(bool, StateVisitorDelegate, State*);
	bool _VisitTrack(Track* _track, TrackVisitorDelegate _trackVisitor, StateVisitorDelegate _stateVisitor);
	bool _VisitState(State* _track, TrackVisitorDelegate _trackVisitor, StateVisitorDelegate _stateVisitor);

	bool _AssertIfTrackExists(Track* _track);
	bool _AssertIfStateExists(State* _track);

	void _AssignIndices();
	Track* _FindClosestCommonTrack(const Track* _trackA, const State* _stateB);
	Track* _FindClosestCommonTrack(const State* _stateA, const State* _stateB);
	bool _AreStatesConcurrent(const State* _stateA, const State* _stateB) const;

	FString _StringifyCurrentStates() const;

	struct EventTransition
	{
		FName name;
		Track* sourceTrack = nullptr;
		State* sourceState = nullptr;
		State* targetState = nullptr;
	};

	TArray<Track*> m_rootTracks;
	TMap<FName, Track*> m_tracks;
	TMap<FName, State*> m_states;

	TArray<State*> m_currentStates; // Order in this array matters

	TMap<FName, TArray<EventTransition*>> m_eventTransitions;
	TArray<FName> m_eventsQueue;
	
	bool m_ticking = false;
	bool m_started = false;
	bool m_isDequeuingEvents = false;
	
#if STATEMACHINE_HISTORY_ENABLED 
	enum HistoryEntryType
	{
		HistoryEntryType_StateMachineStarted,
		HistoryEntryType_StateMachineStopped,
		HistoryEntryType_StateEntered,
		HistoryEntryType_StateExited,
		HistoryEntryType_EventPushed,
		HistoryEntryType_EventPopped,
	};

	struct HistoryEntry
	{
		HistoryEntry() : eventName(TEXT("")) {}

		HistoryEntryType type;
		FDateTime time;
		union 
		{
			State* state;
			FName eventName;
		};
	};
	TArray<HistoryEntry> m_history;

	void _LogStateMachineStarted();
	void _LogStateMachineStopped();
	void _LogStateEntered(State* _state);
	void _LogStateExited(State* _state);
	void _LogEventPushed(FName _name);
	void _LogEventPopped(FName _name);
#endif
};


// ==================
// DEFINITION HELPERS
// ==================

#define STATEMACHINE_DEFINITION(HierarchicalStateMachinePointer)\
	{\
	UHierarchicalStateMachine* __hierarchicalStateMachine = HierarchicalStateMachinePointer;\
	TArray<UHierarchicalStateMachine::Track*> __trackStack;\
	TArray<UHierarchicalStateMachine::State*> __stateStack;\
	UHierarchicalStateMachine::Track* __track;\
	UHierarchicalStateMachine::State* __state;\
	_STATEMACHINE_DEFINITION_CONTENT


#define _STATEMACHINE_DEFINITION_CONTENT(...)\
	__VA_ARGS__\
	}


#define DEFAULT_STATE(StateName)\
	{\
		__state = __trackStack.Top()->AddDefaultState(TEXT(#StateName)); \
		__stateStack.Push(__state);\
	}\
	_STATE_CONTENT


#define STATE(StateName)\
	{\
		__state = __trackStack.Top()->AddState(TEXT(#StateName)); \
		__stateStack.Push(__state);\
	}\
	_STATE_CONTENT

#define STATE_ENTER(objectPtr, methodPtr) __state->Enter.BindUObject(objectPtr, methodPtr)

#define STATE_TICK(objectPtr, methodPtr) __state->Tick.BindUObject(objectPtr, methodPtr)

#define STATE_EXIT(objectPtr, methodPtr) __state->Exit.BindUObject(objectPtr, methodPtr)



#define _STATE_CONTENT(...)\
	__VA_ARGS__\
	__stateStack.Pop()


#define TRACK(TrackName)\
	if (__stateStack.Num() == 0)\
	{\
		__track = __hierarchicalStateMachine->AddRootTrack(TEXT(#TrackName));\
	}\
	else\
	{\
		__track = __stateStack.Top()->AddTrack(TEXT(#TrackName));\
	}\
	__trackStack.Push(__track);\
	_TRACK_CONTENT


#define _TRACK_CONTENT(...)\
	__VA_ARGS__\
	__trackStack.Pop()


// NOTE: so far, I think event should be passed as string literals, since it will passed that way on the non-macro API
#define TRANSITION_EVENT(eventName, sourceState, targetState)\
	__hierarchicalStateMachine->AddEventTransition(eventName, #sourceState, #targetState)
