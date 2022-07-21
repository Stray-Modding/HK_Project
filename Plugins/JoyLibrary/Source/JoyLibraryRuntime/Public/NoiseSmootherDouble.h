#pragma once
#include "CoreMinimal.h"
#include "NoiseSmootherDouble.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherDouble {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SampleCount;
    
    FNoiseSmootherDouble();
};

