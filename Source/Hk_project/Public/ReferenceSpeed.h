#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReferenceSpeed.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FReferenceSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName SpeedName;
    
    UPROPERTY(BlueprintReadWrite)
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform BeginMotion;
    
    HK_PROJECT_API FReferenceSpeed();
};

