#pragma once
#include "CoreMinimal.h"
#include "DroneSpringParams.generated.h"

USTRUCT(BlueprintType)
struct FDroneSpringParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationTimeTo90;
    
    HK_PROJECT_API FDroneSpringParams();
};

