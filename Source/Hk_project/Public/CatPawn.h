#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "EUsableInteractionButton.h"
#include "UObject/NoExportTypes.h"
#include "CameraThirdPersonPreset.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "CatLookAtEntry.h"

#include "ECatAttitude.h"
#include "RailHangingTestResult.h"

#include "UObject/NoExportTypes.h"
#include "DriftParameters.h"
#include "JumpData.h"
#include "GroundProbeData.h"
#include "JoyLibraryRuntime/Smoother.h"

#include "GroundMaterialOverrideEntry.h"
#include "ZurgSocket.h"
#include "InteractionData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LookAtData.h"
#include "UObject/NoExportTypes.h"
#include "EInputTransitionMode.h"
#include "UObject/NoExportTypes.h"
#include "CustomAnimation.h"
#include "CatInterpolateAlongSplineParams.h"
#include "Engine/EngineTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "JoyLibraryRuntime/DrawMovementComponent.h"
#include "JoyLibraryRuntime/PID.h"
#include "CatPawn.generated.h"

class UPhysicalMaterial;
class ULifeComponent;
class UPrimitiveComponent;
class ACatPawn;
class AScriptedJump;
class UCurveVector;
class AZurgPawn;
class UMovingActorComponent;
class AHKPlayerController;
class UCatUsableComponentBase;
class USplineRailConnection;
class ABackpack;
class UCatAnimInstance;
class USkeletalMeshComponent;
class UCapsuleComponent;
class USphereComponent;
class USplineComponent;
class UCatMovementComponent;
class USceneComponent;
class ACameraThirdPerson;
class UHierarchicalStateMachine;
class UCurveFloat;
class UZurgSettings;
class AZurgPawnSlave;
class UAnimSequence;
class AActor;
class USplineRailComponent;
class USoundBase;
class UAnimInstance;
class AHKPlayerCameraManager;

UCLASS()
class HK_PROJECT_API ACatPawn : public APawn {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCatZurgDelegate, ACatPawn*, _catPawn, AZurgPawn*, _zurg);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCatUsableDelegate, ACatPawn*, _catPawn, UCatUsableComponentBase*, _usable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCatInteractionDelegate, ACatPawn*, _catPawn, TEnumAsByte<EUsableInteractionButton>, _button, UCatUsableComponentBase*, _usable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCatDelegate, ACatPawn*, _catPawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCatContollerDelegate, ACatPawn*, _catPawn, AHKPlayerController*, _playerController);
    
    UPROPERTY(BlueprintAssignable)
    FCatDelegate JumpBegan;
    
    UPROPERTY(BlueprintAssignable)
    FCatDelegate JumpEnded;
    
    UPROPERTY(BlueprintAssignable)
    FCatDelegate Died;
    
    UPROPERTY(BlueprintAssignable)
    FCatZurgDelegate ZurgAttached;
    
    UPROPERTY(BlueprintAssignable)
    FCatZurgDelegate ZurgDetached;
    
    UPROPERTY(BlueprintAssignable)
    FCatDelegate FollowSplineEndReached;
    
    UPROPERTY(BlueprintAssignable)
    FCatDelegate FollowRailEndReached;
    
    UPROPERTY(BlueprintAssignable)
    FCatDelegate JumpStateBegan;
    
    UPROPERTY(BlueprintAssignable)
    FCatDelegate JumpStateEnded;
    
    UPROPERTY(BlueprintAssignable)
    FCatUsableDelegate BeforeInteractionStart;
    
    UPROPERTY(BlueprintAssignable)
    FCatUsableDelegate AfterInteractionStart;
    
    UPROPERTY(BlueprintAssignable)
    FCatUsableDelegate BeforeInteractionStop;
    
    UPROPERTY(BlueprintAssignable)
    FCatInteractionDelegate ClosestInteractionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCatDelegate AfterInteractionStop;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USkeletalMeshComponent* m_visual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UCapsuleComponent* m_capsule;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USphereComponent* m_largeInteractionCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UCapsuleComponent* m_grabCapsule;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USplineComponent* m_trajectory;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    ULifeComponent* m_lifeComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDrawMovementComponent* m_drawMovementComponent;
    
