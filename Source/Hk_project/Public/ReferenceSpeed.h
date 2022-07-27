#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReferenceSpeed.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FReferenceSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpeedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform BeginMotion;
    
    HK_PROJECT_API FReferenceSpeed();
};

