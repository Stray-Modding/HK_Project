#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SmootherCurved.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherCurved {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_accelerationCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_decelerationCurve;
    
    UPROPERTY(EditAnywhere)
    float m_velocityChangeThreshold;
    
public:
    FSmootherCurved();
};