private:
    UPROPERTY(Instanced)
    USceneComponent* m_root;
    
    UPROPERTY()
    ACameraThirdPerson* m_cameraThirdPerson;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACameraThirdPerson> m_cameraThirdPersonClass;
    
    UPROPERTY(EditAnywhere)
    FCameraThirdPersonPreset m_cameraShoulderPreset;
    
    UPROPERTY(EditAnywhere, Export)
    UCatMovementComponent* m_movement;
    
    UPROPERTY(Transient)
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY(EditAnywhere)
    float m_cameraYawSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_cameraPitchSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_inputThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_jumpInputBufferDuration;
    
    UPROPERTY(EditAnywhere)
    float m_jumpReleasedBufferDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_inputResponse;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_inputAngleCorrection_Curve;
    
    UPROPERTY(EditAnywhere)
    FSmootherCurved m_accelerationSmoother;
    
    UPROPERTY(EditAnywhere)
    FSmootherCurved m_runFactorSmoother;
    
    UPROPERTY(EditAnywhere)
    float m_maximumMovementInputSize;
    
    UPROPERTY(EditAnywhere)
    float m_inputTransitionStartBlendAngle;
    
    UPROPERTY(EditAnywhere)
    float m_inputTransitionSmootherTolerance;
    
    UPROPERTY(EditAnywhere)
    float m_groundProbeRadius;
    
    UPROPERTY(EditAnywhere)
    float m_jumpGroundProbeRadius;
    
    UPROPERTY(EditAnywhere)
    float m_UTurnAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_UTurnTimeThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_UTurnTimeThresholdFollowSpline;
    
    UPROPERTY(EditAnywhere)
    float m_rotationRatio;
    
    UPROPERTY(EditAnywhere)
    float m_stepDownDistance;
    
    UPROPERTY(EditAnywhere)
    float m_maxSlope;
    
    UPROPERTY(EditAnywhere)
    bool m_isCatPilotEnabled;
    
    UPROPERTY(EditAnywhere)
    float m_catPilotDistanceFromObstacleRangeMin;
    
    UPROPERTY(EditAnywhere)
    float m_catPilotDistanceFromObstacleRangeMax;
    
    UPROPERTY(EditAnywhere)
    float m_catPilotCatFacingThresholdAngle;
    
    UPROPERTY(EditAnywhere)
    float m_catPilotCancelInputThresholdAngle;
    
    UPROPERTY(EditAnywhere)
    float m_catPilotCancelInputRampAngle;
    
    UPROPERTY(EditAnywhere)
    float m_minJumpLength;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* m_jumpCapacityCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_jumpAngleWeight_Curve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_jumpLengthWeight_Curve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_jumpHeightWeight_Curve;
    
    UPROPERTY(EditAnywhere)
    float m_jumpVisibilityWeight;
    
    UPROPERTY(EditAnywhere)
    float m_idealShortestJumpLength;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_runningidealShortestJumpLength_Curve;
    
    UPROPERTY(EditAnywhere)
    float m_jumpSearchDirectionRotationRatio;
    
    UPROPERTY(EditAnywhere)
    float m_jumpSearchClampingAngle;
    
    UPROPERTY(EditAnywhere)
    float m_maxJumpAngle;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_upJumpCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_downJumpCurve;
    
    UPROPERTY(EditAnywhere)
    float m_jumpDownPressedTriggerTime;
    
    UPROPERTY(EditAnywhere)
    bool m_enableButtonHeldJump;
    
    UPROPERTY(EditAnywhere)
    float m_jumpDownMaximumDistanceToGap;
    
    UPROPERTY(EditAnywhere)
    float m_jumpTrajectoryCastRadius;
    
    UPROPERTY(EditAnywhere)
    float m_autoJumpMaxDistanceToObstacle;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_runningAutoJumpMaxDistanceToObstacle;
    
    UPROPERTY(EditAnywhere)
    float m_jumpProbeRadius;
    
    UPROPERTY(EditAnywhere)
    float m_jumpProbeInterval;
    
    UPROPERTY(EditAnywhere)
    float m_additionaProbeRaycastRadius;
    
    UPROPERTY(EditAnywhere)
    bool m_oneButtonJumpMode;
    
    UPROPERTY(EditAnywhere)
    float m_hangingTriggerAngle;
    
    UPROPERTY(EditAnywhere)
    float m_hangingTriggerAngleHysteresis;
    
    UPROPERTY(EditAnywhere)
    float m_hangingIntermediateRatio;
    
    UPROPERTY(EditAnywhere)
    float m_hangingStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_hangingJumpDownTime;
    
    UPROPERTY(EditAnywhere)
    float m_hangingMaxVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_hangingTriggeringDistanceToPlane;
    
    UPROPERTY(EditAnywhere)
    float m_hangingTriggeringDistanceToPlaneHysteresis;
    
    UPROPERTY(EditAnywhere)
    float m_hangingPivotDistance;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_inputOverRailDirectionAngle_InputFactor_Curve;
    
    UPROPERTY(EditAnywhere)
    float m_maxRailDetectionSize;
    
    UPROPERTY(EditAnywhere)
    float m_maxInterplaneAngle;
    
    UPROPERTY(EditAnywhere)
    float m_railEndMargin;
    
    UPROPERTY(EditAnywhere)
    UZurgSettings* m_zurgSettingsReference;
    
    UPROPERTY(EditAnywhere)
    float m_ZurgMinSpeedModifier;
    
    UPROPERTY(EditAnywhere)
    float m_struggleGaugeReinitValueAfterCompletion;
    
    UPROPERTY(EditAnywhere)
    float m_struggleGaugePressIncrement;
    
    UPROPERTY(EditAnywhere)
    float m_struggleGaugeDecayOverTime;
    
    UPROPERTY(EditAnywhere)
    uint16 m_ejectedZurgsOnStruggleCompletion;
    
    UPROPERTY(EditAnywhere)
    FVector m_gravity;
    
    UPROPERTY(EditAnywhere)
    float m_maxFallSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_canDieOnFall;
    
    UPROPERTY(EditAnywhere)
    float m_deadlyFallDistance;
    
    UPROPERTY(EditAnywhere)
    FDriftParameters m_baseDriftParameters;
    
    UPROPERTY(EditAnywhere)
    float m_driftLocomotionBeginIgnoreTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_driftModeEnterThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float m_driftModeExitThreshold;
    
    UPROPERTY(EditAnywhere)
    bool m_enableCatAnimationFeature;
    
    UPROPERTY(EditAnywhere)
    float m_catAnimationPressTime;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimSequence*> m_catAnimations;
    
    UPROPERTY(EditAnywhere)
    FString m_zurgSocketPrefix;
    
    UPROPERTY(EditAnywhere)
    float m_jumpGroundCollisionTestOffset;
    
    UPROPERTY()
    FGroundProbeData m_previousProbeData;
    
    UPROPERTY()
    FGroundProbeData m_currentProbeData;
    
    UPROPERTY()
    TArray<AActor*> m_movementIgnoredActors;
    
    UPROPERTY(EditAnywhere)
    float m_stepSmoothingTriggerAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_stepSmoothingTriggerHeightThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_stepSmoothingEndAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_stepSmoothingEndHeightThreshold;
    
    UPROPERTY(EditAnywhere)
    FSmootherFloat m_stepPitchSmoother;
    
    UPROPERTY(EditAnywhere)
    FSmootherFloat m_stepHeightSmoother;
    
    UPROPERTY(Instanced)
    USplineRailComponent* m_nextRail;
    
    UPROPERTY(Instanced)
    USplineRailComponent* m_currentRail;
    
    UPROPERTY(Instanced)
    USplineRailComponent* m_previousDispatchRail;
    
    UPROPERTY()
    TArray<USplineRailConnection*> m_overlappingRailConnexions;
    
    UPROPERTY(EditAnywhere)
    float m_railEnterLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float m_railEnterFacingLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float m_railEnterDistance;
    
    UPROPERTY(EditAnywhere)
    float m_railExitDistance;
    
    UPROPERTY(EditAnywhere)
    float m_minimumRailLength;
    
    UPROPERTY(EditAnywhere)
    float m_railSitLerpInTime;
    
    UPROPERTY(EditAnywhere)
    float m_railSitLerpOutTime;
    
    UPROPERTY(EditAnywhere)
    float m_railSitExitAngle;
    
    UPROPERTY(EditAnywhere)
    float m_perchExitDistanceThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_perchExitAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_perchEnterTime;
    
    UPROPERTY(EditAnywhere)
    float m_maxJumpDownHeight;
    
    UPROPERTY(EditAnywhere)
    float m_maxJumpDownAngleDeviation;
    
    UPROPERTY(EditAnywhere)
    float m_jumpOnRailEndInputAngleMaxArc;
    
    UPROPERTY(EditAnywhere)
    float m_jumpBeginAnimationMovement;
    
    UPROPERTY(EditAnywhere)
    float m_jumpMinimumPreRotationTime;
    
    UPROPERTY(EditAnywhere)
    float m_jumpEndLerpTime;
    
    UPROPERTY(EditAnywhere)
    float m_slowJumpThreshold;
    
    UPROPERTY()
    FJumpData m_nextJumpData;
    
    UPROPERTY()
    FJumpData m_currentJumpData;
    
    UPROPERTY()
    TArray<FJumpData> m_activeJumpTargets;
    
    UPROPERTY()
    TArray<FJumpData> m_passiveJumpTargets;
    
    UPROPERTY()
    TArray<FJumpData> m_crossingJumpTargets;
    
    UPROPERTY()
    TArray<FCatLookAtEntry> m_lookAtStack;
    
    UPROPERTY(EditAnywhere)
    float m_lookAtValidYawRange;
    
    UPROPERTY(EditAnywhere)
    float m_UTurnInputThreshold;
    
    UPROPERTY(EditAnywhere)
    FSmootherRotation m_UTurnTargetRotationSmoother;
    
    UPROPERTY(EditAnywhere)
    FSmootherRotation m_hangingInputSmoother;
    
    UPROPERTY(EditAnywhere)
    FSmootherTransform m_hangingBaseTransformSmoother;
    
    UPROPERTY(EditAnywhere)
    FSmootherTransform m_hangingTargetTransformSmoother;
    
    UPROPERTY(EditAnywhere)
    float m_hangingEnterTime;
    
    UPROPERTY(EditAnywhere)
    float m_hangingAnimationTime;
    
    UPROPERTY(EditAnywhere)
    float m_hangingExitInputAngleAmplitude;
    
    UPROPERTY()
    TArray<AActor*> m_fearRepelSources;
    
    UPROPERTY(EditAnywhere)
    float m_fearTime;
    
    UPROPERTY()
    TArray<FZurgSocket> m_zurgSockets;
    
    UPROPERTY()
    ABackpack* M_BackPack;
    
    UPROPERTY()
    UCatAnimInstance* m_animInstance;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_jumpDebugDataTrackedBones;
    
    UPROPERTY(EditAnywhere)
    float m_jumpDebugDataSamplesPerSecond;
    
    UPROPERTY(EditAnywhere)
    float m_rootAlignmentThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_jumpOnRailEndRotationLerpFactor;
    
    UPROPERTY(EditAnywhere)
    float m_movingJumpPredictionTime;
    
    UPROPERTY(EditAnywhere)
    float m_movingJumpSmootingTime;
    
    UPROPERTY()
    TMap<USceneComponent*, AScriptedJump*> m_scriptedJumpEntries;
    
    UPROPERTY()
    AScriptedJump* m_currentScriptedJump;
    
    UPROPERTY(Instanced)
    USceneComponent* m_scriptedJumpStartEntry;
    
    UPROPERTY(Instanced)
    USceneComponent* m_scriptedJumpAnimationBegin;
    
    UPROPERTY(Instanced)
    USceneComponent* m_scriptedJumpAnimationEnd;
    
    UPROPERTY()
    UAnimSequence* m_scriptedJumpAnimation;
    
    UPROPERTY(EditAnywhere)
    float m_scriptedJumpApproachTime;
    
    UPROPERTY(Instanced)
    UMovingActorComponent* m_movingActorComponent;
    
    UPROPERTY(Instanced)
    UMovingActorComponent* m_jumpBeginComponent;
    
    UPROPERTY(Instanced)
    UMovingActorComponent* m_jumpEndComponent;
    
    UPROPERTY()
    TWeakObjectPtr<UPhysicalMaterial> m_groundMaterial;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> m_groundVisualObject;
    
    UPROPERTY()
    TArray<FGroundMaterialOverrideEntry> m_groundMaterialOverrideStack;
    
    UPROPERTY()
    AActor* m_hideoutActor;
    
    UPROPERTY(Instanced)
    USplineComponent* m_splineToFollow;
    
    UPROPERTY(EditAnywhere)
    float m_followSplineDistancePredictionFactor;
    
    UPROPERTY(EditAnywhere)
    FVectorPIDController m_followSplineInputPID;
    
    UPROPERTY(EditAnywhere)
    float m_followSplineStopTimePrediction;
    
    UPROPERTY(EditAnywhere)
    float m_skipSplineDistance;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_followSplineEndInterpolateAnimation;
    
    UPROPERTY(EditAnywhere)
    float m_followSplineFailSafeTime;
    
    UPROPERTY()
    UAnimSequence* m_interpolateAnimation;
    
    UPROPERTY(Instanced)
    USplineRailComponent* m_railToFollow;
    
    UPROPERTY(EditAnywhere)
    float m_automatedRailHangingCompleteThreshold;
    
    UPROPERTY(EditAnywhere)
    bool m_isCrossingEnabled;
    
    UPROPERTY(EditAnywhere)
    bool m_exludeCrossingFromJumps;
    
    UPROPERTY(EditAnywhere)
    float m_maxCrossingLength;
    
    UPROPERTY(EditAnywhere)
    float m_maxRunningCrossingLength;
    
    UPROPERTY(EditAnywhere)
    float m_minCrossingHeight;
    
    UPROPERTY(EditAnywhere)
    float m_maxCrossingHeight;
    
    UPROPERTY(EditAnywhere)
    float m_crossingMaxInputAngle;
    
    UPROPERTY(EditAnywhere)
    float m_crossingMaxInputCatAngle;
    
    UPROPERTY(EditAnywhere)
    float m_crossingMaxDistanceToObstacle;
    
    UPROPERTY(EditAnywhere)
    float m_crossingMaxTimeToObstacle;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_probeDirectionAngles;
    
    UPROPERTY(EditAnywhere)
    bool m_enabledDistanceFieldPilot;
    
    UPROPERTY(EditAnywhere)
    float m_distanceToObstacle;
    
    UPROPERTY(EditAnywhere)
    float m_negativeDistanceToObstacleWeight;
    
    UPROPERTY(EditAnywhere)
    float m_angleDeviationWeight;
    
    UPROPERTY(EditAnywhere)
    float m_smoothSamplingTime;
    
    UPROPERTY(EditAnywhere)
    float m_distanceDiffThreshold;
    
    UPROPERTY(EditAnywhere)
    int32 m_relaxIterationsCount;
    
    UPROPERTY(EditAnywhere)
    float m_pilotTimeAhead;
    
    UPROPERTY(EditAnywhere)
    float m_pilotDistanceToObstacle;
    
    UPROPERTY(EditAnywhere)
    float m_pilotSideFavorAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_pilotProbeDistanceAhead;
    
    UPROPERTY(EditAnywhere)
    float m_pilotProbeDeviationAngle;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_pilotResponseCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_pilotAngleCompensationCurve;
    
    UPROPERTY(EditAnywhere)
    bool m_pilotDebugProbe;
    
    UPROPERTY(EditAnywhere)
    bool m_pilotDebugDistanceField;
    
    UPROPERTY(EditAnywhere)
    bool m_pilotDebugPathFind;
    
    UPROPERTY(EditAnywhere)
    bool m_pilotDebugPath;
    
    UPROPERTY(EditAnywhere)
    float m_interactionRadiusHysteresis;
    
    UPROPERTY(EditAnywhere)
    float m_closestInteractionHysteresis;
    
    UPROPERTY(EditAnywhere)
    float m_interactionSourcePoleHeight;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_usableDistanceToCatWeight;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_usableAngleWithCatForwardWeight;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_usableNormalizedDistanceToScreenCenterWeight;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_defaultStartInteractionSound;
    
    UPROPERTY()
    TMap<UCatUsableComponentBase*, FInteractionData> m_availableInteractions;
    
    UPROPERTY(Instanced)
    UCatUsableComponentBase* m_closestInteraction[4];
    
    UPROPERTY(Instanced)
    TArray<UCatUsableComponentBase*> m_pendingInteractions;
    
    UPROPERTY(Instanced)
    UCatUsableComponentBase* m_overrideInteraction[4];
    
    UPROPERTY(Instanced)
    UCatUsableComponentBase* m_lookedAtInteraction;
    
    UPROPERTY()
    TMap<AActor*, int32> m_interactionActorsDependencies;
    
    UPROPERTY(EditAnywhere)
    float m_validTransformInterval;
    
    UPROPERTY(EditAnywhere)
    float m_validTransformMaxObstacleDistance;
    
    UPROPERTY(EditAnywhere)
    int32 m_storedValidTransformCount;
    
    UPROPERTY(EditAnywhere)
    bool m_validTransformDebugEnabled;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_idleTriggerTimeRange;
    
    UPROPERTY(EditAnywhere)
    bool m_canFailJumps;
    
    UPROPERTY(EditAnywhere)
    FInt32Range m_jumpsBeforeFailRange;
    
    UPROPERTY(SaveGame)
    FRotator m_cameraSavedRelativeRotation;
    
    UPROPERTY(EditAnywhere)
    bool m_debugHanging;
    
    UPROPERTY(EditAnywhere)
    bool m_debugUturn;
    
    UPROPERTY(EditAnywhere)
    bool m_debugInputs;
    
    UPROPERTY(EditAnywhere)
    uint32 m_debugLastJumpFlags;
    
    UPROPERTY(EditAnywhere)
    uint32 m_debugCatGroundProbeFlags;
    
    UPROPERTY(EditAnywhere)
    uint32 m_debugJumpSearchFlags;
    
