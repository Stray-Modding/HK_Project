#pragma once
#include "CoreMinimal.h"
#include "FloatPIDController.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FFloatPIDController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float D;
    
    FFloatPIDController();
};

