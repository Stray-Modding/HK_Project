#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Chaos/ChaosEngineInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEventsComponent.generated.h"

class UPrimitiveComponent;
class UPhysicsEventsComponent;
class UMeshComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UPhysicsEventsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSurfaceMovingDelegate, UPhysicsEventsComponent*, _physicsEventsComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FImpactDelegate, UPhysicsEventsComponent*, _physicsEventsComponent, FVector, _location, float, _amplitude, TEnumAsByte<EPhysicalSurface>, _surfaceType);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpactThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpactMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpactMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlidingMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlidingMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollingMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollingMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SurfaceMovingMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SurfaceMovingMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Debug;
    
    UPROPERTY(BlueprintAssignable)
    FSurfaceMovingDelegate SurfaceMovingBegin;
    
    UPROPERTY(BlueprintAssignable)
    FSurfaceMovingDelegate SurfaceMovingEnd;
    
    UPROPERTY(BlueprintAssignable)
    FImpactDelegate Impact;
    
private:
    UPROPERTY(Instanced)
    UMeshComponent* m_meshToObserve;
    
public:
    UPhysicsEventsComponent();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void UpdateDebug();
    
    UFUNCTION(BlueprintNativeEvent)
    void Update();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAttachMeshComponent(UMeshComponent* _mesh);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnSurfaceMovingEnd();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSurfaceMovingBegin();
    
    UFUNCTION()
    void OnMeshWake(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    UFUNCTION()
    void OnMeshSleep(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    /*UFUNCTION(BlueprintNativeEvent)
    void OnImpact(FVector _location, float _amplitude, TEnumAsByte<EPhysicalSurface> _surfaceType);*/
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSurfaceMoving() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Initialize();
    
public:
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetCurrentHitMaterial() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentHitLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHitAmplitude() const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetAttachMeshComponent() const;
    
    UFUNCTION(BlueprintPure)
    float ComputeSurfaceMovingIntensityForMesh(UMeshComponent* _mesh) const;
    
    UFUNCTION(BlueprintPure)
    float ComputeSurfaceMovingIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float ComputeSlidingIntensityForMesh(UMeshComponent* _mesh) const;
    
    UFUNCTION(BlueprintPure)
    float ComputeSlidingIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float ComputeRollingIntensityForMesh(UMeshComponent* _mesh) const;
    
    UFUNCTION(BlueprintPure)
    float ComputeRollingIntensity() const;
    
private:
    UFUNCTION()
    void _OnMeshHit(UPrimitiveComponent* _hitComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, FVector _normalImpulse, const FHitResult& _hit);
    
};

