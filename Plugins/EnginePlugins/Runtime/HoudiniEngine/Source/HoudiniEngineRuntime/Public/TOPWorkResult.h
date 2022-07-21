#pragma once
#include "CoreMinimal.h"
#include "TOPWorkResultObject.h"
#include "TOPWorkResult.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FTOPWorkResult {
    GENERATED_BODY()
public:
    UPROPERTY(NonTransactional)
    int32 WorkItemIndex;
    
    UPROPERTY(Transient)
    int32 WorkItemID;
    
    UPROPERTY(NonTransactional)
    TArray<FTOPWorkResultObject> ResultObjects;
    
    FTOPWorkResult();
};

