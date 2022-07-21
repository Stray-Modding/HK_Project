#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "Engine/EngineTypes.h"
#include "JumpData.h"
#include "CatLookAtEntry.h"
#include "EUsableInteractionButton.h"
#include "GroundMaterialOverrideEntry.h"
#include "SmootherTransform.h"
#include "CameraThirdPersonPreset.h"
#include "SmootherFloat.h"
#include "SmootherCurved.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "DriftParameters.h"
#include "GroundProbeData.h"
#include "RailHangingTestResult.h"
#include "SmootherRotation.h"
#include "ECatAttitude.h"
#include "ZurgSocket.h"
#include "VectorPIDController.h"
#include "InteractionData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
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
#include "CatPawn.generated.h"

class ACatPawn;
class AZurgPawn;
class UAnimSequence;
class UCatUsableComponentBase;
class ACameraThirdPerson;
class UMovingActorComponent;
class AHKPlayerController;
class USkeletalMeshComponent;
class UCapsuleComponent;
class USphereComponent;
class USplineComponent;
class ULifeComponent;
class UZurgSettings;
class UDrawMovementComponent;
class USceneComponent;
class UCatMovementComponent;
class USplineRailComponent;
class UHierarchicalStateMachine;
class UCurveFloat;
class UCurveVector;
class UAnimInstance;
class AActor;
class USplineRailConnection;
class ABackpack;
class UCatAnimInstance;
class UPhysicalMaterial;
class AScriptedJump;
class UPrimitiveComponent;
class AZurgPawnSlave;
class USoundBase;
class AHKPlayerCameraManager;

