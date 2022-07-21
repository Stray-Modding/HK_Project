#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "FuzzyBool.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FFuzzyBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> EasingType;
    
    FFuzzyBool();
};

