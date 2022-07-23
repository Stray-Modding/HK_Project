#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EDroidLocomotionBehavior.h"
#include "EDroidMovementState.h"
#include "EDroidBehaviorState.h"
#include "EDroidPosture.h"
#include "DialogLine.h"
#include "UObject/NoExportTypes.h"
#include "EDroidOnMeowedBehavior.h"
#include "UObject/NoExportTypes.h"
#include "EDroidLookAtType.h"
#include "LookAtData.h"
#include "PlayingAnimation.h"
#include "Engine/EngineTypes.h"
#include "EDroidInputMode.h"
#include "PlayingAnimationSynchronizedActors.h"
#include "Engine/EngineTypes.h"
#include "EDroidMovementSplineMode.h"
#include "DroidMovementAnimationSettings.h"
#include "DroidManager.h"
#include "DroidUsableComponent.h"
#include "CharacterDroid.generated.h"

class AActor;
class UDroidMovementAnimationSettings;
class UCanvas;
class USkeletalMeshComponent;
class UAnimSequence;
class USplineComponent;
class UStreamingComponent;
class UDroidUsableComponent;
class USaveComponent;
class UGridSnappingComponent;
class UCapsuleComponent;
class UArrowComponent;
class UTalkableComponent;
class UMaterialInstance;
class ADroidManager;
class AAIController;
class USceneComponent;
class UHierarchicalStateMachine;
class ADialog;
class UPrimitiveComponent;
class ACatPawn;
class ARecastNavMesh;
class ACharacterDroid;

UCLASS()
class HK_PROJECT_API ACharacterDroid : public ACharacter/*, public IActivableInterface*/ {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIdleAnimationPositionChangedDelegate, float, newPosition);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIdleAnimationChangedDelegate, UAnimSequence*, Animation, bool, skipBlend);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroidMovementStateChangeDelegate, EDroidMovementState, newMovementState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroidMovementAnimationChangeDelegate, UDroidMovementAnimationSettings*, newAnimationSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroidLocomotionBehaviorChanged, EDroidLocomotionBehavior, newLocomotionBehavior);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroidBehaviorChanged, EDroidBehaviorState, newBehavior);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroidActivationChangeDelegate, bool, activated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentPostureChanged, EDroidPosture, newValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBooleanChangedDelegate, bool, newValue);
    
    UPROPERTY(BlueprintAssignable)
    FDroidMovementAnimationChangeDelegate OnDroidMovementAnimationSettingsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDroidActivationChangeDelegate OnDroidActivationChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIdleAnimationChangedDelegate IdleAnimationChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIdleAnimationPositionChangedDelegate IdleAnimationPositionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBooleanChangedDelegate IsPlayingAnimationChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBooleanChangedDelegate IsRepellingCatChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBooleanChangedDelegate IsWaitingForInteractionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBooleanChangedDelegate IsWithinDialogChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBooleanChangedDelegate IsLookEnabledChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCurrentPostureChanged CurrentPostureChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBooleanChangedDelegate IsShowDirectionEnabledChanged;
    
    UPROPERTY(BlueprintAssignable)
    FBooleanChangedDelegate IsInRepelModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDroidMovementStateChangeDelegate OnDroidMovementStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDroidBehaviorChanged OnDroidBehaviorChanged;
    
    UPROPERTY(BlueprintAssignable)
    FDroidLocomotionBehaviorChanged OnDroidLocomotionBehaviorChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_drawMoveToDebug;
    
    UPROPERTY(EditAnywhere)
    float m_maxAngleToStartTurning;
    
    UPROPERTY(BlueprintReadOnly)
    float m_movementTargetAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float m_movementTargetSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float m_movementSteppingLateralDistance;
    
    UPROPERTY(BlueprintReadOnly)
    float m_movementSteppingFrontalDistance;
    
    UPROPERTY(BlueprintReadOnly)
    float m_currentMoveToStopDistance;
    
    UPROPERTY(BlueprintReadOnly)
    float m_currentLateralAvoidanceValue;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    USaveComponent* m_saveComponent;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UStreamingComponent* m_streamingComponent;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UGridSnappingComponent* m_catDetectorGridSnapping;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UCapsuleComponent* m_catDetector;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UCapsuleComponent* m_repelZone;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UArrowComponent* m_repelDirection;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleDefaultsOnly)
    UTalkableComponent* m_talkable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USplineComponent* m_pathFindSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_doHateCats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_faceCatDuringRepel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UMaterialInstance* m_baseScreenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UMaterialInstance* m_exchangeScreenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    UMaterialInstance* m_talkScreenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool m_doHeadFollowCat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    UAnimSequence* m_idleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_lookAtSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* m_currentStumbleAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* m_currentFallingAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* m_currentRaiseFromFrontAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* m_currentRaiseFromBackAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform m_initialMeshRelativeTransform;
    
