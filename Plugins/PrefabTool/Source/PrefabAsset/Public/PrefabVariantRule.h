#pragma once
#include "CoreMinimal.h"
#include "EPrefabVariantRuleType.h"
#include "PrefabVariantRule.generated.h"

USTRUCT(BlueprintType)
struct PREFABASSET_API FPrefabVariantRule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Scope;
    
    UPROPERTY(EditAnywhere)
    FString Rule;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPrefabVariantRuleType> RuleType;
    
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    FPrefabVariantRule();
};

