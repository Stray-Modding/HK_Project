#pragma once
#include "CoreMinimal.h"
#include "ActionDisplayKeyMappings.h"
#include "ActionDisplay.generated.h"

USTRUCT(BlueprintType)
struct FActionDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FActionDisplayKeyMappings> KeyMappingsSets;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> ActionBindingNames;
    
    UPROPERTY(BlueprintReadWrite)
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite)
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowAllKeys;
    
    HK_PROJECT_API FActionDisplay();
};

