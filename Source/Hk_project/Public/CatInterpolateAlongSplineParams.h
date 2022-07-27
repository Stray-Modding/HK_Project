#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CatInterpolateAlongSplineParams.generated.h"

USTRUCT(BlueprintType)
struct FCatInterpolateAlongSplineParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResyncTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoOverrideRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator OverridenRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EarliestExit;
    
    HK_PROJECT_API FCatInterpolateAlongSplineParams();
};