UCLASS(Blueprintable)
class HK_PROJECT_API ACatPawn : public APawn {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCatZurgDelegate, ACatPawn*, _catPawn, AZurgPawn*, _zurg);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCatUsableDelegate, ACatPawn*, _catPawn, UCatUsableComponentBase*, _usable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCatInteractionDelegate, ACatPawn*, _catPawn, TEnumAsByte<EUsableInteractionButton>, _button, UCatUsableComponentBase*, _usable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCatDelegate, ACatPawn*, _catPawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCatContollerDelegate, ACatPawn*, _catPawn, AHKPlayerController*, _playerController);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatDelegate JumpBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatDelegate JumpEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatDelegate Died;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatZurgDelegate ZurgAttached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatZurgDelegate ZurgDetached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatDelegate FollowSplineEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatDelegate FollowRailEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatDelegate JumpStateBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatDelegate JumpStateEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatUsableDelegate BeforeInteractionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatUsableDelegate AfterInteractionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatUsableDelegate BeforeInteractionStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatInteractionDelegate ClosestInteractionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatDelegate AfterInteractionStop;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_visual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* m_largeInteractionCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_grabCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* m_trajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULifeComponent* m_lifeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDrawMovementComponent* m_drawMovementComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* m_root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraThirdPerson* m_cameraThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACameraThirdPerson> m_cameraThirdPersonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraThirdPersonPreset m_cameraShoulderPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCatMovementComponent* m_movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraPitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_inputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpInputBufferDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpReleasedBufferDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_inputResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_inputAngleCorrection_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherCurved m_accelerationSmoother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherCurved m_runFactorSmoother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maximumMovementInputSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_inputTransitionStartBlendAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_inputTransitionSmootherTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_groundProbeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpGroundProbeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UTurnAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UTurnTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UTurnTimeThresholdFollowSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rotationRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stepDownDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isCatPilotEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_catPilotDistanceFromObstacleRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_catPilotDistanceFromObstacleRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_catPilotCatFacingThresholdAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_catPilotCancelInputThresholdAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_catPilotCancelInputRampAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minJumpLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_jumpCapacityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_jumpAngleWeight_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_jumpLengthWeight_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_jumpHeightWeight_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpVisibilityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_idealShortestJumpLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_runningidealShortestJumpLength_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpSearchDirectionRotationRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpSearchClampingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxJumpAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_upJumpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_downJumpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpDownPressedTriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableButtonHeldJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpDownMaximumDistanceToGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpTrajectoryCastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_autoJumpMaxDistanceToObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_runningAutoJumpMaxDistanceToObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpProbeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpProbeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_additionaProbeRaycastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_oneButtonJumpMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingTriggerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingTriggerAngleHysteresis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingIntermediateRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingJumpDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingMaxVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingTriggeringDistanceToPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingTriggeringDistanceToPlaneHysteresis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingPivotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_inputOverRailDirectionAngle_InputFactor_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxRailDetectionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxInterplaneAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_railEndMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZurgSettings* m_zurgSettingsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ZurgMinSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_struggleGaugeReinitValueAfterCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_struggleGaugePressIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_struggleGaugeDecayOverTime;
    
    UPROPERTY(EditAnywhere)
    uint16 m_ejectedZurgsOnStruggleCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxFallSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canDieOnFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_deadlyFallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriftParameters m_baseDriftParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_driftLocomotionBeginIgnoreTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_driftModeEnterThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_driftModeExitThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableCatAnimationFeature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_catAnimationPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_catAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_zurgSocketPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpGroundCollisionTestOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroundProbeData m_previousProbeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroundProbeData m_currentProbeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_movementIgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stepSmoothingTriggerAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stepSmoothingTriggerHeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stepSmoothingEndAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stepSmoothingEndHeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherFloat m_stepPitchSmoother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherFloat m_stepHeightSmoother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineRailComponent* m_nextRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineRailComponent* m_currentRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineRailComponent* m_previousDispatchRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USplineRailConnection*> m_overlappingRailConnexions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_railEnterLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_railEnterFacingLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_railEnterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_railExitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimumRailLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_railSitLerpInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_railSitLerpOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_railSitExitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_perchExitDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_perchExitAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_perchEnterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxJumpDownHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxJumpDownAngleDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpOnRailEndInputAngleMaxArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpBeginAnimationMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpMinimumPreRotationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpEndLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_slowJumpThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpData m_nextJumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpData m_currentJumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJumpData> m_activeJumpTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJumpData> m_passiveJumpTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJumpData> m_crossingJumpTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCatLookAtEntry> m_lookAtStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lookAtValidYawRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UTurnInputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherRotation m_UTurnTargetRotationSmoother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherRotation m_hangingInputSmoother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherTransform m_hangingBaseTransformSmoother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherTransform m_hangingTargetTransformSmoother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingEnterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hangingExitInputAngleAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_fearRepelSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZurgSocket> m_zurgSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABackpack* M_BackPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatAnimInstance* m_animInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_jumpDebugDataTrackedBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpDebugDataSamplesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rootAlignmentThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpOnRailEndRotationLerpFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_movingJumpPredictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_movingJumpSmootingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USceneComponent*, AScriptedJump*> m_scriptedJumpEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScriptedJump* m_currentScriptedJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* m_scriptedJumpStartEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* m_scriptedJumpAnimationBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* m_scriptedJumpAnimationEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_scriptedJumpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_scriptedJumpApproachTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovingActorComponent* m_movingActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovingActorComponent* m_jumpBeginComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovingActorComponent* m_jumpEndComponent;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UPhysicalMaterial> m_groundMaterial;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UPrimitiveComponent> m_groundVisualObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGroundMaterialOverrideEntry> m_groundMaterialOverrideStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_hideoutActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* m_splineToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_followSplineDistancePredictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorPIDController m_followSplineInputPID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_followSplineStopTimePrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_skipSplineDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_followSplineEndInterpolateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_followSplineFailSafeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_interpolateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineRailComponent* m_railToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_automatedRailHangingCompleteThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isCrossingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_exludeCrossingFromJumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxCrossingLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxRunningCrossingLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minCrossingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxCrossingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_crossingMaxInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_crossingMaxInputCatAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_crossingMaxDistanceToObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_crossingMaxTimeToObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_probeDirectionAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enabledDistanceFieldPilot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distanceToObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_negativeDistanceToObstacleWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angleDeviationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_smoothSamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distanceDiffThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_relaxIterationsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pilotTimeAhead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pilotDistanceToObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pilotSideFavorAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pilotProbeDistanceAhead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pilotProbeDeviationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_pilotResponseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_pilotAngleCompensationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pilotDebugProbe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pilotDebugDistanceField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pilotDebugPathFind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pilotDebugPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_interactionRadiusHysteresis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_closestInteractionHysteresis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_interactionSourcePoleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_usableDistanceToCatWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_usableAngleWithCatForwardWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_usableNormalizedDistanceToScreenCenterWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_defaultStartInteractionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UCatUsableComponentBase*, FInteractionData> m_availableInteractions;
    
    UPROPERTY(EditAnywhere, Export)
    UCatUsableComponentBase* m_closestInteraction[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UCatUsableComponentBase*> m_pendingInteractions;
    
    UPROPERTY(EditAnywhere, Export)
    UCatUsableComponentBase* m_overrideInteraction[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCatUsableComponentBase* m_lookedAtInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, int32> m_interactionActorsDependencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_validTransformInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_validTransformMaxObstacleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_storedValidTransformCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_validTransformDebugEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_idleTriggerTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canFailJumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range m_jumpsBeforeFailRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRotator m_cameraSavedRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_debugHanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_debugUturn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseJumpStopRailAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseJumpStopAnimation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBackpackFur(bool _backpackOn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ProcessRotationRatio(float _rotationRatio, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ProcessRawInput(FVector _input, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ProcessMovementInput(FVector _input, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStruggled();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetInput(FVector _worldInput);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeowed(bool _isGameplayMeow);
    
    UFUNCTION(BlueprintCallable)
    void OnJumpEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpAnimationStarted(UAnimInstance* _animInstance);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitGrabbed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterGrabbed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallPerched() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWalkInterpolating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUTurnLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUTurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUTurnEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShoulderCameraDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossessed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointPerch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerCat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPilotDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerchRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerched() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnRailConnection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnRail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeowPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeowEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookAtEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpUpPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpFailAnimationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsJumpFailAnimationAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpDownPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInUTurnAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterpolatingAnimationAlongSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterpolating() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionEnabled(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteracting(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInScriptedJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInOneButtonJumpMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInNormalLocomotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInJumpTrajectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInJumpState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInJumpBegin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInExitingHangingFirstPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCameraShoulderMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdleEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHangingRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHangingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsHackObstacle(const AActor* _actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundHangingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrozen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeZurgSlotAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowingSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowingRail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFearRepelEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExitingHangingLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExitingHanging180() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExitingHanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoingAutomatedRailHanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomMovementEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomAnimationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrossing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCatButtonReleased() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCatButtonPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCatButtonEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCatButtonDown() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCatAnimationEnabled() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingFearRepelled() const;
    
    UFUNCTION(BlueprintCallable)
    void InternalStopCustomAnimation(UAnimSequence* _animation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector InputFilter(FVector _input, float _dt);
    
public:
    UFUNCTION(BlueprintCallable)
    bool InitScriptedJump(AScriptedJump* _jump, USceneComponent* _entry);
    
    UFUNCTION(BlueprintCallable)
    bool InitJump(const FJumpData& _jumpData, bool _useWalkInterpolate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCustomAnimationFinishedPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FZurgSocket> GetZurgSockets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWallPerchRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWalkingMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVelocityRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRailHangingTestResult GetUTurnTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRailHangingTestResult GetUTurnSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FJumpData> GetUpJumpTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSplineToFollow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRunningMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRotationRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRawStickInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProcessedWorldInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetProbeDirectionAngles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPerchAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMovementInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetMovementIgnoredActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumRailLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxLife() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLookAtRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationOnRail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocalVelocityRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocalVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocalGroundVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetLocalAngularVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLife() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLegsHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpUpPressedTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpTrajectoryMotionRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetJumpStartVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetJumpSearchRotation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetJumpScore(const FJumpData& _jumpData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpDownPressedTriggerTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpAnimationRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetInterpolateAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHideoutActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHeadSocket(USceneComponent*& _outComponent, FName& _outSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeadLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlane GetHangingPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHangingAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGroundProbeData GetGroundProbeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFollowSplineMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFinalSpeedModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDriftParameters GetFinalDriftParameters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFarInteractionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetDroneUnfoldedSocket(FName& _outSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetDroneUnfoldedLookSocket(FName& _outSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetDroneFoldedSocket(FName& _outSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDriftFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDriftAnimationPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FJumpData> GetDownJumpTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceOnRail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetDefaultStartInteractionSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomAnimation GetCustomAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetCurrentScriptedJumpAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AScriptedJump* GetCurrentScriptedJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineRailComponent* GetCurrentRail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentJumpLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentJumpHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FJumpData GetCurrentJumpData() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCatUsableComponentBase*> GetCurrentInteractions(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintPure)
    UCatUsableComponentBase* GetCurrentInteraction(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetCurrentGroundVisualObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalMaterial* GetCurrentGroundMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCorrectedWorldInput() const;
    
    UFUNCTION(BlueprintPure)
    UCatUsableComponentBase* GetClosestInteraction(TEnumAsByte<EUsableInteractionButton> _button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCapsuleComponent* GetCapsule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACameraThirdPerson* GetCameraThirdPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABackpack* GetBackpack() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECatAttitude> GetAttitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCatAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetAnimationLastRootMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckScriptedJumpRoutine(const TMap<USceneComponent*, AScriptedJump*>& _scriptedJumps);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckOneButtonJumpRoutine(const TArray<FJumpData>& _upJumpTargets, const TArray<FJumpData>& _downJumpTargets, FJumpData& _outJumpTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckJumpValidity(const FJumpData& _jumpTargets, FString& _failReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckJumpUpValidity(const FJumpData& _jumpTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckJumpRoutine(const TArray<FJumpData>& _upJumpTargets, const TArray<FJumpData>& _downJumpTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckJumpDownValidity(const FJumpData& _jumpTargets);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable)
    void _OnLifeComponentKilled(ULifeComponent* _lifeComponent, AActor* _killer);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnLargeInteractionColliderEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnLargeInteractionColliderBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnGrabCapsuleBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnGamepadShaked();
    
    UFUNCTION()
    void _OnCurrentRailEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void _OnCameraChanged(AHKPlayerCameraManager* _manager, const FTransform& _currentCameraTransform, AActor* _nextTarget, FViewTargetTransitionParams _transitionParams, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime);
    
    UFUNCTION()
    void _OnAttachedZurgEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
};

