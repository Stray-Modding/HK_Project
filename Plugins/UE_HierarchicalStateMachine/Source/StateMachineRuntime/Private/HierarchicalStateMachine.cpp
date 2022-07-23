// Fill out your copyright notice in the Description page of Project Settings.

#include "HierarchicalStateMachine.h"

#include <Engine/Engine.h>
#include <Engine/Canvas.h>

#define STATEMACHINE_DEQUEUEEVENTS_DEFAULTLIMIT 5000

UHierarchicalStateMachine::Track::Track(FName _name, State* _parent, UHierarchicalStateMachine* _stateMachine)
	: m_name(_name)
	, m_parent(_parent)
	, m_stateMachine(_stateMachine)
{
}


UHierarchicalStateMachine::Track::~Track()
{
	for (auto& pair : m_states)
	{
		delete pair.Value;
	}
	m_states.Empty();
}


void UHierarchicalStateMachine::Track::_AssignIndices(uint16& _index)
{
	for (auto& statePair : m_states)
	{
		statePair.Value->m_index = _index;
		++_index;

		for (auto& trackPair : statePair.Value->m_tracks)
		{
			trackPair.Value->_AssignIndices(_index);
		}
	}
}

UHierarchicalStateMachine::State* UHierarchicalStateMachine::Track::AddState(FName _name, const StateEnterDelegate& _enter, const StateTickDelegate& _tick, const StateExitDelegate& _exit)
{
	State* state = AddState(_name);

	state->Enter = _enter;
	state->Tick = _tick;
	state->Exit = _exit;

	return state;
}


UHierarchicalStateMachine::State* UHierarchicalStateMachine::Track::AddState(FName _name)
{
	STATEMACHINE_ASSERT_MSGF(m_stateMachine->m_states.Find(_name) == nullptr, TEXT("A State with the name \"%s\" already exists."), *_name.GetPlainNameString());

	State* state = new State(_name, this, m_stateMachine);

	m_states.Add(_name) = state;
	m_stateMachine->m_states.Add(_name) = state;
	return state;
}

UHierarchicalStateMachine::State* UHierarchicalStateMachine::Track::AddDefaultState(FName _name, const StateEnterDelegate& _enter, const StateTickDelegate& _tick, const StateExitDelegate& _exit)
{
	STATEMACHINE_ASSERT_MSGF(m_defaultState == nullptr, TEXT("A State with the name \"%s\" already exists."), *_name.GetPlainNameString());

	State* state = AddState(_name, _enter, _tick, _exit);
	m_defaultState = state;
	return state;
}


UHierarchicalStateMachine::State* UHierarchicalStateMachine::Track::AddDefaultState(FName _name)
{
	State* state = AddState(_name);
	m_defaultState = state;
	return state;
}

UHierarchicalStateMachine::State::State(FName _name, Track* _parent, UHierarchicalStateMachine* _stateMachine)
	: m_name(_name)
	, m_parent(_parent)
	, m_stateMachine(_stateMachine)
{
}


UHierarchicalStateMachine::State::~State()
{
	for (auto& pair : m_tracks)
	{
		delete pair.Value;
	}
	m_tracks.Empty();
}


UHierarchicalStateMachine::Track* UHierarchicalStateMachine::State::AddTrack(FName _name)
{
	STATEMACHINE_ASSERT_MSGF(m_stateMachine->m_tracks.Find(_name) == nullptr, TEXT("A Track with the name \"%s\" already exists."), *_name.GetPlainNameString());

	Track* track = new Track(_name, this, m_stateMachine);
	m_tracks.Add(_name) = track;
	m_stateMachine->m_tracks.Add(_name) = track;
	return track;
}


bool UHierarchicalStateMachine::State::IsInTrack(const Track* _track) const
{
	Track* currentTrack = m_parent;
	while (currentTrack != nullptr)
	{
		if (currentTrack == _track)
			return true;

		currentTrack = currentTrack->m_parent ? currentTrack->m_parent->m_parent : nullptr;
	}
	return false;
}


