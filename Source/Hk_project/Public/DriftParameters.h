#pragma once
#include "CoreMinimal.h"
#include "DriftParameters.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDriftParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AngleDriftFactorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedDriftFactorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DriftMultiplier;
    
    HK_PROJECT_API FDriftParameters();
};

