#pragma once
#include "CoreMinimal.h"
#include "EPrefabVariantRuleType.h"
#include "PrefabVariantRule.generated.h"

USTRUCT(BlueprintType)
struct PREFABASSET_API FPrefabVariantRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Scope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Rule;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPrefabVariantRuleType> RuleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    FPrefabVariantRule();
};