public:
    ACatPawn();
    UFUNCTION(BlueprintCallable)
    void UpdateSpeedModifier(FName _key, float _speedModifier);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLookAt(FName _id, FLookAtData _target);
    
    UFUNCTION(BlueprintCallable)
    void Unfreeze();
    
    UFUNCTION(BlueprintCallable)
    bool TryJumpOnRail(USplineRailComponent* _rail, const FVector& _closestLocation);
    
    UFUNCTION(BlueprintCallable)
    bool TryJump(const FVector& _targetLocation, const FRotator& _targetRotation, bool _rejectAtLevelJumpsWithoutGaps);
    
    UFUNCTION(BlueprintCallable)
    bool TryHangOnRail(const FVector& _targetLocation);
    
    UFUNCTION(BlueprintCallable)
    bool TeleportOnRail(FVector _position, FRotator _rotation, USplineRailComponent* _rail, bool _teleportCamera);
    
    UFUNCTION(BlueprintCallable)
    bool Teleport(FVector _position, FRotator _rotation, bool _checkValidity, bool _teleportCamera);
    
    UFUNCTION(BlueprintCallable)
    void StopWalkInterpolate();
    
    UFUNCTION(BlueprintCallable)
    void StopInterpolateAnimationAlongSpline();
    
    UFUNCTION(BlueprintCallable)
    void StopInterpolateAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopInteraction(UCatUsableComponentBase* _catUsableComponent);
    
    UFUNCTION(BlueprintCallable)
    void StopFollowSpline();
    
    UFUNCTION(BlueprintCallable)
    void StopFollowRail();
    
    UFUNCTION(BlueprintCallable)
    void StopCustomAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopAutomatedRailHanging();
    
    UFUNCTION(BlueprintCallable)
    void StopAllInteractions();
    
    UFUNCTION(BlueprintCallable)
    void StartInteraction(UCatUsableComponentBase* _catUsableComponent);
    
    UFUNCTION(BlueprintPure)
    bool ShouldUseJumpStopRailAnimation() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldUseJumpStopAnimation() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldInstantlyExitTrailingAnimations() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOverrideInteraction(TEnumAsByte<EUsableInteractionButton> _button, UCatUsableComponentBase* _catUsableComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertCameraAxis(bool _invertCamera);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolateOverridenRotation(FRotator _overridenRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetHideoutActor(AActor* _hideoutActor);
    
    UFUNCTION(BlueprintCallable)
    void SetGroundHangingEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowSplineMaxSpeed(float _maxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetFarInteractionRange(float _range);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomMovementEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomAnimationPlayRate(float _playRate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBackpackFur(bool _backpackOn);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    float RotationRatioFilter(float _rotationRatio, float _dt);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetInput(FVector _worldInput);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMovementIgnoredActor(AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void PushUTurnDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushSpeedModifier(FName _key, float _speedModifier, float _inTime);
    
    UFUNCTION(BlueprintCallable)
    void PushRunningDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushPilotDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushMovementDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushMeowDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushLookAtDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushLookAt(FName _id, FLookAtData _target, int32 _priority);
    
    UFUNCTION(BlueprintCallable)
    void PushJumpFailAnimationDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushJumpDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushInvincibility();
    
    UFUNCTION(BlueprintCallable)
    void PushInputDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushIdleExitDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushIdleDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushHangingDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushGroundMaterialOverride(FName _id, UPhysicalMaterial* _material, int32 _priority);
    
    UFUNCTION(BlueprintCallable)
    void PushDriftParameters(FName _id, FDriftParameters _driftParameters);
    
    UFUNCTION(BlueprintCallable)
    void PushCrossingDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushCatButtonDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushAttitude(FName _id, TEnumAsByte<ECatAttitude> _attitude);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    float ProcessRotationRatio(float _rotationRatio, float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector ProcessRawInput(FVector _input, float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector ProcessMovementInput(FVector _input, float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector ProcessInput(FVector _input, float _dt);
    
public:
    UFUNCTION(BlueprintCallable)
    void PopUTurnDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopSpeedModifier(FName _key, float _outTime);
    
    UFUNCTION(BlueprintCallable)
    void PopRunningDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopPilotDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopMovementDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopMeowDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopLookAtDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopLookAt(FName _id);
    
    UFUNCTION(BlueprintCallable)
    void PopJumpFailAnimationDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopJumpDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopInvincibility();
    
    UFUNCTION(BlueprintCallable)
    void PopInputDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopIdleExitDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopIdleDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopHangingDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopGroundMaterialOverride(FName _id);
    
    UFUNCTION(BlueprintCallable)
    void PopDriftParameters(FName _id);
    
    UFUNCTION(BlueprintCallable)
    void PopCrossingDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopCatButtonDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopAttitude(FName _id);
    
    UFUNCTION(BlueprintCallable)
    bool PollUTurnRequested();
    
    UFUNCTION(BlueprintCallable)
    void PlaySynchronizedCustomAnimation(UAnimSequence* _animation, const FTransform& _movementStart, float _syncTime, bool _isLooping, bool _enableLookAt, bool _keepCollisions);
    
    UFUNCTION(BlueprintCallable)
    void PlayCustomAnimation(UAnimSequence* _animation, bool _isLooping, bool _enableLookAt);
    
    UFUNCTION(BlueprintCallable)
    void OnUTurnAnimationStarted(UAnimInstance* _animInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnUTurnAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleport();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStruggled();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnResetInput(FVector _worldInput);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMeowed(bool _isGameplayMeow);
    
    UFUNCTION(BlueprintCallable)
    void OnJumpEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpAnimationStarted(UAnimInstance* _animInstance);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitGrabbed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnterGrabbed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCat();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyJumpStopAnimationBegin();
    
    UFUNCTION(BlueprintCallable)
    void NotifyHangingExitAnimationStarted();
    
    UFUNCTION(BlueprintCallable)
    void NotifyCanExitAnimation();
    
    UFUNCTION(BlueprintCallable)
    void NotifyCameraCut(const FTransform& _currentCameraTransform, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime);
    
    UFUNCTION(BlueprintCallable)
    void Meow(bool _isGameplayMeow);
    
    UFUNCTION(BlueprintPure)
    bool IsWallPerched() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWalkInterpolating() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUTurnLeft() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUTurning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUTurnEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShoulderCameraDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunningRequested() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunningEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPossessed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPointPerch() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerCat() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPilotDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPerchRequested() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPerched() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnRailConnection() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnRail() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMeowPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMeowEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLookAtEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpUpPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpInputEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpFailAnimationEnabled() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsJumpFailAnimationAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpDownPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInUTurnAnimation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInterpolatingAnimationAlongSpline() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInterpolating() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionEnabled(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteracting(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInScriptedJump() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInOneButtonJumpMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInNormalLocomotion() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInJumpTrajectory() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInJumpState() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInJumpBegin() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInFear() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInExitingHangingFirstPhase() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInCameraShoulderMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIdleEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHangingRequested() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHangingEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHanging() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsHackObstacle(const AActor* _actor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGroundHangingEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrabbed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFrozen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFreeZurgSlotAvailable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFollowingSpline() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFollowingRail() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFearRepelEnabled();
    
    UFUNCTION(BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExitingHangingLeft() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExitingHanging180() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExitingHanging() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDoingAutomatedRailHanging() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCustomMovementEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCustomAnimationEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrossing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCatButtonReleased() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCatButtonPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCatButtonEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCatButtonDown() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool IsCatAnimationEnabled() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBeingFearRepelled() const;
    
    UFUNCTION(BlueprintCallable)
    void InternalStopCustomAnimation(UAnimSequence* _animation);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    FVector InputFilter(FVector _input, float _dt);
    
public:
    UFUNCTION(BlueprintCallable)
    bool InitScriptedJump(AScriptedJump* _jump, USceneComponent* _entry);
    
    UFUNCTION(BlueprintCallable)
    bool InitJump(const FJumpData& _jumpData, bool _useWalkInterpolate);
    
    UFUNCTION(BlueprintPure)
    bool HasCustomAnimationFinishedPlay() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FZurgSocket> GetZurgSockets() const;
    
    UFUNCTION(BlueprintPure)
    float GetWallPerchRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetWalkingMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetVelocityRatio() const;
    
    UFUNCTION(BlueprintPure)
    FRailHangingTestResult GetUTurnTarget() const;
    
    UFUNCTION(BlueprintPure)
    FRailHangingTestResult GetUTurnSource() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FJumpData> GetUpJumpTargets() const;
    
    UFUNCTION(BlueprintPure)
    USplineComponent* GetSplineToFollow() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMesh() const;
    
    UFUNCTION(BlueprintPure)
    float GetRunningMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRotationRatio();
    
    UFUNCTION(BlueprintPure)
    FVector GetRawStickInput() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetProcessedWorldInput() const;
    
    UFUNCTION(BlueprintPure)
    TArray<float> GetProbeDirectionAngles() const;
    
    UFUNCTION(BlueprintPure)
    float GetPerchAngle() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMovementInput() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetMovementIgnoredActors() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinimumRailLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxLife() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookAtRotator() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationOnRail() const;
    
    UFUNCTION(BlueprintPure)
    float GetLocalVelocityRatio() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocalVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocalGroundVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetLocalAngularVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetLife() const;
    
    UFUNCTION(BlueprintPure)
    float GetLegsHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetJumpUpPressedTimer() const;
    
    UFUNCTION(BlueprintPure)
    float GetJumpTrajectoryMotionRatio() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetJumpStartVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetJumpSearchRotation() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    float GetJumpScore(const FJumpData& _jumpData);
    
public:
    UFUNCTION(BlueprintPure)
    float GetJumpDownPressedTriggerTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetJumpAnimationRemainingTime() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetInterpolateAnimation() const;
    
    UFUNCTION(BlueprintPure)
    float GetInputThreshold() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetHideoutActor() const;
    
    UFUNCTION(BlueprintPure)
    void GetHeadSocket(USceneComponent*& _outComponent, FName& _outSocketName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHeadLocation() const;
    
    UFUNCTION(BlueprintPure)
    FPlane GetHangingPlane() const;
    
    UFUNCTION(BlueprintPure)
    float GetHangingAngle() const;
    
    UFUNCTION(BlueprintPure)
    FGroundProbeData GetGroundProbeData() const;
    
    UFUNCTION(BlueprintPure)
    float GetFollowSplineMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetFinalSpeedModifier() const;
    
    UFUNCTION(BlueprintPure)
    FDriftParameters GetFinalDriftParameters() const;
    
    UFUNCTION(BlueprintPure)
    float GetFarInteractionRange() const;
    
    UFUNCTION(BlueprintNativeEvent)
    USceneComponent* GetDroneUnfoldedSocket(FName& _outSocketName) const;
    
    UFUNCTION(BlueprintNativeEvent)
    USceneComponent* GetDroneUnfoldedLookSocket(FName& _outSocketName) const;
    
    UFUNCTION(BlueprintNativeEvent)
    USceneComponent* GetDroneFoldedSocket(FName& _outSocketName) const;
    
    UFUNCTION(BlueprintPure)
    float GetDriftFactor() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetDriftAnimationPlayRate() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FJumpData> GetDownJumpTargets() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceOnRail() const;
    
    UFUNCTION(BlueprintPure)
    USoundBase* GetDefaultStartInteractionSound() const;
    
    UFUNCTION(BlueprintPure)
    FCustomAnimation GetCustomAnimation() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetCurrentScriptedJumpAnimation() const;
    
    UFUNCTION(BlueprintPure)
    AScriptedJump* GetCurrentScriptedJump() const;
    
    UFUNCTION(BlueprintPure)
    USplineRailComponent* GetCurrentRail() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentJumpLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentJumpHeight() const;
    
    UFUNCTION(BlueprintPure)
    FJumpData GetCurrentJumpData() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCatUsableComponentBase*> GetCurrentInteractions(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintPure)
    UCatUsableComponentBase* GetCurrentInteraction(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetCurrentGroundVisualObject() const;
    
    UFUNCTION(BlueprintPure)
    UPhysicalMaterial* GetCurrentGroundMaterial() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCorrectedWorldInput() const;
    
    UFUNCTION(BlueprintPure)
    UCatUsableComponentBase* GetClosestInteraction(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintPure)
    UCapsuleComponent* GetCapsule() const;
    
    UFUNCTION(BlueprintPure)
    ACameraThirdPerson* GetCameraThirdPerson() const;
    
    UFUNCTION(BlueprintPure)
    ABackpack* GetBackpack() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECatAttitude> GetAttitude() const;
    
    UFUNCTION(BlueprintPure)
    UCatAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetAnimationLastRootMotion() const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetAngularVelocity() const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze();
    
    UFUNCTION(BlueprintCallable)
    void ForceJumpOnRail(USplineRailComponent* _rail, const FVector& _closestLocation);
    
    UFUNCTION(BlueprintCallable)
    void ForceJump(const FVector& _targetLocation, const FRotator& _targetRotation);
    
    UFUNCTION(BlueprintCallable)
    void ForceGroundMaterialUpdate();
    
    UFUNCTION(BlueprintCallable)
    void FearRepel(AActor* _source);
    
    UFUNCTION(BlueprintCallable)
    void EnableShoulderCamera();
    
    UFUNCTION(BlueprintCallable)
    void EnableInteraction(TEnumAsByte<EUsableInteractionButton> _button);
    
    UFUNCTION(BlueprintCallable)
    void EnableFearRepel();
    
    UFUNCTION(BlueprintCallable)
    void EnableDroneMainActions();
    
    UFUNCTION(BlueprintCallable)
    void EnableAllInteractions();
    
    UFUNCTION(BlueprintCallable)
    void DisableShoulderCamera();
    
    UFUNCTION(BlueprintCallable)
    void DisableInteraction(TEnumAsByte<EUsableInteractionButton> _button);
    
    UFUNCTION(BlueprintCallable)
    void DisableFearRepel();
    
    UFUNCTION(BlueprintCallable)
    void DisableDroneMainActions();
    
    UFUNCTION(BlueprintCallable)
    void DisableAllInteractions();
    
    UFUNCTION(BlueprintCallable)
    void Die();
    
    UFUNCTION(BlueprintCallable)
    void DetachZurg(AZurgPawnSlave* _zurg);
    
    UFUNCTION(BlueprintCallable)
    void ClearFollowSplineMaxSpeed();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool CheckScriptedJumpRoutine(const TMap<USceneComponent*, AScriptedJump*>& _scriptedJumps);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CheckOneButtonJumpRoutine(const TArray<FJumpData>& _upJumpTargets, const TArray<FJumpData>& _downJumpTargets, FJumpData& _outJumpTarget);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CheckJumpValidity(const FJumpData& _jumpTargets, FString& _failReason) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CheckJumpUpValidity(const FJumpData& _jumpTargets);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CheckJumpRoutine(const TArray<FJumpData>& _upJumpTargets, const TArray<FJumpData>& _downJumpTargets);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CheckJumpDownValidity(const FJumpData& _jumpTargets);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanExitAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginWalkInterpolate(FVector _targetLocation, FRotator _targetRotation);
    
    UFUNCTION(BlueprintCallable)
    void BeginMoveToTarget(FVector _location, FRotator _rotation, bool _precise);
    
    UFUNCTION(BlueprintCallable)
    void BeginInterpolateAnimationAlongSpline(UAnimSequence* _animation, USplineComponent* _spline, FCatInterpolateAlongSplineParams _params);
    
    UFUNCTION(BlueprintCallable)
    void BeginInterpolateAnimation(UAnimSequence* _animation, FVector _targetLocation, FRotator _targetRotation);
    
    UFUNCTION(BlueprintCallable)
    void BeginFollowSpline(USplineComponent* _splineComponent, bool _precise, float _targetInputKey);
    
    UFUNCTION(BlueprintCallable)
    void BeginFollowRail(USplineRailComponent* _rail, float _targetDistance, bool _precise);
    
    UFUNCTION(BlueprintCallable)
    void AttachZurg(AZurgPawnSlave* _zurg);
    
    UFUNCTION(BlueprintCallable)
    void AddMovementIgnoredActor(AActor* _actor);
    
private:
    UFUNCTION()
    void _OnPotentialInteractionEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
protected:
    UFUNCTION()
    void _OnLifeComponentKilled(ULifeComponent* _lifeComponent, AActor* _killer);
    
private:
    UFUNCTION()
    void _OnLargeInteractionColliderEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION()
    void _OnLargeInteractionColliderBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void _OnGrabCapsuleBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void _OnGamepadShaked();
    
    UFUNCTION()
    void _OnCurrentRailEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION()
    void _OnCameraChanged(AHKPlayerCameraManager* _manager, const FTransform& _currentCameraTransform, AActor* _nextTarget, FViewTargetTransitionParams _transitionParams, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime);
    
    UFUNCTION()
    void _OnAttachedZurgEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
};