private:
    UPROPERTY()
    ADroidManager* m_droidManager;
    
    UPROPERTY()
    AAIController* m_aiController;
    
    UPROPERTY(EditAnywhere)
    UDroidMovementAnimationSettings* m_currentMovementAnimationSettings;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDroidUsableComponent* m_currentUsable;
    
    UPROPERTY(EditAnywhere)
    bool m_overrideLookAt;
    
    UPROPERTY(EditAnywhere)
    FVector m_lookAtOverrideDirection;
    
    UPROPERTY(EditAnywhere)
    EDroidLookAtType m_currentLookAtType;
    
    UPROPERTY()
    FLookAtData m_userLookAtData;
    
    UPROPERTY()
    FLookAtData m_autonomousLookAtData;
    
    UPROPERTY()
    FLookAtData m_dialogLookAtData;
    
    UPROPERTY()
    FLookAtData m_overrideLookAtData;
    
    UPROPERTY()
    FLookAtData m_showDirectionData;
    
    UPROPERTY()
    FLookAtData m_userShowDirection;
    
    UPROPERTY()
    FLookAtData m_autonomousShowDirection;
    
    UPROPERTY(EditAnywhere)
    bool m_startsWithCollisionEnabled;
    
    UPROPERTY(EditAnywhere)
    FName m_takeActorSocketName;
    
    UPROPERTY(EditAnywhere)
    FName m_headSocketName;
    
    UPROPERTY(EditAnywhere)
    float m_aboutToStumbleTime;
    
    UPROPERTY(EditAnywhere)
    float m_stumbleChargeTime;
    
    UPROPERTY(EditAnywhere)
    float m_stumbledTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;
    
    UPROPERTY(EditAnywhere)
    float m_turnTowardsSpeedRatio;
    
    UPROPERTY(EditDefaultsOnly)
    float m_minimumAngleForTurnTowardInDegree;
    
    UPROPERTY(EditAnywhere)
    float m_repelMinimumTime;
    
    UPROPERTY(EditAnywhere)
    float m_repelPreparationDistance;
    
    UPROPERTY(EditAnywhere)
    float m_repelPreparationDistanceHysteresis;
    
    UPROPERTY(EditAnywhere)
    bool m_lookAtCatWhenWaitingObject;
    
    UPROPERTY(SaveGame)
    bool m_isMet;
    
    UPROPERTY(SaveGame)
    bool m_shouldCollisionBeEnabled;
    
    UPROPERTY(Transient)
    UHierarchicalStateMachine* m_sstateMachine;
    
    UPROPERTY(EditDefaultsOnly)
    float m_startingAngleCorrectionMaximum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_startingCorrectionStartDistance;
    
    UPROPERTY(EditAnywhere)
    bool m_useManualSkeletalMeshRefreshSetting;
    
    UPROPERTY(EditAnywhere)
    bool m_alwaysStationary;
    
    UPROPERTY(EditAnywhere)
    EDroidOnMeowedBehavior m_currentOnMeowedBehavior;
    
    UPROPERTY(SaveGame)
    bool m_shouldBeActive;
    
    UPROPERTY(Instanced)
    TArray<USkeletalMeshComponent*> m_attachedSkeletalMeshComponents;
    
