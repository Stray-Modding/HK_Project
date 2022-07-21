#pragma once
#include "CoreMinimal.h"
#include "NoiseSmootherVector.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleCount;
    
    FNoiseSmootherVector();
};

