#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "EInputTransitionMode.h"
#include "Camera/PlayerCameraManager.h"
#include "ECameraInputMode.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "HKPlayerCameraManager.generated.h"

class AActor;
class AHKPlayerCameraManager;
class USphereComponent;

UCLASS(Blueprintable, NonTransient)
class HK_PROJECT_API AHKPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FCameraTransitionDelegate, AHKPlayerCameraManager*, CameraManager, const FTransform&, CurrentCameraTransform, AActor*, NextCamera, FViewTargetTransitionParams, TransitionParams, EInputTransitionMode, InputTransitionMode, float, InputTransitionTime);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTransitionDelegate CameraChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* m_collisionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_maxDriftVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_driftDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxDriftingAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewTargetInStack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLookingAt(FVector _target, float _screenRatio, bool _checkObstacle, TEnumAsByte<ECollisionChannel> _obstacleChannel, TArray<AActor*> _obstaclesToIgnore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadedToBlack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECameraInputMode GetInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetCameraStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCameraInput() const;
    
private:
    UFUNCTION()
    void _OnCameraActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
};

