#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEventsComponent.generated.h"

class UPhysicsEventsComponent;
class UMeshComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UPhysicsEventsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSurfaceMovingDelegate, UPhysicsEventsComponent*, _physicsEventsComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FImpactDelegate, UPhysicsEventsComponent*, _physicsEventsComponent, FVector, _location, float, _amplitude, TEnumAsByte<EPhysicalSurface>, _surfaceType);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollingMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollingMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceMovingMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceMovingMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceMovingDelegate SurfaceMovingBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceMovingDelegate SurfaceMovingEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactDelegate Impact;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* m_meshToObserve;
    
public:
    UPhysicsEventsComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Update();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAttachMeshComponent(UMeshComponent* _mesh);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSurfaceMovingEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSurfaceMovingBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnMeshWake(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshSleep(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnImpact(FVector _location, float _amplitude, EPhysicalSurface _surfaceType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSurfaceMoving() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
public:
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetCurrentHitMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentHitLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHitAmplitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetAttachMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeSurfaceMovingIntensityForMesh(UMeshComponent* _mesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeSurfaceMovingIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeSlidingIntensityForMesh(UMeshComponent* _mesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeSlidingIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeRollingIntensityForMesh(UMeshComponent* _mesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeRollingIntensity() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnMeshHit(UPrimitiveComponent* _hitComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, FVector _normalImpulse, const FHitResult& _hit);
    
};

