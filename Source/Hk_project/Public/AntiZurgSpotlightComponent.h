#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SpotLightComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AntiZurgSpotlightComponent.generated.h"

class UCurveFloat;
class UNavAreaBase;
class USphereComponent;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAntiZurgSpotlightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canRepulseZurgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useDynamicObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_applyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageToApplyPerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageApplicationDelayInSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_drawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> m_obstacleNavigationArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_traceEveryFrame;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_lightTraceChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_obstacleSphereOverlappChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* m_obstacleSphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_radialDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointVisibleByLight(FVector _location, FBox _ownerBox, AActor* _actorToIgnore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHitResult> GetSpotLightHitResults() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USphereComponent* GetSphereObstacleComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveFloat* GetRadialDamageCurve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveFloat* GetDistanceDamageCurve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageToApplyPerTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageApplicationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindBestVisiblePointBySpotlight(FVector& _result, const FBox _box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputePointLightingRatio(FVector _pointLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRepulseZurgs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanApplyDamage() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnObstacleSphereOverlapEnd(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnObstacleSphereOverlapBegin(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void _OnLightableOwnerEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

