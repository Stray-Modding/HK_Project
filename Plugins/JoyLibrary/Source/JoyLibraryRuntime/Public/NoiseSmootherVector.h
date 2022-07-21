#pragma once
#include "CoreMinimal.h"
#include "NoiseSmootherVector.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SampleCount;
    
    FNoiseSmootherVector();
};

