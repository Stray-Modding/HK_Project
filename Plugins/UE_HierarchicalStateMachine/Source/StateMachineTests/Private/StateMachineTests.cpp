// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "StateMachineTests.h"

#include <UnrealEngine.h>

#include <HierarchicalStateMachine.h>

#define LOCTEXT_NAMESPACE "FStateMachineTestsModule"

void FStateMachineTestsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FStateMachineTestsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	/* Workaround for UE-25350 */
	/* https://vhiterabbit.com/2018/03/02/ue4-code-fixing-test-hot-reload/ */
	FAutomationTestFramework::Get().UnregisterAutomationTest("FStateMachineLifeCycleTest");
	FAutomationTestFramework::Get().UnregisterAutomationTest("FStateMachineDefaultStatesTest");
	FAutomationTestFramework::Get().UnregisterAutomationTest("FStateMachineTransitionsTest");
	FAutomationTestFramework::Get().UnregisterAutomationTest("FStateMachineTickOrderTest");
	FAutomationTestFramework::Get().UnregisterAutomationTest("FStateMachineTrackTransitionTest");
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FStateMachineTestsModule, StateMachineTests)


void UTestClass::A1_Enter()
{
	if (bRecord)
		History.Add(TEXT("A1_Enter"));
}

void UTestClass::A1_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("A1_Tick"));
}

void UTestClass::A1_Exit()
{
	if (bRecord)
		History.Add(TEXT("A1_Exit"));
}

void UTestClass::A2_Enter()
{
	if (bRecord)
		History.Add(TEXT("A2_Enter"));
}

void UTestClass::A2_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("A2_Tick"));
}

void UTestClass::A2_Exit()
{
	if (bRecord)
		History.Add(TEXT("A2_Exit"));
}

void UTestClass::B1_Enter()
{
	if (bRecord)
		History.Add(TEXT("B1_Enter"));
}

void UTestClass::B1_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("B1_Tick"));
}

void UTestClass::B1_Exit()
{
	if (bRecord)
		History.Add(TEXT("B1_Exit"));
}

void UTestClass::B2_Enter()
{
	if (bRecord)
		History.Add(TEXT("B2_Enter"));
}

void UTestClass::B2_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("B2_Tick"));
}

void UTestClass::B2_Exit()
{
	if (bRecord)
		History.Add(TEXT("B2_Exit"));
}

void UTestClass::B3_Enter()
{
	if (bRecord)
		History.Add(TEXT("B3_Enter"));
}

void UTestClass::B3_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("B3_Tick"));
}

void UTestClass::B3_Exit()
{
	if (bRecord)
		History.Add(TEXT("B3_Exit"));
}

void UTestClass::B4_Enter()
{
	if (bRecord)
		History.Add(TEXT("B4_Enter"));
}

void UTestClass::B4_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("B4_Tick"));
}

void UTestClass::B4_Exit()
{
	if (bRecord)
		History.Add(TEXT("B4_Exit"));
}

void UTestClass::C1_Enter()
{
	if (bRecord)
		History.Add(TEXT("C1_Enter"));
}

void UTestClass::C1_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("C1_Tick"));
}

void UTestClass::C1_Exit()
{
	if (bRecord)
		History.Add(TEXT("C1_Exit"));
}

void UTestClass::C2_Enter()
{
	if (bRecord)
		History.Add(TEXT("C2_Enter"));
}

void UTestClass::C2_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("C2_Tick"));
}

void UTestClass::C2_Exit()
{
	if (bRecord)
		History.Add(TEXT("C2_Exit"));
}

void UTestClass::D1_Enter()
{
	if (bRecord)
		History.Add(TEXT("D1_Enter"));
}

void UTestClass::D1_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("D1_Tick"));
}

void UTestClass::D1_Exit()
{
	if (bRecord)
		History.Add(TEXT("D1_Exit"));
}

void UTestClass::D2_Enter()
{
	if (bRecord)
		History.Add(TEXT("D2_Enter"));
}

void UTestClass::D2_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("D2_Tick"));
}

void UTestClass::D2_Exit()
{
	if (bRecord)
		History.Add(TEXT("D2_Exit"));
}

void UTestClass::E1_Enter()
{
	if (bRecord)
		History.Add(TEXT("E1_Enter"));
}

void UTestClass::E1_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("E1_Tick"));
}

void UTestClass::E1_Exit()
{
	if (bRecord)
		History.Add(TEXT("E1_Exit"));
}

void UTestClass::E2_Enter()
{
	if (bRecord)
		History.Add(TEXT("E2_Enter"));
}

void UTestClass::E2_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("E2_Tick"));
}

void UTestClass::E2_Exit()
{
	if (bRecord)
		History.Add(TEXT("E2_Exit"));
}

void UTestClass::F1_Enter()
{
	if (bRecord)
		History.Add(TEXT("F1_Enter"));
}

