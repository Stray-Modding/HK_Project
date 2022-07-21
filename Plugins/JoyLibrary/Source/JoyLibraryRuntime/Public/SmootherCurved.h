#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SmootherCurved.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherCurved {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_accelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_decelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_velocityChangeThreshold;
    
public:
    FSmootherCurved();
};