bool UHierarchicalStateMachine::State::IsInState(const State* _state) const
{
	Track* currentTrack = m_parent;
	while (currentTrack != nullptr)
	{
		if (currentTrack->GetParentState() == _state)
			return true;

		currentTrack = currentTrack->m_parent ? currentTrack->m_parent->m_parent : nullptr;
	}
	return false;
}

UHierarchicalStateMachine::UHierarchicalStateMachine()
	: bImmediatelyDequeueEvents(true)
#if STATEMACHINE_HISTORY_ENABLED
	, bPrintHistoryInLog(false)
#endif
{
}


UHierarchicalStateMachine::~UHierarchicalStateMachine()
{
	for (auto& pair : m_eventTransitions)
	{
		for (EventTransition* transition : pair.Value)
		{
			delete transition;
		}
	}
	m_eventTransitions.Empty();

	for (Track* track : m_rootTracks)
	{
		delete track;
	}
	m_rootTracks.Empty();

	m_tracks.Empty();
	m_states.Empty();
}


UHierarchicalStateMachine::Track* UHierarchicalStateMachine::AddRootTrack(FName _name)
{
	Track* track = new Track(_name, nullptr, this);
	return AddRootTrack(track);
}

UHierarchicalStateMachine::Track * UHierarchicalStateMachine::AddRootTrack(Track * _track)
{
#if DO_CHECK
	_VisitTrack(_track, TrackVisitorDelegate::CreateUObject(this, &UHierarchicalStateMachine::_AssertIfTrackExists), StateVisitorDelegate::CreateUObject(this, &UHierarchicalStateMachine::_AssertIfStateExists));
#endif

	m_rootTracks.Add(_track);
	m_tracks.Add(_track->m_name) = _track;
	return _track;
}


void UHierarchicalStateMachine::AddEventTransition(FName _eventName, FName _sourceName, FName _targetStateName)
{
	EventTransition* eventTransition = new EventTransition();

	Track** sourceTrackPtr = m_tracks.Find(_sourceName);
	if (sourceTrackPtr)
	{
		eventTransition->sourceTrack = *sourceTrackPtr;
	}
	else
	{
		State** sourceStatePtr = m_states.Find(_sourceName);
		STATEMACHINE_ASSERT_MSG(sourceStatePtr, TEXT("Source Name does not match any Track or State."));
		eventTransition->sourceState = *sourceStatePtr;
	}

	State** targetStatePtr = m_states.Find(_targetStateName);
	STATEMACHINE_ASSERT_MSG(targetStatePtr, TEXT("Target Name does not match any State."));
	eventTransition->targetState = *targetStatePtr;

	eventTransition->name = _eventName;
	m_eventTransitions.FindOrAdd(_eventName).Add(eventTransition);
}


void UHierarchicalStateMachine::Start()
{
	STATEMACHINE_ASSERT(!IsStarted());
	STATEMACHINE_ASSERT(m_currentStates.Num() == 0);

#if STATEMACHINE_ASSERT_ENABLED
	for (auto& trackPair : m_tracks)
	{
		STATEMACHINE_ASSERT_MSGF(trackPair.Value->m_defaultState, TEXT("Track \"%s\" does not have a default state set up."), *trackPair.Value->GetName().ToString());
	}
#endif

#if STATEMACHINE_HISTORY_ENABLED
	_LogStateMachineStarted();
#endif

	_AssignIndices();

	TArray<Track*> waitingTracks;
	for (Track* track : m_rootTracks)
	{
		waitingTracks.Add(track);
	}

	while (waitingTracks.Num() != 0)
	{
		Track* track = waitingTracks[0];
		waitingTracks.RemoveAt(0);

		// Insert state at right index
		bool inserted = false;
		for (int i = 0; i < m_currentStates.Num(); ++i)
		{
			if (track->m_defaultState->m_index < m_currentStates[i]->m_index)
			{
				m_currentStates.Insert(track->m_defaultState, i);
				inserted = true;
				break;
			}
		}
		if (!inserted)
		{
			m_currentStates.Add(track->m_defaultState);
		}
		
		for (auto& pair : track->m_defaultState->m_tracks)
		{
			waitingTracks.Insert(pair.Value, 0);
		}
	}

	for (State* state : m_currentStates)
	{
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_HSM_EnterState);
			state->Enter.ExecuteIfBound();
		}
