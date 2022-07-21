#pragma once
#include "CoreMinimal.h"
#include "WorkItemTallyBase.h"
#include "WorkItemTally.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FWorkItemTally : public FWorkItemTallyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSet<int32> AllWorkItems;
    
    UPROPERTY()
    TSet<int32> WaitingWorkItems;
    
    UPROPERTY()
    TSet<int32> ScheduledWorkItems;
    
    UPROPERTY()
    TSet<int32> CookingWorkItems;
    
    UPROPERTY()
    TSet<int32> CookedWorkItems;
    
    UPROPERTY()
    TSet<int32> ErroredWorkItems;
    
    UPROPERTY()
    TSet<int32> CookCancelledWorkItems;
    
public:
    FWorkItemTally();
};

