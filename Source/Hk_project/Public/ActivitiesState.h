#pragma once
#include "CoreMinimal.h"
#include "EActivity.h"
#include "ActivityState.h"
#include "ActivitiesState.generated.h"

USTRUCT(BlueprintType)
struct FActivitiesState {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<EActivity, FActivityState> Activities;
    
    HK_PROJECT_API FActivitiesState();
};