#if STATEMACHINE_HISTORY_ENABLED 
		_LogStateEntered(state);
#endif
	}

	m_started = true;

	DequeueEvents();
}


void UHierarchicalStateMachine::Tick(float _dt)
{
	STATEMACHINE_ASSERT(IsStarted());
	STATEMACHINE_ASSERT(!m_ticking);

	DequeueEvents();

	m_ticking = true;
	for (State* state : m_currentStates)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_HSM_TickState);
		state->Tick.ExecuteIfBound(_dt);
	}
	m_ticking = false;

	DequeueEvents();

	if (!m_started)
	{
		Stop();
	}
}


void UHierarchicalStateMachine::Stop()
{
	STATEMACHINE_ASSERT(IsStarted());
	m_started = false;
	if (!m_ticking)
	{
		for (int i = m_currentStates.Num() - 1; i >= 0; --i)
		{
			{
				QUICK_SCOPE_CYCLE_COUNTER(STAT_HSM_ExitState);
				m_currentStates[i]->Exit.ExecuteIfBound();
			}
#if STATEMACHINE_HISTORY_ENABLED 
			_LogStateExited(m_currentStates[i]);
#endif
		}
		m_currentStates.Empty();
	}

#if STATEMACHINE_HISTORY_ENABLED
	_LogStateMachineStopped();
#endif
}


void UHierarchicalStateMachine::PostEvent(FName _eventName)
{
	STATEMACHINE_ASSERT_MSGF(m_eventTransitions.Find(_eventName) != nullptr, TEXT("Unknown event name \"%s\"."), *_eventName.GetPlainNameString());

	m_eventsQueue.Add(_eventName);
#if STATEMACHINE_HISTORY_ENABLED 
	_LogEventPushed(_eventName);
#endif
	if (bImmediatelyDequeueEvents && !m_ticking && IsStarted() && !m_isDequeuingEvents)
	{
		DequeueEvents();
	}
}


void UHierarchicalStateMachine::DebugDisplayCurrentStates(const FColor& _color)
{
	if (GEngine)
	{
		FString states = _StringifyCurrentStates();
		GEngine->AddOnScreenDebugMessage(-1, 0.f, _color, *states);
	}
}

void UHierarchicalStateMachine::DebugDisplayCurrentStates(UCanvas* _canvas, const FColor& _color)
{
	if (_canvas)
	{
		FString states = _StringifyCurrentStates();
		_canvas->DisplayDebugManager.SetDrawColor(_color);
		_canvas->DisplayDebugManager.DrawString(states);
	}
}

void UHierarchicalStateMachine::SerializeCurrentStates(TArray<FString>& _outStates)
{
	STATEMACHINE_ASSERT(!m_ticking);

	for (State* state : m_currentStates)
	{
		_outStates.Add(state->GetName().ToString());
	}
}

void UHierarchicalStateMachine::DeserializeCurrentStates(const TArray<FString>& _states)
{
	STATEMACHINE_ASSERT(!m_ticking);

	TArray<State*> states;
	for (const FString& state : _states)
	{
		State** statePtr = m_states.Find(FName(*state));
		if (!statePtr)
		{
			UE_LOG(LogTemp, Error, TEXT("Deserializing unknown State, aborting."));
			return;
		}
		states.Add(*statePtr);
	}

	for (int i = m_currentStates.Num() - 1; i >= 0; --i)
	{
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_HSM_ExitState);
			m_currentStates[i]->Exit.ExecuteIfBound();
		}

#if STATEMACHINE_HISTORY_ENABLED 
		_LogStateExited(m_currentStates[i]);
#endif
	}

	m_currentStates = states;
	for (auto state : m_currentStates)
	{
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_HSM_EnterState);
			state->Enter.ExecuteIfBound();
		}
#if STATEMACHINE_HISTORY_ENABLED 
		_LogStateEntered(state);
#endif
	}
}

