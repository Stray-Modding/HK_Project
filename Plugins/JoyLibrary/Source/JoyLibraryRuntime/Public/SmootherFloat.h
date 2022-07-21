#pragma once
#include "CoreMinimal.h"
#include "SmootherFloat.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeTo90Percent;
    
    UPROPERTY(BlueprintReadWrite)
    float Value;
    
    UPROPERTY(BlueprintReadWrite)
    float Velocity;
    
    FSmootherFloat();
};

