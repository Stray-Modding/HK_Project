#pragma once
#include "CoreMinimal.h"
#include "NoiseSmootherRotation.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SampleCount;
    
    FNoiseSmootherRotation();
};

