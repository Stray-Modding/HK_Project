#pragma once
#include "CoreMinimal.h"
#include "FloatPIDController.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FFloatPIDController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float D;
    
    FFloatPIDController();
};

