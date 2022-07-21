#pragma once
#include "CoreMinimal.h"
#include "StatGroupBudget.generated.h"

USTRUCT(BlueprintType)
struct FStatGroupBudget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    float Budget;
    
    HK_PROJECT_API FStatGroupBudget();
};

