#pragma once
#include "CoreMinimal.h"
#include "HKComponentSaveData.h"
#include "HKActorSaveData.generated.h"

USTRUCT(BlueprintType)
struct FHKActorSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<uint8> Data;
    
    UPROPERTY()
    TArray<FHKComponentSaveData> ComponentsData;
    
    UPROPERTY()
    bool Destroyed;
    
    HK_PROJECT_API FHKActorSaveData();
};

