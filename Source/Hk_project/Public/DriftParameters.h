#pragma once
#include "CoreMinimal.h"
#include "DriftParameters.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDriftParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* AngleDriftFactorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* SpeedDriftFactorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftMultiplier;
    
    HK_PROJECT_API FDriftParameters();
};

