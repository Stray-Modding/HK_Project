#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "DroneMovementTarget.h"
#include "Engine/EngineTypes.h"
#include "DroneSpringParams.h"
#include "DroneMoveToParams.h"
#include "EDroneGUIAllowInputMode.h"
#include "Drone.generated.h"

class UWidgetComponent;
class UCapsuleComponent;
class ADrone;
class USkeletalMeshComponent;
class USceneComponent;
class UUserWidget;
class ABackpack;
class ACatPawn;
class UScannableComponent;
class UDialogUserWidget;
class UHierarchicalStateMachine;
class UAnimSequence;
class UDroneUsableComponent;
class AHKPlayerController;

UCLASS(Blueprintable)
class HK_PROJECT_API ADrone : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneActionDelegate, ADrone*, Drone);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroneActionDelegate Equipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroneActionDelegate Unequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroneActionDelegate GUIOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroneActionDelegate GUIClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroneActionDelegate FoldingOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroneActionDelegate UnfoldingOver;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* m_GUIWidgetComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeIdleBeforeFoldBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDroneMovementTarget> m_followTargetsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroneMovementTarget m_currentFollowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_foldedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABackpack* M_BackPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_customLookComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UScannableComponent*> m_scanTargets;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> m_scanCollisionChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minAPNFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxAPNFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_APNRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_APNZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_scanRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_strongLightPressedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_baseWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDialogUserWidget> m_dialogWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_isLightUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_isStrongLightUnlocked;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 m_strongLightDisabled;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 m_weakLightDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_stateMachine;
    
public:
    ADrone();
protected:
    UFUNCTION(BlueprintCallable)
    void UnfoldDone();
    
public:
    UFUNCTION(BlueprintCallable)
    void unfold();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickSpring(float _dt, const FTransform& _target, const FDroneSpringParams& _params, float _movementRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickMoveTo(float _dt, const FTransform& _target, const FDroneMoveToParams& _params, float _movementRatio);
    
    UFUNCTION(BlueprintCallable)
    void TeleportDrone(const FTransform& _target);
    
    UFUNCTION(BlueprintCallable)
    void StopCustomAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetWeakLightOn(bool _on);
    
    UFUNCTION(BlueprintCallable)
    void SetStrongLightUnlocked(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetStrongLightOn(bool _on);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementRatio(float _value);
    
    UFUNCTION(BlueprintCallable)
    void SetLightUnlocked(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoFoldWhenIdleEnabled(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void RequestOpenGUI(TSubclassOf<UUserWidget> _widgetClass, TEnumAsByte<EDroneGUIAllowInputMode> _allowInputMode);
    
    UFUNCTION(BlueprintCallable)
    void PushWeakLightDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushStrongLightDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushSpringToSocket(USceneComponent* _targetComponent, FName _targetSocket, FDroneSpringParams _params, int32 _priority, bool _unfold);
    
    UFUNCTION(BlueprintCallable)
    void PushSpringToActor(AActor* _targetActor, FDroneSpringParams _params, int32 _priority, bool _unfold);
    
    UFUNCTION(BlueprintCallable)
    void PushMoveToSocket(USceneComponent* _targetComponent, FName _targetSocket, FDroneMoveToParams _params, int32 _priority, bool _unfold);
    
    UFUNCTION(BlueprintCallable)
    void PushMoveToActor(AActor* _targetActor, FDroneMoveToParams _params, int32 _priority, bool _unfold);
    
    UFUNCTION(BlueprintCallable)
    void PopWeakLightDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopStrongLightDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopSpringToSocket(USceneComponent* _targetComponent, FName _targetSocket);
    
    UFUNCTION(BlueprintCallable)
    void PopSpringToActor(AActor* _targetActor);
    
    UFUNCTION(BlueprintCallable)
    void PopMoveToSocket(USceneComponent* _targetComponent, FName _targetSocket);
    
    UFUNCTION(BlueprintCallable)
    void PopMoveToActor(AActor* _targetActor);
    
    UFUNCTION(BlueprintCallable)
    void PlayCustomAnimation(UAnimSequence* _animation, bool _isLooping);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* OpenGUI(TSubclassOf<UUserWidget> _widgetClass, TEnumAsByte<EDroneGUIAllowInputMode> _allowInputMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeakLightUnrequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeakLightRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeakLightOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeakLightOff();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnfoldedIdleTick(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnfoldedEnter();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleported();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStrongLightUnrequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStrongLightRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStrongLightQuickReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStrongLightOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStrongLightOff();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopUnfold();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopFold();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartUnfold();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartFold();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementTargetChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceUnfold();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFollowingTarget(float _dt, const FVector& _targetLocation, const FRotator& _targetRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFollowingCat(float _dt, const FVector& _targetLocation, const FRotator& _targetRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFoldedTick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFoldedExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFoldedEnter();
    
    UFUNCTION(BlueprintCallable)
    void OnCustomAnimationOver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeakLightRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeakLightOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnfolding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnfolded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrongLightUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrongLightRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrongLightOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingCustomAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLightUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGUIOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowingTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowingCat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFolding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFolded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomAnimationLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBaseGUIDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoFoldWhenIdleEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedTarget(float _distancteThreshold, float _angleThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UScannableComponent*> GetScanTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLookRotation() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EDroneGUIAllowInputMode> GetGUIAllowInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetFoldedSocket(FName& _socketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetCurrentCustomAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABackpack* GetBackpack() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FoldDone();
    
public:
    UFUNCTION(BlueprintCallable)
    void fold();
    
    UFUNCTION(BlueprintCallable)
    void EnableExamineRotation();
    
    UFUNCTION(BlueprintCallable)
    void EnableBaseGUI();
    
    UFUNCTION(BlueprintCallable)
    void DisableExamineRotation();
    
    UFUNCTION(BlueprintCallable)
    void DisableBaseGUI();
    
    UFUNCTION(BlueprintCallable)
    void CloseGUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterLoaded();
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnUsableUseSuccess(UDroneUsableComponent* _usable);
    
    UFUNCTION(BlueprintCallable)
    void _OnToggleCameraPressed();
    
    UFUNCTION(BlueprintCallable)
    void _OnGUIOpenPressed();
    
    UFUNCTION(BlueprintCallable)
    void _OnCatUnpossessed(ACatPawn* _cat, AHKPlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    void _OnCatPossessed(ACatPawn* _cat, AHKPlayerController* _playerController);
    
};

