#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "CustomKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FCustomKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY()
    FKey Key;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    bool IsAxis;
    
    UPROPERTY()
    bool IsPad;
    
    UPROPERTY()
    bool IsNegativeScale;
    
    HK_PROJECT_API FCustomKeyMapping();
};

