// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"


#include "StateMachineTests.generated.h"

class FStateMachineTestsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

UCLASS()
class UTestClass : public UObject
{
	GENERATED_BODY()

public:
	bool bRecord = false;
	TArray<FString> History;

	void A1_Enter();
	void A1_Tick(float _dt);
	void A1_Exit();
	void A2_Enter();
	void A2_Tick(float _dt);
	void A2_Exit();

	void B1_Enter();
	void B1_Tick(float _dt);
	void B1_Exit();
	void B2_Enter();
	void B2_Tick(float _dt);
	void B2_Exit();
	void B3_Enter();
	void B3_Tick(float _dt);
	void B3_Exit();
	void B4_Enter();
	void B4_Tick(float _dt);
	void B4_Exit();

	void C1_Enter();
	void C1_Tick(float _dt);
	void C1_Exit();
	void C2_Enter();
	void C2_Tick(float _dt);
	void C2_Exit();

	void D1_Enter();
	void D1_Tick(float _dt);
	void D1_Exit();
	void D2_Enter();
	void D2_Tick(float _dt);
	void D2_Exit();

	void E1_Enter();
	void E1_Tick(float _dt);
	void E1_Exit();
	void E2_Enter();
	void E2_Tick(float _dt);
	void E2_Exit();

	void F1_Enter();
	void F1_Tick(float _dt);
	void F1_Exit();

	void G1_Enter();
	void G1_Tick(float _dt);
	void G1_Exit();

	void G2_Enter();
	void G2_Tick(float _dt);
	void G2_Exit();
};