FString UHierarchicalStateMachine::_StringifyCurrentStates() const
{
	FString states;
	for (State* state : m_currentStates)
	{
		State* s = state;
		while (s->GetParentTrack()->GetParentState())
		{
			states += "  ";
			s = s->GetParentTrack()->GetParentState();
		}

		states += state->GetParentTrack()->GetName().GetPlainNameString();
		states += ": ";
		states += state->GetName().GetPlainNameString();
		states += "\n";
	}
	return states;
}

bool UHierarchicalStateMachine::_VisitTrack(Track* _track, TrackVisitorDelegate _trackVisitor, StateVisitorDelegate _stateVisitor)
{
	if (!_trackVisitor.Execute(_track))
	{
		return false;
	}

	for (auto& pair : _track->m_states)
	{
		if (!_VisitState(pair.Value, _trackVisitor, _stateVisitor))
		{
			return false;
		}
	}
	return true;
}


bool UHierarchicalStateMachine::_VisitState(State* _state, TrackVisitorDelegate _trackVisitor, StateVisitorDelegate _stateVisitor)
{
	if (!_stateVisitor.Execute(_state))
	{
		return false;
	}

	for (auto& pair : _state->m_tracks)
	{
		if (!_VisitTrack(pair.Value, _trackVisitor, _stateVisitor))
		{
			return false;
		}
	}
	return true;
}

bool UHierarchicalStateMachine::_AssertIfTrackExists(Track* _track)
{
	STATEMACHINE_ASSERT_MSGF(m_tracks.Find(_track->m_name) == nullptr, TEXT("A Track with the name \"%s\" already exists."), *_track->m_name.GetPlainNameString());
	return true;
}

bool UHierarchicalStateMachine::_AssertIfStateExists(State * _state)
{
	STATEMACHINE_ASSERT_MSGF(m_states.Find(_state->m_name) == nullptr, TEXT("A State with the name \"%s\" already exists."), *_state->m_name.GetPlainNameString());
	return true;
}


void UHierarchicalStateMachine::_AssignIndices()
{
	uint16 index = 0;

	for (auto& trackPair : m_tracks)
	{
		trackPair.Value->_AssignIndices(index);
	}
}

UHierarchicalStateMachine::Track* UHierarchicalStateMachine::_FindClosestCommonTrack(const State* _stateA, const State* _stateB)
{
	if (_stateA->m_stateMachine != _stateB->m_stateMachine)
		return nullptr;

	if (_stateA->m_parent == _stateB->m_parent)
		return _stateA->m_parent; // Easy skip

	TArray<Track*> ATracks;
	for (auto& pair : _stateA->m_tracks)
	{
		ATracks.Add(pair.Value);
	}
	Track* currentTrack = _stateA->m_parent;
	while (currentTrack != nullptr)
	{
		ATracks.Add(currentTrack);
		currentTrack = currentTrack->m_parent ? currentTrack->m_parent->m_parent : nullptr;
	}

	for (auto& pair : _stateB->m_tracks)
	{
		int32 i = ATracks.Find(pair.Value);
		if (i != INDEX_NONE)
		{
			return ATracks[i];
		}
	}
	currentTrack = _stateB->m_parent;
	while (currentTrack != nullptr)
	{
		int32 i = ATracks.Find(currentTrack);
		if (i != INDEX_NONE)
		{
			return ATracks[i];
		}
		currentTrack = currentTrack->m_parent ? currentTrack->m_parent->m_parent : nullptr;
	}

	return nullptr;
}

UHierarchicalStateMachine::Track* UHierarchicalStateMachine::_FindClosestCommonTrack(const Track* _trackA, const State* _stateB)
{
	const State* s = _stateB;
	while (s && s->GetParentTrack())
	{
		if (s->GetParentTrack() == _trackA)
		{
			return const_cast<UHierarchicalStateMachine::Track*>(_trackA);
		}
		s = s->GetParentTrack()->GetParentState();
	}

	return _FindClosestCommonTrack(_trackA->GetParentState(), _stateB);
}

