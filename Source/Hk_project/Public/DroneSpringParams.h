#pragma once
#include "CoreMinimal.h"
#include "DroneSpringParams.generated.h"

USTRUCT(BlueprintType)
struct FDroneSpringParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite)
    float CriticalDamping;
    
    UPROPERTY(BlueprintReadWrite)
    float RotationTimeTo90;
    
    HK_PROJECT_API FDroneSpringParams();
};

