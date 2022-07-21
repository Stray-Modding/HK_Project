#pragma once
#include "CoreMinimal.h"
#include "HKActorSaveData.h"
#include "HKLevelSaveData.generated.h"

USTRUCT(BlueprintType)
struct FHKLevelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TMap<FName, FHKActorSaveData> Actors;
    
    HK_PROJECT_API FHKLevelSaveData();
};

