// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "JoyHUD.generated.h"

/**
 * 
 */
UCLASS()
class JOYLIBRARYRUNTIME_API AJoyHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	void AddActorToDebugList(AActor* _actor);
	void RemoveActorFromDebugList(AActor* _actor);
	virtual void GetDebugActorList(TArray<AActor*>& InOutList) override;

private:
	TArray<AActor*> m_additionalDebugActors;
};
