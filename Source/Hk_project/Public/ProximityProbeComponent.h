#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "EProximityProbeDirection.h"
#include "ProximityProbeComponent.generated.h"

class UProximitySweepProbe;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UProximityProbeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreFront;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProbeEndDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProbeStartDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProbeRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
private:
    UPROPERTY(Transient)
    UProximitySweepProbe* m_probes[6];
    
public:
    UProximityProbeComponent();
    UFUNCTION(BlueprintPure)
    bool IsObstacleDetected(TEnumAsByte<EProximityProbeDirection> _probeIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetObstacleLocation(TEnumAsByte<EProximityProbeDirection> _probeIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetObstacleDistance(TEnumAsByte<EProximityProbeDirection> _probeIndex) const;
    
};

