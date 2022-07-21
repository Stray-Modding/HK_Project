#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DroneSettings.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class HK_PROJECT_API UDroneSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BatteryRechargeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BatteryDechargeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BatteryStartToRumble;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StrongLightReactivationPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StrongLightInnerConeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StrongLightOutterConeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StrongLightAttenuation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageToApplyPerTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageApplicationTimeInSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* RadialDamageCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* DistanceDamageCurve;
    
    UDroneSettings();
};

