#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "FuzzyBool.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FFuzzyBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> EasingType;
    
    FFuzzyBool();
};

