#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EDroidMovementState.h"
#include "EDroidLocomotionBehavior.h"
#include "EDroidBehaviorState.h"
#include "EDroidPosture.h"
#include "DialogLine.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDroidInputMode.h"
#include "PlayingAnimation.h"
#include "UObject/NoExportTypes.h"
#include "EDroidLookAtType.h"
#include "LookAtData.h"
#include "Engine/EngineTypes.h"
#include "EDroidOnMeowedBehavior.h"
#include "PlayingAnimationSynchronizedActors.h"
#include "EDroidMovementSplineMode.h"
#include "CharacterDroid.generated.h"

class UAnimSequence;
class ARecastNavMesh;
class ADroidManager;
class UArrowComponent;
class UDroidMovementAnimationSettings;
class UCanvas;
class UMaterialInstance;
class UPrimitiveComponent;
class USaveComponent;
class UStreamingComponent;
class UGridSnappingComponent;
class ADialog;
class UCapsuleComponent;
class USplineComponent;
class UTalkableComponent;
class AAIController;
class UDroidUsableComponent;
class UHierarchicalStateMachine;
class USkeletalMeshComponent;
class AActor;
class ACatPawn;
class USceneComponent;
class ACharacterDroid;

UCLASS(Blueprintable)
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroidActivationChangeDelegate OnDroidActivationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdleAnimationChangedDelegate IdleAnimationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdleAnimationPositionChangedDelegate IdleAnimationPositionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanChangedDelegate IsPlayingAnimationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanChangedDelegate IsRepellingCatChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanChangedDelegate IsWaitingForInteractionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanChangedDelegate IsWithinDialogChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanChangedDelegate IsLookEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentPostureChanged CurrentPostureChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanChangedDelegate IsShowDirectionEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanChangedDelegate IsInRepelModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroidMovementStateChangeDelegate OnDroidMovementStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroidBehaviorChanged OnDroidBehaviorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroidLocomotionBehaviorChanged OnDroidLocomotionBehaviorChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_drawMoveToDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxAngleToStartTurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_movementTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_movementTargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_movementSteppingLateralDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_movementSteppingFrontalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currentMoveToStopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currentLateralAvoidanceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USaveComponent* m_saveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStreamingComponent* m_streamingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridSnappingComponent* m_catDetectorGridSnapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_catDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_repelZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* m_repelDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTalkableComponent* m_talkable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_pathFindSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_doHateCats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_faceCatDuringRepel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UMaterialInstance* m_baseScreenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UMaterialInstance* m_exchangeScreenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UMaterialInstance* m_talkScreenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_doHeadFollowCat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_idleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lookAtSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_currentStumbleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_currentFallingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_currentRaiseFromFrontAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_currentRaiseFromBackAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_initialMeshRelativeTransform;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADroidManager* m_droidManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* m_aiController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDroidMovementAnimationSettings* m_currentMovementAnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDroidUsableComponent* m_currentUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_overrideLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_lookAtOverrideDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroidLookAtType m_currentLookAtType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtData m_userLookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtData m_autonomousLookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtData m_dialogLookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtData m_overrideLookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtData m_showDirectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtData m_userShowDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtData m_autonomousShowDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_startsWithCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_takeActorSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_headSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aboutToStumbleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stumbleChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stumbledTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_turnTowardsSpeedRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimumAngleForTurnTowardInDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_repelMinimumTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_repelPreparationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_repelPreparationDistanceHysteresis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_lookAtCatWhenWaitingObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_isMet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_shouldCollisionBeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_sstateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_startingAngleCorrectionMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_startingCorrectionStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useManualSkeletalMeshRefreshSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_alwaysStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroidOnMeowedBehavior m_currentOnMeowedBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_shouldBeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_Stumbling_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_Stumbling_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_Stumbling_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_StandingUp_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_StandingUp_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_StandingUp_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_RisingUp_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_RisingUp_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_RisingUp_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_Ragdoll_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_Ragdoll_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_Ragdoll_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_Falling_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Posture_Falling_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenMaterialChanged(UMaterialInstance* _materialInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRaise(UAnimSequence* _raiseFromFrontAnimation, UAnimSequence* _raiseFromBackAnimation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreciseCatCollisionsEnabled(ECollisionEnabled::Type _collisionEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayDebug(UCanvas* _canvas);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDialogStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDialogLineDisplayed(ADialog* _dialog);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDialogLineBegan(ADialog* _dialog);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithinDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowingObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStumbling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowDirectionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRisingFromStumble() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRepellingCat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnimationBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookAtEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRepelMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPreciseMoveTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMoveTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisturbed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDazzled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAboutToStumble() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStumbled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AActor*> GetVisionIgnoredActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstance* GetTalkScreenMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTalkableComponent* GetTalkableComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTakenActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACatPawn* GetSurroundingCat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStopDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetShowDirectionTarget() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARecastNavMesh* GetSelectedNavMeshRecastActor() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRepelZoneRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRepelZoneCenter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRepelPreparationDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRepelDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPreciseMoveToTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroidPosture GetPosture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayingAnimation GetPlayingAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroidOnMeowedBehavior GetOnMeowedBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveToLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDroidMovementAnimationSettings* GetMovementAnimationSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroidLookAtType GetLookAtType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookAtLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetIdleAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHeadSocket(USceneComponent*& _outComponent, FName& _outSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeadLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeadForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroidMovementState GetDroidMovementState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADialog* GetDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDroidUsableComponent* GetCurrentUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLookAtData GetCurrentLookAtData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroidBehaviorState GetBehaviorState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTalk() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_ThrowObject_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_ThrowObject_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_ThrowObject_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_PlayingAnimation_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_PlayingAnimation_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_PlayingAnimation_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_None_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_None_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_Disturbed_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_Disturbed_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_Disturbed_Enter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_Dazzled_Tick(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Behavior_Dazzled_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    
    UFUNCTION(BlueprintCallable)
    void _OnUsableUseEnded(UDroidUsableComponent* _usable, ACharacterDroid* _droid);
    
    UFUNCTION(BlueprintCallable)
    void _OnStreamedOut(UStreamingComponent* _streamingComponent);
    
    UFUNCTION(BlueprintCallable)
    void _OnStreamedIn(UStreamingComponent* _streamingComponent);
    
    UFUNCTION(BlueprintCallable)
    void _OnDialogLineEnded(UTalkableComponent* _talkable, const FDialogLine& _line);
    
    UFUNCTION(BlueprintCallable)
    void _OnDialogLineDisplayed(UTalkableComponent* _talkable, const FDialogLine& _line);
    
    UFUNCTION(BlueprintCallable)
    void _OnDialogLineBegan(UTalkableComponent* _talkable, const FDialogLine& _line);
    
    UFUNCTION(BlueprintCallable)
    void _OnDialogEnded(UTalkableComponent* _talkable);
    
    UFUNCTION(BlueprintCallable)
    void _OnDialogBegan(UTalkableComponent* _talkable);
    
    UFUNCTION(BlueprintCallable)
    void _OnCatDetectorEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnCatDetectorBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform _GetPreciseMovementTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float _GetPreciseMovementLateralDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float _GetPreciseMovementFrontalDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float _GetMovementTargetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float _GetMovementTargetAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroidInputMode _GetDroidInputMode() const;
    
    UFUNCTION(BlueprintCallable)
    void _BeforeSaved(USaveComponent* _saveComponent);
    
    UFUNCTION(BlueprintCallable)
    void _AfterLoaded(USaveComponent* _saveComponent);
    
    
    // Fix for true pure virtual functions not being implemented
};

