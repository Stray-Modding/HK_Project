#pragma once
#include "CoreMinimal.h"
#include "LookAtData.h"
#include "CatLookAtEntry.generated.h"

USTRUCT(BlueprintType)
struct FCatLookAtEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLookAtData Data;
    
    HK_PROJECT_API FCatLookAtEntry();
};

