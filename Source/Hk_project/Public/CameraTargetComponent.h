#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "CameraTargetComponent.generated.h"

class UCurveFloat;
class UCameraComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCameraTargetComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Influence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCameraBackwardsMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ActivateOnView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewXMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewYMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewXMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewYMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseTarget;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableOnDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_influenceCoreRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_isKillZoneEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_killZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_maximumDirectionErrorTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_minimumDirectionErrorTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_influenceResponse_Curve;
    
public:
    UCameraTargetComponent();
    UFUNCTION(BlueprintCallable)
    void SetKillZoneEnable(bool _enable);
    
    UFUNCTION(BlueprintCallable)
    void SetKilled(bool _killed);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enabled);
    
    UFUNCTION(BlueprintPure)
    bool IsKilled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraDistanceOffset(UCameraComponent* _camera, float _xScreenLimit, float _yScreenLimit, float _cameraDistanceOffsetMultiplier) const;
    
private:
    UFUNCTION()
    void _OnEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION()
    void _OnBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
};

