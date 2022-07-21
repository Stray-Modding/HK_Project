#pragma once
#include "CoreMinimal.h"
#include "NoiseSmootherFloat.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleCount;
    
    FNoiseSmootherFloat();
};