bool UHierarchicalStateMachine::_AreStatesConcurrent(const State* _stateA, const State* _stateB) const
{
	if (_stateA == _stateB)
		return true;

	if (_stateA->m_parent == _stateB->m_parent)
		return true; // Easy skip

	TArray<const Track*> ATracks;
	TArray<const State*> AStates;
	{
		const State* s = _stateA;
		while (s)
		{
			AStates.Add(s);
			ATracks.Add(s->m_parent);
			s = s->m_parent->m_parent;
		}
	}

	{
		const State* s = _stateB;
		while (s)
		{
			for (uint16 i = 0u; i < ATracks.Num(); ++i)
			{
				// NOTE(Remi|2019/08/07): If the first thing we have in common is a State, we are not concurrent. If it is a Track, we are.
				if (AStates[i] == s) return false;
				if (ATracks[i] == s->m_parent) return true;
			}
			s = s->m_parent->m_parent;
		}
	}
	
	return false;
}

void UHierarchicalStateMachine::DequeueEvents(uint16 _dequeuedEventsLimit)
{
	m_isDequeuingEvents = true;

	if (_dequeuedEventsLimit == -1)
		_dequeuedEventsLimit = STATEMACHINE_DEQUEUEEVENTS_DEFAULTLIMIT;

	uint16 dequeuedEventsCount = 0;
	while ((dequeuedEventsCount < _dequeuedEventsLimit) && m_eventsQueue.Num() != 0)
	{
		++dequeuedEventsCount;
		FName evt = m_eventsQueue[0];
		m_eventsQueue.RemoveAt(0);
#if STATEMACHINE_HISTORY_ENABLED
		_LogEventPopped(evt);
#endif
		const TArray<EventTransition*>& transitions = *m_eventTransitions.Find(evt);

		// OPTIM: could be member arrays in order to limit allocations
		TArray<State*> exitingStates;
		TArray<State*> enteringStates;

		for (const EventTransition* transition : transitions)
		{
			if (transition->sourceState && m_currentStates.Find(transition->sourceState) == INDEX_NONE)
				continue;

			exitingStates.Empty();
			enteringStates.Empty();

			Track* commonTrack = nullptr;
			if (transition->sourceTrack)
			{
				commonTrack = _FindClosestCommonTrack(transition->sourceTrack, transition->targetState);
			}
			else
			{
				commonTrack = _FindClosestCommonTrack(transition->sourceState, transition->targetState);
			}
			if (!commonTrack)
				continue;

			for (State* state : m_currentStates)
			{
				if (!state->IsInTrack(commonTrack))
					continue;

				if (!_AreStatesConcurrent(state, transition->targetState))
					continue;

				exitingStates.Add(state);
			}

			// No exiting states means transition is irrelevant
			if (exitingStates.Num() == 0)
				continue;

			enteringStates.Add(transition->targetState);
			{
				State* ascendingState = transition->targetState;
				while (ascendingState->GetParentTrack() && ascendingState->GetParentTrack()->GetParentState() && m_currentStates.Find(ascendingState->GetParentTrack()->GetParentState()) == INDEX_NONE)
				{
					ascendingState = ascendingState->GetParentTrack()->GetParentState();
					enteringStates.Add(ascendingState);
				}
			}

			for (int i = 0; i < enteringStates.Num(); ++i)
			{
				for (auto& trackPair : enteringStates[i]->m_tracks)
				{
					bool relevant = true;
					for (int j = 0; j < enteringStates.Num(); ++j)
					{
						if (trackPair.Value == enteringStates[j]->m_parent)
						{
							relevant = false;
							break;
						}
					}

					if (relevant)
						enteringStates.Add(trackPair.Value->m_defaultState);
				}
			}

			exitingStates.Sort([](const State& _stateA, const State& _stateB) { return _stateA.GetIndex() > _stateB.GetIndex(); });
			enteringStates.Sort([](const State& _stateA, const State& _stateB) { return _stateA.GetIndex() < _stateB.GetIndex(); });

			// Exiting states
			for (State* state : exitingStates)
			{
				state->Exit.ExecuteIfBound();
#if STATEMACHINE_HISTORY_ENABLED 
				_LogStateExited(state);
#endif
				m_currentStates.Remove(state);
			}

			// Entering states
			for (State* state : enteringStates)
			{
				state->Enter.ExecuteIfBound();
#if STATEMACHINE_HISTORY_ENABLED 
				_LogStateEntered(state);
#endif
				m_currentStates.Add(state);
			}

			m_currentStates.Sort([](const State& _stateA, const State& _stateB) { return _stateA.GetIndex() < _stateB.GetIndex(); });
		}
	}

	if (dequeuedEventsCount >= STATEMACHINE_DEQUEUEEVENTS_DEFAULTLIMIT)
	{
		UE_LOG(LogTemp, Error, TEXT("[StateMachine] Stopped events dequeuing after having dequeued more than %d events. There may be an infinite events loop somewhere."), STATEMACHINE_DEQUEUEEVENTS_DEFAULTLIMIT);
	}

	m_isDequeuingEvents = false;
}