void UTestClass::F1_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("F1_Tick"));
}

void UTestClass::F1_Exit()
{
	if (bRecord)
		History.Add(TEXT("F1_Exit"));
}

void UTestClass::G1_Enter()
{
	if (bRecord)
		History.Add(TEXT("G1_Enter"));
}

void UTestClass::G1_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("G1_Tick"));
}

void UTestClass::G1_Exit()
{
	if (bRecord)
		History.Add(TEXT("G1_Exit"));
}

void UTestClass::G2_Enter()
{
	if (bRecord)
		History.Add(TEXT("G2_Enter"));
}

void UTestClass::G2_Tick(float _dt)
{
	if (bRecord)
		History.Add(TEXT("G2_Tick"));
}

void UTestClass::G2_Exit()
{
	if (bRecord)
		History.Add(TEXT("G2_Exit"));
}

// ===== TESTS =====

#define TEST(cond, txt) if (!(cond)) { UE_LOG(LogTemp, Error, TEXT("%s"), TEXT(txt)); result = false; break; }

static UHierarchicalStateMachine* s_stateMachine = nullptr;
static UTestClass* s_testObject = nullptr;

static void BuildTestStateMachine()
{
	s_stateMachine = NewObject<UHierarchicalStateMachine>();
	s_testObject = NewObject<UTestClass>();

	STATEMACHINE_DEFINITION(s_stateMachine)
	(
		TRACK(A)
		(
			DEFAULT_STATE(A1)
			(
				STATE_ENTER(s_testObject, &UTestClass::A1_Enter);
				STATE_TICK(s_testObject, &UTestClass::A1_Tick);
				STATE_EXIT(s_testObject, &UTestClass::A1_Exit);

				TRACK(C)
				(
					DEFAULT_STATE(C1)
					(
						STATE_ENTER(s_testObject, &UTestClass::C1_Enter);
						STATE_TICK(s_testObject, &UTestClass::C1_Tick);
						STATE_EXIT(s_testObject, &UTestClass::C1_Exit);
					);
					STATE(C2)
					(
						STATE_ENTER(s_testObject, &UTestClass::C2_Enter);
						STATE_TICK(s_testObject, &UTestClass::C2_Tick);
						STATE_EXIT(s_testObject, &UTestClass::C2_Exit);
					);
				);
			);
			STATE(A2)
			(
				STATE_ENTER(s_testObject, &UTestClass::A2_Enter);
				STATE_TICK(s_testObject, &UTestClass::A2_Tick);
				STATE_EXIT(s_testObject, &UTestClass::A2_Exit);

				TRACK(D)
				(
					DEFAULT_STATE(D1)
					(
						STATE_ENTER(s_testObject, &UTestClass::D1_Enter);
						STATE_TICK(s_testObject, &UTestClass::D1_Tick);
						STATE_EXIT(s_testObject, &UTestClass::D1_Exit);
					);
					STATE(D2)
					(
						STATE_ENTER(s_testObject, &UTestClass::D2_Enter);
						STATE_TICK(s_testObject, &UTestClass::D2_Tick);
						STATE_EXIT(s_testObject, &UTestClass::D2_Exit);
					);
				);

				TRACK(G)
				(
					DEFAULT_STATE(G1)
					(
						STATE_ENTER(s_testObject, &UTestClass::G1_Enter);
						STATE_TICK(s_testObject, &UTestClass::G1_Tick);
						STATE_EXIT(s_testObject, &UTestClass::G1_Exit);
					);
					STATE(G2)
					(
						STATE_ENTER(s_testObject, &UTestClass::G2_Enter);
						STATE_TICK(s_testObject, &UTestClass::G2_Tick);
						STATE_EXIT(s_testObject, &UTestClass::G2_Exit);
					);
				);
			);
		);
		TRACK(B)
		(
			DEFAULT_STATE(B1)
			(
				STATE_ENTER(s_testObject, &UTestClass::B1_Enter);
				STATE_TICK(s_testObject, &UTestClass::B1_Tick);
				STATE_EXIT(s_testObject, &UTestClass::B1_Exit);
			);
			STATE(B2)
			(
				STATE_ENTER(s_testObject, &UTestClass::B2_Enter);
				STATE_TICK(s_testObject, &UTestClass::B2_Tick);
				STATE_EXIT(s_testObject, &UTestClass::B2_Exit);

				TRACK(E)
				(
					DEFAULT_STATE(E1)
					(
						STATE_ENTER(s_testObject, &UTestClass::E1_Enter);
						STATE_TICK(s_testObject, &UTestClass::E1_Tick);
						STATE_EXIT(s_testObject, &UTestClass::E1_Exit);
					);
					STATE(E2)
					(
						STATE_ENTER(s_testObject, &UTestClass::E2_Enter);
						STATE_TICK(s_testObject, &UTestClass::E2_Tick);
						STATE_EXIT(s_testObject, &UTestClass::E2_Exit);
					);
				);
			);
			STATE(B3)
			(
				STATE_ENTER(s_testObject, &UTestClass::B3_Enter);
				STATE_TICK(s_testObject, &UTestClass::B3_Tick);
				STATE_EXIT(s_testObject, &UTestClass::B3_Exit);
			);
			STATE(B4)
			(
				STATE_ENTER(s_testObject, &UTestClass::B4_Enter);
				STATE_TICK(s_testObject, &UTestClass::B4_Tick);
				STATE_EXIT(s_testObject, &UTestClass::B4_Exit);
			);
		);

		TRACK(F)
		(
			DEFAULT_STATE(F1)
			(
				STATE_ENTER(s_testObject, &UTestClass::F1_Enter);
				STATE_TICK(s_testObject, &UTestClass::F1_Tick);
				STATE_EXIT(s_testObject, &UTestClass::F1_Exit);
			);
		);

		TRANSITION_EVENT("Event1", A1, D2);
		TRANSITION_EVENT("Event1", E1, E2);
		TRANSITION_EVENT("Event2", B1, B2);
		TRANSITION_EVENT("Event2", B3, B4);

		TRANSITION_EVENT("SelfTransition", G1, G1);

		TRANSITION_EVENT("TrackTransition1", C, C2);
		TRANSITION_EVENT("TrackTransition2", A, D2);
		TRANSITION_EVENT("TrackTransition3", A, G2);
	);
}

