#pragma once
#include "CoreMinimal.h"
#include "NoiseSmootherRotation.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleCount;
    
    FNoiseSmootherRotation();
};

