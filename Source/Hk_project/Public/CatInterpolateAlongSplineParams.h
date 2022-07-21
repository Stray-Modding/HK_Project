#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CatInterpolateAlongSplineParams.generated.h"

USTRUCT(BlueprintType)
struct FCatInterpolateAlongSplineParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ResyncTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoOverrideRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator OverridenRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EarliestExit;
    
    HK_PROJECT_API FCatInterpolateAlongSplineParams();
};

