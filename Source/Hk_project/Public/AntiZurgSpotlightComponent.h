#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "Components/SpotLightComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AntiZurgSpotlightComponent.generated.h"

class AActor;
class UNavAreaBase;
class USphereComponent;
class UCurveFloat;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAntiZurgSpotlightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_canRepulseZurgs;
    
    UPROPERTY(EditAnywhere)
    bool m_useDynamicObstacle;
    
    UPROPERTY(EditAnywhere)
    bool m_applyDamage;
    
    UPROPERTY(EditAnywhere)
    float m_damageToApplyPerDelay;
    
    UPROPERTY(EditAnywhere)
    float m_damageApplicationDelayInSecond;
    
    UPROPERTY(EditAnywhere)
    bool m_drawDebug;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavAreaBase> m_obstacleNavigationArea;
    
    UPROPERTY(EditAnywhere)
    bool m_traceEveryFrame;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_lightTraceChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_obstacleSphereOverlappChannel;
    
    UPROPERTY(Instanced)
    USphereComponent* m_obstacleSphereComponent;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_radialDamageCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_distanceDamageCurve;
    
public:
    UAntiZurgSpotlightComponent();
    UFUNCTION(BlueprintCallable)
    void SetRadialDamageCurve(UCurveFloat* _newRadialDamageCurve);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceDamageCurve(UCurveFloat* _newDistanceDamageCurve);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageToApplyPerTime(float _damageToApplyPerTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageApplicationTime(float _damageToApplyPerTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCanRepulseZurgs(bool _canRepulseZurg);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyDamage(bool _applyDamage);
    
    UFUNCTION(BlueprintPure)
    bool IsPointVisibleByLight(FVector _location, FBox _ownerBox, AActor* _actorToIgnore) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FHitResult> GetSpotLightHitResults() const;
    
    UFUNCTION(BlueprintPure)
    USphereComponent* GetSphereObstacleComponent() const;
    
    UFUNCTION(BlueprintPure)
    UCurveFloat* GetRadialDamageCurve() const;
    
    UFUNCTION(BlueprintPure)
    UCurveFloat* GetDistanceDamageCurve() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageToApplyPerTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageApplicationTime() const;
    
    UFUNCTION(BlueprintPure)
    void FindBestVisiblePointBySpotlight(FVector& _result, const FBox _box);
    
    UFUNCTION(BlueprintPure)
    float ComputePointLightingRatio(FVector _pointLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool CanRepulseZurgs() const;
    
    UFUNCTION(BlueprintPure)
    bool CanApplyDamage() const;
    
private:
    UFUNCTION()
    void _OnObstacleSphereOverlapEnd(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION()
    void _OnObstacleSphereOverlapBegin(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void _OnLightableOwnerEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

