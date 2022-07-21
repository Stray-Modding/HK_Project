#pragma once
#include "CoreMinimal.h"
#include "NoiseSmootherDouble.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherDouble {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleCount;
    
    FNoiseSmootherDouble();
};