#if STATEMACHINE_HISTORY_ENABLED 

void UHierarchicalStateMachine::_LogStateMachineStarted()
{
	HistoryEntry entry;
	entry.type = HistoryEntryType_StateMachineStarted;
	entry.time = FDateTime::Now();
	m_history.Add(entry);

	if (bPrintHistoryInLog)
		UE_LOG(LogTemp, Display, TEXT("[%d][%s:%s] Started State Machine."), GFrameNumber, GetOuter() ? *GetOuter()->GetName() : nullptr, *GetName());
}

void UHierarchicalStateMachine::_LogStateMachineStopped()
{
	HistoryEntry entry;
	entry.type = HistoryEntryType_StateMachineStopped;
	entry.time = FDateTime::Now();
	m_history.Add(entry);

	if (bPrintHistoryInLog)
		UE_LOG(LogTemp, Display, TEXT("[%d][%s:%s] Stopped State Machine."), GFrameNumber, GetOuter() ? *GetOuter()->GetName() : nullptr, *GetName());
}

void UHierarchicalStateMachine::_LogStateEntered(State* _state)
{
	HistoryEntry entry;
	entry.type = HistoryEntryType_StateEntered;
	entry.time = FDateTime::Now();
	entry.state = _state;
	m_history.Add(entry);

	if (bPrintHistoryInLog)
		UE_LOG(LogTemp, Display, TEXT("[%d][%s:%s] Entered state \"%s\"."), GFrameNumber, GetOuter() ? *GetOuter()->GetName() : nullptr, *GetName(), *_state->m_name.GetPlainNameString());
}

void UHierarchicalStateMachine::_LogStateExited(State* _state)
{
	HistoryEntry entry;
	entry.type = HistoryEntryType_StateExited;
	entry.time = FDateTime::Now();
	entry.state = _state;
	m_history.Add(entry);

	if (bPrintHistoryInLog)
		UE_LOG(LogTemp, Display, TEXT("[%d][%s:%s] Exited state \"%s\"."), GFrameNumber, GetOuter() ? *GetOuter()->GetName() : nullptr, *GetName(), *_state->m_name.GetPlainNameString());
}

void UHierarchicalStateMachine::_LogEventPushed(FName _name)
{
	HistoryEntry entry;
	entry.type = HistoryEntryType_EventPushed;
	entry.time = FDateTime::Now();
	entry.eventName = _name;
	m_history.Add(entry);

	if (bPrintHistoryInLog)
		UE_LOG(LogTemp, Display, TEXT("[%d][%s:%s] Pushed event \"%s\"."), GFrameNumber, GetOuter() ? *GetOuter()->GetName() : nullptr, *GetName(), *_name.GetPlainNameString());
}

void UHierarchicalStateMachine::_LogEventPopped(FName _name)
{
	HistoryEntry entry;
	entry.type = HistoryEntryType_EventPopped;
	entry.time = FDateTime::Now();
	entry.eventName = _name;
	m_history.Add(entry);

	if (bPrintHistoryInLog)
		UE_LOG(LogTemp, Display, TEXT("[%d][%s:%s] Popped event \"%s\"."), GFrameNumber, GetOuter() ? *GetOuter()->GetName() : nullptr, *GetName(), *_name.GetPlainNameString());
}
#endif
