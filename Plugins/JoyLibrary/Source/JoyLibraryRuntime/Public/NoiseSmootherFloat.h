#pragma once
#include "CoreMinimal.h"
#include "NoiseSmootherFloat.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SampleCount;
    
    FNoiseSmootherFloat();
};

