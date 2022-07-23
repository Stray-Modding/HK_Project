// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Manager.generated.h"

UCLASS(Abstract)
class JOYLIBRARYRUNTIME_API AManager : public AActor
{
	GENERATED_BODY()
	
public:	
	AManager();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
