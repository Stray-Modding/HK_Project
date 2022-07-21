#pragma once
#include "CoreMinimal.h"
#include "EObjective.h"
#include "EActivityStatus.h"
#include "EActivity.h"
#include "ObjectiveState.h"
#include "ActivityState.generated.h"

USTRUCT(BlueprintType)
struct FActivityState {
    GENERATED_BODY()
public:
    UPROPERTY()
    EActivity ID;
    
    UPROPERTY()
    EActivityStatus status;
    
    UPROPERTY()
    TMap<EObjective, FObjectiveState> Objectives;
    
    HK_PROJECT_API FActivityState();
};

