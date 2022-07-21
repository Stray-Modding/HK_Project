#pragma once
#include "CoreMinimal.h"
#include "WorkItemTallyBase.h"
#include "AggregatedWorkItemTally.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FAggregatedWorkItemTally : public FWorkItemTallyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    int32 TotalWorkItems;
    
    UPROPERTY()
    int32 WaitingWorkItems;
    
    UPROPERTY()
    int32 ScheduledWorkItems;
    
    UPROPERTY()
    int32 CookingWorkItems;
    
    UPROPERTY()
    int32 CookedWorkItems;
    
    UPROPERTY()
    int32 ErroredWorkItems;
    
    UPROPERTY()
    int32 CookCancelledWorkItems;
    
public:
    FAggregatedWorkItemTally();
};