public:
    ACharacterDroid();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ThrowObjectTo(UAnimSequence* _throwAnimation, AActor* _throwToThisActor, float _trajectoryArc, bool _blendWithIdle);
    
    UFUNCTION(BlueprintCallable)
    void TakeActor(AActor* _actorToTake);
    
    UFUNCTION(BlueprintCallable)
    void Stumble(AActor* _stumbledUpon);
    
    UFUNCTION(BlueprintCallable)
    void StopUseActor();
    
    UFUNCTION(BlueprintCallable)
    void StopMoveTo();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StepTo(FTransform _stepToTransform);
    
    UFUNCTION(BlueprintCallable)
    void StartUseActor(AActor* _actorToUse);
    
    UFUNCTION(BlueprintPure)
    bool ShouldSkipIdleAnimationBlend() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTurnTowardsTarget(FLookAtData _target);
    
    UFUNCTION(BlueprintCallable)
    void SetTurnTowardsEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetShowDirection(FLookAtData _data, bool _isAutonomous);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPosture(EDroidPosture _newPosture);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOnMeowedBehavior(EDroidOnMeowedBehavior _newOnMeowedBehavior);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementState(EDroidMovementState _movementMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementAnimationSettings(UDroidMovementAnimationSettings* _newMovementSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtType(EDroidLookAtType _newLookAtType);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAt(FLookAtData _lookAtData);
    
    UFUNCTION(BlueprintCallable)
    void SetInputMode(EDroidInputMode _inputMode);
    
    UFUNCTION(BlueprintCallable)
    void SetIdlePosition(float _position);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleAnimation(UAnimSequence* _animation, bool _skipBlend);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDisturbed(bool _disturbed);
    
    UFUNCTION(BlueprintCallable)
    void SetDialog(ADialog* _dialog);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnabled(bool _enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBehaviorState(EDroidBehaviorState _newBehaviorState);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushScreenMaterial(FName _id, UMaterialInstance* _materialInstance, int32 _priority);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Posture_Stumbling_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_Stumbling_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_Stumbling_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_StandingUp_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_StandingUp_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_StandingUp_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_RisingUp_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_RisingUp_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_RisingUp_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_Ragdoll_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_Ragdoll_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_Ragdoll_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_Falling_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_Falling_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Posture_Falling_Enter();
    
public:
    UFUNCTION(BlueprintCallable)
    void PopScreenMaterial(FName _id);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationSynchronized(TArray<UAnimSequence*> _droidAnimations, TArray<FPlayingAnimationSynchronizedActors> _synchronizedData, bool _isLooping, bool _keepLastAnimationAsIdle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimationBehavior(UAnimSequence* _anim, AActor* _lookAtActor, float _time, float _maxRandomTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(UAnimSequence* _anim, float _duration, float _playPosition, bool _isLooping);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnThrowObject();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnScreenMaterialChanged(UMaterialInstance* _materialInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRaise(UAnimSequence* _raiseFromFrontAnimation, UAnimSequence* _raiseFromBackAnimation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreciseCatCollisionsEnabled(ECollisionEnabled::Type _collisionEnabled);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisplayDebug(UCanvas* _canvas);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDialogStopped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDialogLineDisplayed(ADialog* _dialog);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDialogLineBegan(ADialog* _dialog);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDialogBegan(ADialog* _dialog);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyStumbleAnimationDone();
    
    UFUNCTION(BlueprintCallable)
    void NotifyRiseAnimationDone();
    
    UFUNCTION(BlueprintCallable)
    void NotifyGoRagdoll();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyDropActor();
    
public:
    UFUNCTION(BlueprintCallable)
    bool MoveDroidTo(USplineComponent* _spline, FVector _destination, EDroidMovementSplineMode _splineMode, bool _preciseMoveTo, float _stopDistance);
    
    UFUNCTION(BlueprintCallable)
    bool MakeStumble(UAnimSequence* _stumbleAnimation);
    
    UFUNCTION(BlueprintCallable)
    bool MakeRaise(UAnimSequence* _raiseFromFrontAnimation, UAnimSequence* _raiseFromBackAnimation);
    
    UFUNCTION(BlueprintCallable)
    bool MakeFall(UAnimSequence* _fallAnimation);
    
    UFUNCTION(BlueprintPure)
    bool IsWithinDialog() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWaitingForInteraction() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingActor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsThrowingObject() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStumbling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStreamedIn() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShowDirectionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRisingFromStumble() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRepellingCat() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnimationBehavior() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnimation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLookAtEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInRepelMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInPreciseMoveTo() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInMoveTo() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisturbed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDazzled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAboutToStumble() const;
    
    UFUNCTION(BlueprintPure)
    bool HasStumbled() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<AActor*> GetVisionIgnoredActors();
    
    UFUNCTION(BlueprintPure)
    UMaterialInstance* GetTalkScreenMaterial() const;
    
    UFUNCTION(BlueprintPure)
    UTalkableComponent* GetTalkableComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetTakenActor() const;
    
    UFUNCTION(BlueprintPure)
    ACatPawn* GetSurroundingCat() const;
    
    UFUNCTION(BlueprintPure)
    float GetStopDistance() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetShowDirectionTarget() const;
    
protected:
    UFUNCTION(BlueprintPure)
    ARecastNavMesh* GetSelectedNavMeshRecastActor() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetRepelZoneRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRepelZoneCenter() const;
    
    UFUNCTION(BlueprintPure)
    float GetRepelPreparationDistance() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRepelDirection() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetPreciseMoveToTransform() const;
    
    UFUNCTION(BlueprintPure)
    EDroidPosture GetPosture() const;
    
    UFUNCTION(BlueprintPure)
    FPlayingAnimation GetPlayingAnimation() const;
    
    UFUNCTION(BlueprintPure)
    EDroidOnMeowedBehavior GetOnMeowedBehavior() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMoveToLocation() const;
    
    UFUNCTION(BlueprintPure)
    UDroidMovementAnimationSettings* GetMovementAnimationSettings() const;
    
    UFUNCTION(BlueprintPure)
    EDroidLookAtType GetLookAtType() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtLocation();
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetIdleAnimation() const;
    
    UFUNCTION(BlueprintPure)
    void GetHeadSocket(USceneComponent*& _outComponent, FName& _outSocketName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHeadLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHeadForward() const;
    
    UFUNCTION(BlueprintPure)
    EDroidMovementState GetDroidMovementState() const;
    
    UFUNCTION(BlueprintPure)
    ADialog* GetDialog() const;
    
    UFUNCTION(BlueprintPure)
    UDroidUsableComponent* GetCurrentUsable() const;
    
    UFUNCTION(BlueprintPure)
    FLookAtData GetCurrentLookAtData() const;
    
    UFUNCTION(BlueprintPure)
    EDroidBehaviorState GetBehaviorState() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetAvoidanceVelocity() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceStartUsing(AActor* _actorToUse);
    
    UFUNCTION(BlueprintCallable)
    void DropActorAt(FVector _location, FRotator _rotation);
    
    UFUNCTION(BlueprintCallable)
    void DropActor();
    
    UFUNCTION(BlueprintCallable)
    void ClearLookAt();
    
    UFUNCTION(BlueprintPure)
    bool CanTalk() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_ThrowObject_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_ThrowObject_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_ThrowObject_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_PlayingAnimation_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_PlayingAnimation_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_PlayingAnimation_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_None_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_None_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_Disturbed_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_Disturbed_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_Disturbed_Enter();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_Dazzled_Tick(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_Dazzled_Exit();
    
    UFUNCTION(BlueprintNativeEvent)
    void Behavior_Dazzled_Enter();
    
private:
    UFUNCTION(BlueprintCallable)
    void _SetTalkScreenMaterial(UMaterialInstance* _materialInstance);
    
    UFUNCTION(BlueprintCallable)
    void _SetPreciseMovementTransform(FTransform _targetTransform);
    
    UFUNCTION(BlueprintCallable)
    void _SetMovementTargetSpeed(float _newSpeed);
    
    UFUNCTION(BlueprintCallable)
    void _SetMovementTargetAngle(float _newAngle);
    
    UFUNCTION(BlueprintCallable)
    void _SetExchangeScreenMaterial(UMaterialInstance* _materialInstance);
    
    UFUNCTION(BlueprintCallable)
    void _SetBaseScreenMaterial(UMaterialInstance* _materialInstance);
    
    UFUNCTION()
    void _OnUsableUseEnded(UDroidUsableComponent* _usable, ACharacterDroid* _droid);
    
    UFUNCTION()
    void _OnStreamedOut(UStreamingComponent* _streamingComponent);
    
    UFUNCTION()
    void _OnStreamedIn(UStreamingComponent* _streamingComponent);
    
    UFUNCTION()
    void _OnDialogLineEnded(UTalkableComponent* _talkable, const FDialogLine& _line);
    
    UFUNCTION()
    void _OnDialogLineDisplayed(UTalkableComponent* _talkable, const FDialogLine& _line);
    
    UFUNCTION()
    void _OnDialogLineBegan(UTalkableComponent* _talkable, const FDialogLine& _line);
    
    UFUNCTION()
    void _OnDialogEnded(UTalkableComponent* _talkable);
    
    UFUNCTION()
    void _OnDialogBegan(UTalkableComponent* _talkable);
    
    UFUNCTION()
    void _OnCatDetectorEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION()
    void _OnCatDetectorBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintPure)
    FTransform _GetPreciseMovementTransform() const;
    
    UFUNCTION(BlueprintPure)
    float _GetPreciseMovementLateralDistance() const;
    
    UFUNCTION(BlueprintPure)
    float _GetPreciseMovementFrontalDistance() const;
    
    UFUNCTION(BlueprintPure)
    float _GetMovementTargetSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float _GetMovementTargetAngle() const;
    
    UFUNCTION(BlueprintPure)
    EDroidInputMode _GetDroidInputMode() const;
    
    UFUNCTION()
    void _BeforeSaved(USaveComponent* _saveComponent);
    
    UFUNCTION()
    void _AfterLoaded(USaveComponent* _saveComponent);
    
    
    // Fix for true pure virtual functions not being implemented
};

