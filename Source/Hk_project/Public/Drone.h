#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "DroneMovementTarget.h"
#include "Engine/EngineTypes.h"
#include "EDroneGUIAllowInputMode.h"
#include "UObject/NoExportTypes.h"
#include "DroneSpringParams.h"
#include "DroneMoveToParams.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Drone.generated.h"

class ADrone;
class UWidgetComponent;
class ACatPawn;
class UScannableComponent;
class USkeletalMeshComponent;
class UCapsuleComponent;
class USceneComponent;
class ABackpack;
class UUserWidget;
class UDialogUserWidget;
class UHierarchicalStateMachine;
class UAnimSequence;
class UDroneUsableComponent;
class AHKPlayerController;

UCLASS()
class HK_PROJECT_API ADrone : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneActionDelegate, ADrone*, Drone);
    
    UPROPERTY(BlueprintAssignable)
    FDroneActionDelegate Equipped;
    
    UPROPERTY(BlueprintAssignable)
    FDroneActionDelegate Unequipped;
    
    UPROPERTY(BlueprintAssignable)
    FDroneActionDelegate GUIOpened;
    
    UPROPERTY(BlueprintAssignable)
    FDroneActionDelegate GUIClosed;
    
    UPROPERTY(BlueprintAssignable)
    FDroneActionDelegate FoldingOver;
    
    UPROPERTY(BlueprintAssignable)
    FDroneActionDelegate UnfoldingOver;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCapsuleComponent* m_capsule;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* m_mesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UWidgetComponent* m_GUIWidgetComponent;
    
private:
    UPROPERTY(EditAnywhere)
    float m_timeIdleBeforeFoldBack;
    
    UPROPERTY()
    TArray<FDroneMovementTarget> m_followTargetsList;
    
    UPROPERTY()
    FDroneMovementTarget m_currentFollowTarget;
    
    UPROPERTY(Instanced)
    USceneComponent* m_foldedComponent;
    
    UPROPERTY()
    ABackpack* M_BackPack;
    
    UPROPERTY(Instanced)
    USceneComponent* m_customLookComponent;
    
    UPROPERTY(Instanced)
    TArray<UScannableComponent*> m_scanTargets;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> m_scanCollisionChannels;
    
    UPROPERTY(EditAnywhere)
    float m_minAPNFov;
    
    UPROPERTY(EditAnywhere)
    float m_maxAPNFov;
    
    UPROPERTY(EditAnywhere)
    float m_APNRotateSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_APNZoomSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_scanRadius;
    
    UPROPERTY(EditAnywhere)
    float m_strongLightPressedTime;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> m_baseWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDialogUserWidget> m_dialogWidgetClass;
    
    UPROPERTY(SaveGame)
    bool m_isLightUnlocked;
    
    UPROPERTY(SaveGame)
    bool m_isStrongLightUnlocked;
    
    UPROPERTY(SaveGame)
    uint8 m_strongLightDisabled;
    
    UPROPERTY(SaveGame)
    uint8 m_weakLightDisabled;
    
    UPROPERTY(Transient)
    UHierarchicalStateMachine* m_stateMachine;
    
public:
    ADrone();
protected:
    UFUNCTION(BlueprintCallable)
    void UnfoldDone();
    
public:
    UFUNCTION(BlueprintCallable)
    void unfold();
    
    UFUNCTION(BlueprintImplementableEvent)
    void TickSpring(float _dt, const FTransform& _target, const FDroneSpringParams& _params, float _movementRatio);
    
    UFUNCTION(BlueprintImplementableEvent)
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeakLightUnrequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeakLightRequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeakLightOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeakLightOff();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnfoldedIdleTick(float DeltaTime);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnfoldedEnter();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleported();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStrongLightUnrequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStrongLightRequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStrongLightQuickReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStrongLightOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStrongLightOff();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopUnfold();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopFold();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStartUnfold();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStartFold();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMovementTargetChanged();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnForceUnfold();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFollowingTarget(float _dt, const FVector& _targetLocation, const FRotator& _targetRotation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFollowingCat(float _dt, const FVector& _targetLocation, const FRotator& _targetRotation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFoldedTick(float _dt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFoldedExit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFoldedEnter();
    
    UFUNCTION(BlueprintCallable)
    void OnCustomAnimationOver();
    
    UFUNCTION(BlueprintPure)
    bool IsWeakLightRequested() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWeakLightOn() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnfolding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnfolded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStrongLightUnlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStrongLightRequested() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStrongLightOn() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingCustomAnimation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOut() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLightUnlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGUIOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFollowingTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFollowingCat() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFolding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFolded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCustomAnimationLooping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBaseGUIDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAutoFoldWhenIdleEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool HasReachedTarget(float _distancteThreshold, float _angleThreshold) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UScannableComponent*> GetScanTargets() const;
    
    UFUNCTION(BlueprintPure)
    float GetMovementRatio() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookRotation() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EDroneGUIAllowInputMode> GetGUIAllowInputMode() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetFoldedSocket(FName& _socketName) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetCurrentTarget() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetCurrentCustomAnimation() const;
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(BlueprintNativeEvent)
    void BeforeSaved();
    
    UFUNCTION(BlueprintNativeEvent)
    void AfterLoaded();
    
private:
    UFUNCTION()
    void _OnUsableUseSuccess(UDroneUsableComponent* _usable);
    
    UFUNCTION()
    void _OnToggleCameraPressed();
    
    UFUNCTION()
    void _OnGUIOpenPressed();
    
    UFUNCTION()
    void _OnCatUnpossessed(ACatPawn* _cat, AHKPlayerController* _playerController);
    
    UFUNCTION()
    void _OnCatPossessed(ACatPawn* _cat, AHKPlayerController* _playerController);
    
};

