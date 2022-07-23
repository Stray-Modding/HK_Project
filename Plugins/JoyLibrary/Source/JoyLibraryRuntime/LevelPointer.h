// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <UObject/SoftObjectPtr.h>

#include "LevelPointer.generated.h"

/**
 * Level Pointer allows the creation of Level type variables from within blueprints.
 * It grants access to some methods of UWorld that are usually only accessible from C++.
 */
USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FLevelPointer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere) TAssetPtr<UWorld> Level;
};

UCLASS()
class JOYLIBRARYRUNTIME_API ULevelPointerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Joy|LevelPointer") static FString GetLevelName(const FLevelPointer& _levelPointer);
};