static void DestroyTestStateMachine()
{
	s_stateMachine->ConditionalBeginDestroy();
	s_testObject->ConditionalBeginDestroy();
	GEngine->PerformGarbageCollectionAndCleanupActors();
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateMachineLifeCycleTest, "StateMachine.LifeCycle", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FStateMachineLifeCycleTest::RunTest(const FString& Parameters)
{
	BuildTestStateMachine();
	DestroyTestStateMachine();
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateMachineDefaultStatesTest, "StateMachine.DefaultStates", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FStateMachineDefaultStatesTest::RunTest(const FString& Parameters)
{
	BuildTestStateMachine();
	bool result = true;
	
	do
	{
		s_testObject->bRecord = true;
		s_stateMachine->Start();
		s_stateMachine->Stop();

		TEST(s_testObject->History.Num() == 8, "Failed to initialize all states.");
		TEST(s_testObject->History[0] == TEXT("A1_Enter"), "Invalid initialization order.");
		TEST(s_testObject->History[1] == TEXT("C1_Enter"), "Invalid initialization order.");
		TEST(s_testObject->History[2] == TEXT("B1_Enter"), "Invalid initialization order.");
		TEST(s_testObject->History[3] == TEXT("F1_Enter"), "Invalid initialization order.");
		TEST(s_testObject->History[4] == TEXT("F1_Exit"), "Invalid initialization order.");
		TEST(s_testObject->History[5] == TEXT("B1_Exit"), "Invalid initialization order.");
		TEST(s_testObject->History[6] == TEXT("C1_Exit"), "Invalid initialization order.");
		TEST(s_testObject->History[7] == TEXT("A1_Exit"), "Invalid initialization order.");
	}
	while (false);

	DestroyTestStateMachine();
	return result;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateMachineTransitionsTest, "StateMachine.Transitions", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FStateMachineTransitionsTest::RunTest(const FString& Parameters)
{
	BuildTestStateMachine();
	bool result = true;

	do
	{
		s_stateMachine->Start();
		s_testObject->bRecord = true;

		s_stateMachine->PostEvent("Event1");
		TEST(s_testObject->History.Num() == 5, "Incorrect Transition.");
		TEST(s_testObject->History[0] == TEXT("C1_Exit"), "Incorrect Transition.");
		TEST(s_testObject->History[1] == TEXT("A1_Exit"), "Incorrect Transition.");
		TEST(s_testObject->History[2] == TEXT("A2_Enter"), "Incorrect Transition.");
		TEST(s_testObject->History[3] == TEXT("D2_Enter"), "Incorrect Transition.");
		TEST(s_testObject->History[4] == TEXT("G1_Enter"), "Incorrect Transition.");
		s_testObject->History.Empty();

		s_stateMachine->PostEvent("SelfTransition");
		TEST(s_testObject->History.Num() == 2, "Failed Self Transition.");
		TEST(s_testObject->History[0] == TEXT("G1_Exit"), "Failed Self Transition.");
		TEST(s_testObject->History[1] == TEXT("G1_Enter"), "Failed Self Transition.");
		s_testObject->History.Empty();

		s_stateMachine->PostEvent("Event2");
		TEST(s_testObject->History.Num() == 3, "Incorrect Transition.");
		TEST(s_testObject->History[0] == TEXT("B1_Exit"), "Incorrect Transition.");
		TEST(s_testObject->History[1] == TEXT("B2_Enter"), "Incorrect Transition.");
		TEST(s_testObject->History[2] == TEXT("E1_Enter"), "Incorrect Transition.");
		s_testObject->History.Empty();

		s_stateMachine->Stop();

		TEST(s_testObject->History.Num() == 6, "Incorrect Exit Order.");
		TEST(s_testObject->History[0] == TEXT("F1_Exit"), "Incorrect Exit Order.");
		TEST(s_testObject->History[1] == TEXT("E1_Exit"), "Incorrect Exit Order.");
		TEST(s_testObject->History[2] == TEXT("B2_Exit"), "Incorrect Exit Order.");
		TEST(s_testObject->History[3] == TEXT("G1_Exit"), "Incorrect Exit Order.");
		TEST(s_testObject->History[4] == TEXT("D2_Exit"), "Incorrect Exit Order.");
		TEST(s_testObject->History[5] == TEXT("A2_Exit"), "Incorrect Exit Order.");
		
	} while (false);

	DestroyTestStateMachine();
	return result;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateMachineTickOrderTest, "StateMachine.TickOrder", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FStateMachineTickOrderTest::RunTest(const FString& Parameters)
{
	BuildTestStateMachine();
	bool result = true;

	do
	{
		s_stateMachine->Start();
		s_testObject->bRecord = true;

		s_stateMachine->Tick(0.f);
		TEST(s_testObject->History.Num() == 4, "Incorrect Tick Sequence.");
		TEST(s_testObject->History[0] == TEXT("A1_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[1] == TEXT("C1_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[2] == TEXT("B1_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[3] == TEXT("F1_Tick"), "Incorrect Tick Sequence.");

		s_stateMachine->PostEvent("Event1");
		s_testObject->History.Empty();

		s_stateMachine->Tick(0.f);
		TEST(s_testObject->History.Num() == 5, "Incorrect Tick Sequence.");
		TEST(s_testObject->History[0] == TEXT("A2_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[1] == TEXT("D2_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[2] == TEXT("G1_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[3] == TEXT("B1_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[4] == TEXT("F1_Tick"), "Incorrect Tick Sequence.");

		s_stateMachine->PostEvent("Event2");
		s_testObject->History.Empty();

		s_stateMachine->Tick(0.f);
		TEST(s_testObject->History.Num() == 6, "Incorrect Tick Sequence.");
		TEST(s_testObject->History[0] == TEXT("A2_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[1] == TEXT("D2_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[2] == TEXT("G1_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[3] == TEXT("B2_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[4] == TEXT("E1_Tick"), "Incorrect Tick Sequence.");
		TEST(s_testObject->History[5] == TEXT("F1_Tick"), "Incorrect Tick Sequence.");

		s_stateMachine->Stop();

	} while (false);

	DestroyTestStateMachine();
	return result;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateMachineTrackTransitionTest, "StateMachine.TrackTransition", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FStateMachineTrackTransitionTest::RunTest(const FString& Parameters)
{
	BuildTestStateMachine();
	bool result = true;

	do
	{
		s_stateMachine->Start();
		s_testObject->bRecord = true;

		s_stateMachine->PostEvent("TrackTransition1");
		TEST(s_testObject->History.Num() == 2, "Incorrect Transition.");
		TEST(s_testObject->History[0] == TEXT("C1_Exit"), "Incorrect Transition.");
		TEST(s_testObject->History[1] == TEXT("C2_Enter"), "Incorrect Transition.");
		s_testObject->History.Empty();

		s_stateMachine->PostEvent("TrackTransition2");
		TEST(s_testObject->History.Num() == 5, "Incorrect Transition.");
		TEST(s_testObject->History[0] == TEXT("C2_Exit"), "Incorrect Transition.");
		TEST(s_testObject->History[1] == TEXT("A1_Exit"), "Incorrect Transition.");
		TEST(s_testObject->History[2] == TEXT("A2_Enter"), "Incorrect Transition.");
		TEST(s_testObject->History[3] == TEXT("D2_Enter"), "Incorrect Transition.");
		TEST(s_testObject->History[4] == TEXT("G1_Enter"), "Incorrect Transition.");
		s_testObject->History.Empty();

		s_stateMachine->PostEvent("TrackTransition3");
		TEST(s_testObject->History.Num() == 2, "Incorrect Transition.");
		TEST(s_testObject->History[0] == TEXT("G1_Exit"), "Incorrect Transition.");
		TEST(s_testObject->History[1] == TEXT("G2_Enter"), "Incorrect Transition.");
		s_testObject->History.Empty();

		s_stateMachine->Stop();

	} while (false);

	DestroyTestStateMachine();
	return result;
}
