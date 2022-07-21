#pragma once
#include "CoreMinimal.h"
#include "StatGroupBudget.generated.h"

USTRUCT(BlueprintType)
struct FStatGroupBudget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Budget;
    
    HK_PROJECT_API FStatGroupBudget();
};

