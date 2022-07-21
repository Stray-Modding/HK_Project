#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "EInputTransitionMode.h"
#include "Camera/PlayerCameraManager.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECameraInputMode.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "HKPlayerCameraManager.generated.h"

class AHKPlayerCameraManager;
class AActor;
class USphereComponent;

UCLASS(NonTransient)
class HK_PROJECT_API AHKPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FCameraTransitionDelegate, AHKPlayerCameraManager*, CameraManager, const FTransform&, CurrentCameraTransform, AActor*, NextCamera, FViewTargetTransitionParams, TransitionParams, EInputTransitionMode, InputTransitionMode, float, InputTransitionTime);
    
    UPROPERTY(BlueprintAssignable)
    FCameraTransitionDelegate CameraChanged;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* m_collisionSphere;
    
    UPROPERTY(EditAnywhere)
    FVector m_maxDriftVelocity;
    
    UPROPERTY(EditAnywhere)
    FVector m_driftDeceleration;
    
    UPROPERTY(EditAnywhere)
    float m_maxDriftingAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float m_driftAngularDeceleration;
    
public:
    AHKPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void SetInputMode(ECameraInputMode _mode);
    
    UFUNCTION(BlueprintCallable)
    void PushFadeToBlack(float _fadeDuration);
    
    UFUNCTION(BlueprintCallable)
    void PushCamera(AActor* _actor, float _blendTime, TEnumAsByte<EViewTargetBlendFunction> _blendFunction, float _blendExp, bool _keepPreviousCameraForPlayerInput, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime, bool _lockRoll);
    
    UFUNCTION(BlueprintCallable)
    void PopFadeToBlack(float _fadeDuration);
    
    UFUNCTION(BlueprintCallable)
    void PopCamera(AActor* _actor, float _blendTime, TEnumAsByte<EViewTargetBlendFunction> _blendFunction, float _blendExp, bool _keepPreviousCameraForPlayerInput, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime, bool _lockRoll);
    
    UFUNCTION(BlueprintPure)
    bool IsViewTargetInStack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLookingAt(FVector _target, float _screenRatio, bool _checkObstacle, TEnumAsByte<ECollisionChannel> _obstacleChannel, TArray<AActor*> _obstaclesToIgnore) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFadedToBlack() const;
    
    UFUNCTION(BlueprintPure)
    ECameraInputMode GetInputMode() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetCameraStack() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCameraInput() const;
    
private:
    UFUNCTION()
    void _OnCameraActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
};

