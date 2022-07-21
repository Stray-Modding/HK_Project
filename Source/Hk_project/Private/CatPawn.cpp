#include "CatPawn.h"
#include "LifeComponent.h"
#include "CatMovementComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "DrawMovementComponent.h"

class AActor;
class USplineRailComponent;
class UPhysicalMaterial;
class AZurgPawnSlave;
class AScriptedJump;
class UCatUsableComponentBase;
class UAnimSequence;
class UAnimInstance;
class AHKPlayerCameraManager;
class UCatAnimInstance;
class ABackpack;
class USoundBase;
class UPrimitiveComponent;
class ACameraThirdPerson;

void ACatPawn::UpdateSpeedModifier(FName _key, float _speedModifier) {
}

void ACatPawn::UpdateLookAt(FName _id, FLookAtData _target) {
}

void ACatPawn::Unfreeze() {
}

bool ACatPawn::TryJumpOnRail(USplineRailComponent* _rail, const FVector& _closestLocation) {
    return false;
}

bool ACatPawn::TryJump(const FVector& _targetLocation, const FRotator& _targetRotation, bool _rejectAtLevelJumpsWithoutGaps) {
    return false;
}

bool ACatPawn::TryHangOnRail(const FVector& _targetLocation) {
    return false;
}

bool ACatPawn::TeleportOnRail(FVector _position, FRotator _rotation, USplineRailComponent* _rail, bool _teleportCamera) {
    return false;
}

bool ACatPawn::Teleport(FVector _position, FRotator _rotation, bool _checkValidity, bool _teleportCamera) {
    return false;
}

void ACatPawn::StopWalkInterpolate() {
}

void ACatPawn::StopInterpolateAnimationAlongSpline() {
}

void ACatPawn::StopInterpolateAnimation() {
}

void ACatPawn::StopInteraction(UCatUsableComponentBase* _catUsableComponent) {
}

void ACatPawn::StopFollowSpline() {
}

void ACatPawn::StopFollowRail() {
}

void ACatPawn::StopCustomAnimation() {
}

void ACatPawn::StopAutomatedRailHanging() {
}

void ACatPawn::StopAllInteractions() {
}

void ACatPawn::StartInteraction(UCatUsableComponentBase* _catUsableComponent) {
}

bool ACatPawn::ShouldUseJumpStopRailAnimation() const {
    return false;
}

bool ACatPawn::ShouldUseJumpStopAnimation() const {
    return false;
}

bool ACatPawn::ShouldInstantlyExitTrailingAnimations_Implementation() const {
    return false;
}

void ACatPawn::SetOverrideInteraction(TEnumAsByte<EUsableInteractionButton> _button, UCatUsableComponentBase* _catUsableComponent) {
}

void ACatPawn::SetInvertCameraAxis(bool _invertCamera) {
}

void ACatPawn::SetInterpolateOverridenRotation(FRotator _overridenRotation) {
}

void ACatPawn::SetHideoutActor(AActor* _hideoutActor) {
}

void ACatPawn::SetGroundHangingEnabled(bool _enabled) {
}

void ACatPawn::SetFollowSplineMaxSpeed(float _maxSpeed) {
}

void ACatPawn::SetFarInteractionRange(float _range) {
}

void ACatPawn::SetCustomMovementEnabled(bool _enabled) {
}

void ACatPawn::SetCustomAnimationPlayRate(float _playRate) {
}


float ACatPawn::RotationRatioFilter_Implementation(float _rotationRatio, float _dt) {
    return 0.0f;
}

void ACatPawn::ResetInput(FVector _worldInput) {
}

void ACatPawn::RemoveMovementIgnoredActor(AActor* _actor) {
}

void ACatPawn::PushUTurnDisabled() {
}

void ACatPawn::PushSpeedModifier(FName _key, float _speedModifier, float _inTime) {
}

void ACatPawn::PushRunningDisabled() {
}

void ACatPawn::PushPilotDisabled() {
}

void ACatPawn::PushMovementDisabled() {
}

void ACatPawn::PushMeowDisabled() {
}

void ACatPawn::PushLookAtDisabled() {
}

void ACatPawn::PushLookAt(FName _id, FLookAtData _target, int32 _priority) {
}

void ACatPawn::PushJumpFailAnimationDisabled() {
}

void ACatPawn::PushJumpDisabled() {
}

void ACatPawn::PushInvincibility() {
}

void ACatPawn::PushInputDisabled() {
}

void ACatPawn::PushIdleExitDisabled() {
}

void ACatPawn::PushIdleDisabled() {
}

void ACatPawn::PushHangingDisabled() {
}

void ACatPawn::PushGroundMaterialOverride(FName _id, UPhysicalMaterial* _material, int32 _priority) {
}

void ACatPawn::PushDriftParameters(FName _id, FDriftParameters _driftParameters) {
}

void ACatPawn::PushCrossingDisabled() {
}

void ACatPawn::PushCatButtonDisabled() {
}

void ACatPawn::PushAttitude(FName _id, TEnumAsByte<ECatAttitude> _attitude) {
}

float ACatPawn::ProcessRotationRatio_Implementation(float _rotationRatio, float _dt) {
    return 0.0f;
}

FVector ACatPawn::ProcessRawInput_Implementation(FVector _input, float _dt) {
    return FVector{};
}

FVector ACatPawn::ProcessMovementInput_Implementation(FVector _input, float _dt) {
    return FVector{};
}

FVector ACatPawn::ProcessInput_Implementation(FVector _input, float _dt) {
    return FVector{};
}

void ACatPawn::PopUTurnDisabled() {
}

void ACatPawn::PopSpeedModifier(FName _key, float _outTime) {
}

void ACatPawn::PopRunningDisabled() {
}

void ACatPawn::PopPilotDisabled() {
}

void ACatPawn::PopMovementDisabled() {
}

void ACatPawn::PopMeowDisabled() {
}

void ACatPawn::PopLookAtDisabled() {
}

void ACatPawn::PopLookAt(FName _id) {
}

void ACatPawn::PopJumpFailAnimationDisabled() {
}

void ACatPawn::PopJumpDisabled() {
}

void ACatPawn::PopInvincibility() {
}

void ACatPawn::PopInputDisabled() {
}

void ACatPawn::PopIdleExitDisabled() {
}

void ACatPawn::PopIdleDisabled() {
}

void ACatPawn::PopHangingDisabled() {
}

void ACatPawn::PopGroundMaterialOverride(FName _id) {
}

void ACatPawn::PopDriftParameters(FName _id) {
}

void ACatPawn::PopCrossingDisabled() {
}

void ACatPawn::PopCatButtonDisabled() {
}

void ACatPawn::PopAttitude(FName _id) {
}

bool ACatPawn::PollUTurnRequested() {
    return false;
}

void ACatPawn::PlaySynchronizedCustomAnimation(UAnimSequence* _animation, const FTransform& _movementStart, float _syncTime, bool _isLooping, bool _enableLookAt, bool _keepCollisions) {
}

void ACatPawn::PlayCustomAnimation(UAnimSequence* _animation, bool _isLooping, bool _enableLookAt) {
}

void ACatPawn::OnUTurnAnimationStarted(UAnimInstance* _animInstance) {
}

void ACatPawn::OnUTurnAnimationFinished() {
}





void ACatPawn::OnJumpEnd() {
}

void ACatPawn::OnJumpBegin() {
}

void ACatPawn::OnJumpAnimationStarted(UAnimInstance* _animInstance) {
}




void ACatPawn::NotifyJumpStopAnimationBegin() {
}

void ACatPawn::NotifyHangingExitAnimationStarted() {
}

void ACatPawn::NotifyCanExitAnimation() {
}

void ACatPawn::NotifyCameraCut(const FTransform& _currentCameraTransform, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime) {
}

void ACatPawn::Meow(bool _isGameplayMeow) {
}

bool ACatPawn::IsWallPerched() const {
    return false;
}

bool ACatPawn::IsWalkInterpolating() const {
    return false;
}

bool ACatPawn::IsUTurnLeft() const {
    return false;
}

bool ACatPawn::IsUTurning() const {
    return false;
}

bool ACatPawn::IsUTurnEnabled() const {
    return false;
}

bool ACatPawn::IsShoulderCameraDisabled() const {
    return false;
}

bool ACatPawn::IsRunningRequested() const {
    return false;
}

bool ACatPawn::IsRunningEnabled() const {
    return false;
}

bool ACatPawn::IsRunning() const {
    return false;
}

bool ACatPawn::IsPossessed() const {
    return false;
}

bool ACatPawn::IsPointPerch() const {
    return false;
}

bool ACatPawn::IsPlayerCat() const {
    return false;
}

bool ACatPawn::IsPilotDisabled() const {
    return false;
}

bool ACatPawn::IsPerchRequested() const {
    return false;
}

bool ACatPawn::IsPerched() const {
    return false;
}

bool ACatPawn::IsOnRailConnection() const {
    return false;
}

bool ACatPawn::IsOnRail() const {
    return false;
}

bool ACatPawn::IsMeowPressed() const {
    return false;
}

bool ACatPawn::IsMeowEnabled() const {
    return false;
}

bool ACatPawn::IsLookAtEnabled() const {
    return false;
}

bool ACatPawn::IsJumpUpPressed() const {
    return false;
}

bool ACatPawn::IsJumpInputEnabled() const {
    return false;
}

bool ACatPawn::IsJumping() const {
    return false;
}

bool ACatPawn::IsJumpFailAnimationEnabled() const {
    return false;
}

bool ACatPawn::IsJumpFailAnimationAllowed_Implementation() const {
    return false;
}

bool ACatPawn::IsJumpEnabled() const {
    return false;
}

bool ACatPawn::IsJumpDownPressed() const {
    return false;
}

bool ACatPawn::IsInUTurnAnimation() const {
    return false;
}

bool ACatPawn::IsInterpolatingAnimationAlongSpline() const {
    return false;
}

bool ACatPawn::IsInterpolating() const {
    return false;
}

bool ACatPawn::IsInteractionEnabled(TEnumAsByte<EUsableInteractionButton> _button) const {
    return false;
}

bool ACatPawn::IsInteracting(TEnumAsByte<EUsableInteractionButton> _button) const {
    return false;
}

bool ACatPawn::IsInScriptedJump() const {
    return false;
}

bool ACatPawn::IsInOneButtonJumpMode() const {
    return false;
}

bool ACatPawn::IsInNormalLocomotion() const {
    return false;
}

bool ACatPawn::IsInJumpTrajectory() const {
    return false;
}

bool ACatPawn::IsInJumpState() const {
    return false;
}

bool ACatPawn::IsInJumpBegin() const {
    return false;
}

bool ACatPawn::IsInFear() const {
    return false;
}

bool ACatPawn::IsInExitingHangingFirstPhase() const {
    return false;
}

bool ACatPawn::IsInCameraShoulderMode() const {
    return false;
}

bool ACatPawn::IsIdleEnabled() const {
    return false;
}

bool ACatPawn::IsIdle() const {
    return false;
}

bool ACatPawn::IsHangingRequested() const {
    return false;
}

bool ACatPawn::IsHangingEnabled() const {
    return false;
}

bool ACatPawn::IsHanging() const {
    return false;
}

bool ACatPawn::IsHackObstacle_Implementation(const AActor* _actor) const {
    return false;
}

bool ACatPawn::IsGroundHangingEnabled() const {
    return false;
}

bool ACatPawn::IsGrabbed() const {
    return false;
}

bool ACatPawn::IsFrozen() const {
    return false;
}

bool ACatPawn::IsFreeZurgSlotAvailable() const {
    return false;
}

bool ACatPawn::IsFollowingSpline() const {
    return false;
}

bool ACatPawn::IsFollowingRail() const {
    return false;
}

bool ACatPawn::IsFearRepelEnabled() {
    return false;
}

bool ACatPawn::IsFalling() const {
    return false;
}

bool ACatPawn::IsExitingHangingLeft() const {
    return false;
}

bool ACatPawn::IsExitingHanging180() const {
    return false;
}

bool ACatPawn::IsExitingHanging() const {
    return false;
}

bool ACatPawn::IsDoingAutomatedRailHanging() const {
    return false;
}

bool ACatPawn::IsDead() const {
    return false;
}

bool ACatPawn::IsCustomMovementEnabled() const {
    return false;
}

bool ACatPawn::IsCustomAnimationEnabled() const {
    return false;
}

bool ACatPawn::IsCrossing() const {
    return false;
}

bool ACatPawn::IsCatButtonReleased() const {
    return false;
}

bool ACatPawn::IsCatButtonPressed() const {
    return false;
}

bool ACatPawn::IsCatButtonEnabled() const {
    return false;
}

bool ACatPawn::IsCatButtonDown() const {
    return false;
}

bool ACatPawn::IsCatAnimationEnabled_Implementation() const {
    return false;
}

bool ACatPawn::IsBeingFearRepelled() const {
    return false;
}

void ACatPawn::InternalStopCustomAnimation(UAnimSequence* _animation) {
}

FVector ACatPawn::InputFilter_Implementation(FVector _input, float _dt) {
    return FVector{};
}

bool ACatPawn::InitScriptedJump(AScriptedJump* _jump, USceneComponent* _entry) {
    return false;
}

bool ACatPawn::InitJump(const FJumpData& _jumpData, bool _useWalkInterpolate) {
    return false;
}

bool ACatPawn::HasCustomAnimationFinishedPlay() const {
    return false;
}

TArray<FZurgSocket> ACatPawn::GetZurgSockets() const {
    return TArray<FZurgSocket>();
}

float ACatPawn::GetWallPerchRatio() const {
    return 0.0f;
}

float ACatPawn::GetWalkingMaxSpeed() const {
    return 0.0f;
}

float ACatPawn::GetVelocityRatio() const {
    return 0.0f;
}

FRailHangingTestResult ACatPawn::GetUTurnTarget() const {
    return FRailHangingTestResult{};
}

FRailHangingTestResult ACatPawn::GetUTurnSource() const {
    return FRailHangingTestResult{};
}

TArray<FJumpData> ACatPawn::GetUpJumpTargets() const {
    return TArray<FJumpData>();
}

USplineComponent* ACatPawn::GetSplineToFollow() const {
    return NULL;
}

USkeletalMeshComponent* ACatPawn::GetSkeletalMesh() const {
    return NULL;
}

float ACatPawn::GetRunningMaxSpeed() const {
    return 0.0f;
}

float ACatPawn::GetRotationRatio() {
    return 0.0f;
}

FVector ACatPawn::GetRawStickInput() const {
    return FVector{};
}

FVector ACatPawn::GetProcessedWorldInput() const {
    return FVector{};
}

TArray<float> ACatPawn::GetProbeDirectionAngles() const {
    return TArray<float>();
}

float ACatPawn::GetPerchAngle() const {
    return 0.0f;
}

FVector ACatPawn::GetMovementInput() const {
    return FVector{};
}

TArray<AActor*> ACatPawn::GetMovementIgnoredActors() const {
    return TArray<AActor*>();
}

float ACatPawn::GetMinimumRailLength() const {
    return 0.0f;
}

float ACatPawn::GetMaxLife() const {
    return 0.0f;
}

FRotator ACatPawn::GetLookAtRotator() const {
    return FRotator{};
}

FVector ACatPawn::GetLocationOnRail() const {
    return FVector{};
}

float ACatPawn::GetLocalVelocityRatio() const {
    return 0.0f;
}

FVector ACatPawn::GetLocalVelocity() const {
    return FVector{};
}

FVector ACatPawn::GetLocalGroundVelocity() const {
    return FVector{};
}

FQuat ACatPawn::GetLocalAngularVelocity() const {
    return FQuat{};
}

float ACatPawn::GetLife() const {
    return 0.0f;
}

float ACatPawn::GetLegsHeight() const {
    return 0.0f;
}

float ACatPawn::GetJumpUpPressedTimer() const {
    return 0.0f;
}

float ACatPawn::GetJumpTrajectoryMotionRatio() const {
    return 0.0f;
}

FVector ACatPawn::GetJumpStartVelocity() const {
    return FVector{};
}

FRotator ACatPawn::GetJumpSearchRotation() const {
    return FRotator{};
}

float ACatPawn::GetJumpScore_Implementation(const FJumpData& _jumpData) {
    return 0.0f;
}

float ACatPawn::GetJumpDownPressedTriggerTime() const {
    return 0.0f;
}

float ACatPawn::GetJumpAnimationRemainingTime() const {
    return 0.0f;
}

UAnimSequence* ACatPawn::GetInterpolateAnimation() const {
    return NULL;
}

float ACatPawn::GetInputThreshold() const {
    return 0.0f;
}

AActor* ACatPawn::GetHideoutActor() const {
    return NULL;
}

void ACatPawn::GetHeadSocket(USceneComponent*& _outComponent, FName& _outSocketName) const {
}

FVector ACatPawn::GetHeadLocation() const {
    return FVector{};
}

FPlane ACatPawn::GetHangingPlane() const {
    return FPlane{};
}

float ACatPawn::GetHangingAngle() const {
    return 0.0f;
}

FGroundProbeData ACatPawn::GetGroundProbeData() const {
    return FGroundProbeData{};
}

float ACatPawn::GetFollowSplineMaxSpeed() const {
    return 0.0f;
}

float ACatPawn::GetFinalSpeedModifier() const {
    return 0.0f;
}

FDriftParameters ACatPawn::GetFinalDriftParameters() const {
    return FDriftParameters{};
}

float ACatPawn::GetFarInteractionRange() const {
    return 0.0f;
}

USceneComponent* ACatPawn::GetDroneUnfoldedSocket_Implementation(FName& _outSocketName) const {
    return NULL;
}

USceneComponent* ACatPawn::GetDroneUnfoldedLookSocket_Implementation(FName& _outSocketName) const {
    return NULL;
}

USceneComponent* ACatPawn::GetDroneFoldedSocket_Implementation(FName& _outSocketName) const {
    return NULL;
}

float ACatPawn::GetDriftFactor() const {
    return 0.0f;
}

float ACatPawn::GetDriftAnimationPlayRate_Implementation() const {
    return 0.0f;
}

TArray<FJumpData> ACatPawn::GetDownJumpTargets() const {
    return TArray<FJumpData>();
}

float ACatPawn::GetDistanceOnRail() const {
    return 0.0f;
}

USoundBase* ACatPawn::GetDefaultStartInteractionSound() const {
    return NULL;
}

FCustomAnimation ACatPawn::GetCustomAnimation() const {
    return FCustomAnimation{};
}

UAnimSequence* ACatPawn::GetCurrentScriptedJumpAnimation() const {
    return NULL;
}

AScriptedJump* ACatPawn::GetCurrentScriptedJump() const {
    return NULL;
}

USplineRailComponent* ACatPawn::GetCurrentRail() const {
    return NULL;
}

float ACatPawn::GetCurrentJumpLength() const {
    return 0.0f;
}

float ACatPawn::GetCurrentJumpHeight() const {
    return 0.0f;
}

FJumpData ACatPawn::GetCurrentJumpData() const {
    return FJumpData{};
}

TArray<UCatUsableComponentBase*> ACatPawn::GetCurrentInteractions(TEnumAsByte<EUsableInteractionButton> _button) const {
    return TArray<UCatUsableComponentBase*>();
}

UCatUsableComponentBase* ACatPawn::GetCurrentInteraction(TEnumAsByte<EUsableInteractionButton> _button) const {
    return NULL;
}

UPrimitiveComponent* ACatPawn::GetCurrentGroundVisualObject() const {
    return NULL;
}

UPhysicalMaterial* ACatPawn::GetCurrentGroundMaterial() const {
    return NULL;
}

FVector ACatPawn::GetCorrectedWorldInput() const {
    return FVector{};
}

UCatUsableComponentBase* ACatPawn::GetClosestInteraction(TEnumAsByte<EUsableInteractionButton> _button) const {
    return NULL;
}

UCapsuleComponent* ACatPawn::GetCapsule() const {
    return NULL;
}

ACameraThirdPerson* ACatPawn::GetCameraThirdPerson() const {
    return NULL;
}

ABackpack* ACatPawn::GetBackpack() const {
    return NULL;
}

TEnumAsByte<ECatAttitude> ACatPawn::GetAttitude() const {
    return CatAttitude_Normal;
}

UCatAnimInstance* ACatPawn::GetAnimInstance() const {
    return NULL;
}

FTransform ACatPawn::GetAnimationLastRootMotion() const {
    return FTransform{};
}

FQuat ACatPawn::GetAngularVelocity() const {
    return FQuat{};
}

void ACatPawn::Freeze() {
}

void ACatPawn::ForceJumpOnRail(USplineRailComponent* _rail, const FVector& _closestLocation) {
}

void ACatPawn::ForceJump(const FVector& _targetLocation, const FRotator& _targetRotation) {
}

void ACatPawn::ForceGroundMaterialUpdate() {
}

void ACatPawn::FearRepel(AActor* _source) {
}

void ACatPawn::EnableShoulderCamera() {
}

void ACatPawn::EnableInteraction(TEnumAsByte<EUsableInteractionButton> _button) {
}

void ACatPawn::EnableFearRepel() {
}

void ACatPawn::EnableDroneMainActions() {
}

void ACatPawn::EnableAllInteractions() {
}

void ACatPawn::DisableShoulderCamera() {
}

void ACatPawn::DisableInteraction(TEnumAsByte<EUsableInteractionButton> _button) {
}

void ACatPawn::DisableFearRepel() {
}

void ACatPawn::DisableDroneMainActions() {
}

void ACatPawn::DisableAllInteractions() {
}

void ACatPawn::Die() {
}

void ACatPawn::DetachZurg(AZurgPawnSlave* _zurg) {
}

void ACatPawn::ClearFollowSplineMaxSpeed() {
}

bool ACatPawn::CheckScriptedJumpRoutine_Implementation(const TMap<USceneComponent*, AScriptedJump*>& _scriptedJumps) {
    return false;
}

bool ACatPawn::CheckOneButtonJumpRoutine_Implementation(const TArray<FJumpData>& _upJumpTargets, const TArray<FJumpData>& _downJumpTargets, FJumpData& _outJumpTarget) {
    return false;
}


bool ACatPawn::CheckJumpUpValidity_Implementation(const FJumpData& _jumpTargets) {
    return false;
}

bool ACatPawn::CheckJumpRoutine_Implementation(const TArray<FJumpData>& _upJumpTargets, const TArray<FJumpData>& _downJumpTargets) {
    return false;
}

bool ACatPawn::CheckJumpDownValidity_Implementation(const FJumpData& _jumpTargets) {
    return false;
}

bool ACatPawn::CanExitAnimation() const {
    return false;
}

void ACatPawn::BeginWalkInterpolate(FVector _targetLocation, FRotator _targetRotation) {
}

void ACatPawn::BeginMoveToTarget(FVector _location, FRotator _rotation, bool _precise) {
}

void ACatPawn::BeginInterpolateAnimationAlongSpline(UAnimSequence* _animation, USplineComponent* _spline, FCatInterpolateAlongSplineParams _params) {
}

void ACatPawn::BeginInterpolateAnimation(UAnimSequence* _animation, FVector _targetLocation, FRotator _targetRotation) {
}

void ACatPawn::BeginFollowSpline(USplineComponent* _splineComponent, bool _precise, float _targetInputKey) {
}

void ACatPawn::BeginFollowRail(USplineRailComponent* _rail, float _targetDistance, bool _precise) {
}

void ACatPawn::AttachZurg(AZurgPawnSlave* _zurg) {
}

void ACatPawn::AddMovementIgnoredActor(AActor* _actor) {
}

void ACatPawn::_OnPotentialInteractionEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}

void ACatPawn::_OnLifeComponentKilled(ULifeComponent* _lifeComponent, AActor* _killer) {
}

void ACatPawn::_OnLargeInteractionColliderEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex) {
}

void ACatPawn::_OnLargeInteractionColliderBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ACatPawn::_OnGrabCapsuleBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ACatPawn::_OnGamepadShaked() {
}

void ACatPawn::_OnCurrentRailEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}

void ACatPawn::_OnCameraChanged(AHKPlayerCameraManager* _manager, const FTransform& _currentCameraTransform, AActor* _nextTarget, FViewTargetTransitionParams _transitionParams, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime) {
}

void ACatPawn::_OnAttachedZurgEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}

ACatPawn::ACatPawn() {
    this->m_visual = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Visual"));
    this->m_capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("capsule"));
    this->m_largeInteractionCollider = CreateDefaultSubobject<USphereComponent>(TEXT("largeInteractionCollider"));
    this->m_grabCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("grabCapsule"));
    this->m_trajectory = CreateDefaultSubobject<USplineComponent>(TEXT("Trajectory"));
    this->m_lifeComponent = CreateDefaultSubobject<ULifeComponent>(TEXT("LifeComponent"));
    this->m_drawMovementComponent = CreateDefaultSubobject<UDrawMovementComponent>(TEXT("drawMovement"));
    this->m_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_cameraThirdPerson = NULL;
    this->m_cameraThirdPersonClass = NULL;
    this->m_movement = CreateDefaultSubobject<UCatMovementComponent>(TEXT("Movement"));
    this->m_stateMachine = NULL;
    this->m_cameraYawSpeed = 90.00f;
    this->m_cameraPitchSpeed = 90.00f;
    this->m_inputThreshold = 0.05f;
    this->m_jumpInputBufferDuration = 0.20f;
    this->m_jumpReleasedBufferDuration = 0.20f;
    this->m_inputResponse = NULL;
    this->m_inputAngleCorrection_Curve = NULL;
    this->m_maximumMovementInputSize = 2.00f;
    this->m_inputTransitionStartBlendAngle = 30.00f;
    this->m_inputTransitionSmootherTolerance = 0.10f;
    this->m_groundProbeRadius = 120.00f;
    this->m_jumpGroundProbeRadius = 60.00f;
    this->m_UTurnAngleThreshold = 145.00f;
    this->m_UTurnTimeThreshold = 0.03f;
    this->m_UTurnTimeThresholdFollowSpline = 0.03f;
    this->m_rotationRatio = 0.01f;
    this->m_stepDownDistance = 20.00f;
    this->m_maxSlope = 55.00f;
    this->m_isCatPilotEnabled = true;
    this->m_catPilotDistanceFromObstacleRangeMin = 30.00f;
    this->m_catPilotDistanceFromObstacleRangeMax = 60.00f;
    this->m_catPilotCatFacingThresholdAngle = 10.00f;
    this->m_catPilotCancelInputThresholdAngle = 30.00f;
    this->m_catPilotCancelInputRampAngle = 50.00f;
    this->m_minJumpLength = 15.00f;
    this->m_jumpCapacityCurve = NULL;
    this->m_jumpAngleWeight_Curve = NULL;
    this->m_jumpLengthWeight_Curve = NULL;
    this->m_jumpHeightWeight_Curve = NULL;
    this->m_jumpVisibilityWeight = 1.00f;
    this->m_idealShortestJumpLength = 50.00f;
    this->m_runningidealShortestJumpLength_Curve = NULL;
    this->m_jumpSearchDirectionRotationRatio = 0.00f;
    this->m_jumpSearchClampingAngle = 90.00f;
    this->m_maxJumpAngle = 90.00f;
    this->m_upJumpCurve = NULL;
    this->m_downJumpCurve = NULL;
    this->m_jumpDownPressedTriggerTime = 0.50f;
    this->m_enableButtonHeldJump = true;
    this->m_jumpDownMaximumDistanceToGap = 50.00f;
    this->m_jumpTrajectoryCastRadius = 5.00f;
    this->m_autoJumpMaxDistanceToObstacle = 10.00f;
    this->m_runningAutoJumpMaxDistanceToObstacle = NULL;
    this->m_jumpProbeRadius = 40.00f;
    this->m_jumpProbeInterval = 40.00f;
    this->m_additionaProbeRaycastRadius = 0.00f;
    this->m_oneButtonJumpMode = false;
    this->m_hangingTriggerAngle = 45.00f;
    this->m_hangingTriggerAngleHysteresis = 5.00f;
    this->m_hangingIntermediateRatio = 0.30f;
    this->m_hangingStartTime = 0.30f;
    this->m_hangingJumpDownTime = 0.30f;
    this->m_hangingMaxVelocityThreshold = 10.00f;
    this->m_hangingTriggeringDistanceToPlane = 10.00f;
    this->m_hangingTriggeringDistanceToPlaneHysteresis = 10.00f;
    this->m_hangingPivotDistance = 10.00f;
    this->m_inputOverRailDirectionAngle_InputFactor_Curve = NULL;
    this->m_maxRailDetectionSize = 70.00f;
    this->m_maxInterplaneAngle = 145.00f;
    this->m_railEndMargin = 15.00f;
    this->m_zurgSettingsReference = NULL;
    this->m_ZurgMinSpeedModifier = 0.50f;
    this->m_struggleGaugeReinitValueAfterCompletion = 1.00f;
    this->m_struggleGaugePressIncrement = 1.00f;
    this->m_struggleGaugeDecayOverTime = 1.00f;
    this->m_ejectedZurgsOnStruggleCompletion = 1;
    this->m_maxFallSpeed = 200.00f;
    this->m_canDieOnFall = true;
    this->m_deadlyFallDistance = 10.00f;
    this->m_driftLocomotionBeginIgnoreTime = 0.20f;
    this->m_driftModeEnterThreshold = 0.35f;
    this->m_driftModeExitThreshold = 0.20f;
    this->m_enableCatAnimationFeature = false;
    this->m_catAnimationPressTime = 1.00f;
    this->m_zurgSocketPrefix = TEXT("Spot_Zurg");
    this->m_jumpGroundCollisionTestOffset = 0.40f;
    this->m_stepSmoothingTriggerAngleThreshold = 5.00f;
    this->m_stepSmoothingTriggerHeightThreshold = 1.00f;
    this->m_stepSmoothingEndAngleThreshold = 1.00f;
    this->m_stepSmoothingEndHeightThreshold = 0.20f;
    this->m_nextRail = NULL;
    this->m_currentRail = NULL;
    this->m_previousDispatchRail = NULL;
    this->m_railEnterLimitAngle = 45.00f;
    this->m_railEnterFacingLimitAngle = 60.00f;
    this->m_railEnterDistance = 25.00f;
    this->m_railExitDistance = 25.00f;
    this->m_minimumRailLength = 50.00f;
    this->m_railSitLerpInTime = 1.00f;
    this->m_railSitLerpOutTime = 1.00f;
    this->m_railSitExitAngle = 10.00f;
    this->m_perchExitDistanceThreshold = 1.00f;
    this->m_perchExitAngleThreshold = 1.00f;
    this->m_perchEnterTime = 0.15f;
    this->m_maxJumpDownHeight = -25.00f;
    this->m_maxJumpDownAngleDeviation = 35.00f;
    this->m_jumpOnRailEndInputAngleMaxArc = 25.00f;
    this->m_jumpBeginAnimationMovement = 15.00f;
    this->m_jumpMinimumPreRotationTime = 0.50f;
    this->m_jumpEndLerpTime = 0.10f;
    this->m_slowJumpThreshold = 0.45f;
    this->m_lookAtValidYawRange = 120.00f;
    this->m_UTurnInputThreshold = 0.60f;
    this->m_hangingEnterTime = 0.10f;
    this->m_hangingAnimationTime = 0.40f;
    this->m_hangingExitInputAngleAmplitude = 15.00f;
    this->m_fearTime = 1.00f;
    this->M_BackPack = NULL;
    this->m_animInstance = NULL;
    this->m_jumpDebugDataSamplesPerSecond = 30.00f;
    this->m_rootAlignmentThreshold = 5.00f;
    this->m_jumpOnRailEndRotationLerpFactor = 2.00f;
    this->m_movingJumpPredictionTime = 0.30f;
    this->m_movingJumpSmootingTime = 0.20f;
    this->m_currentScriptedJump = NULL;
    this->m_scriptedJumpStartEntry = NULL;
    this->m_scriptedJumpAnimationBegin = NULL;
    this->m_scriptedJumpAnimationEnd = NULL;
    this->m_scriptedJumpAnimation = NULL;
    this->m_scriptedJumpApproachTime = 0.50f;
    this->m_movingActorComponent = NULL;
    this->m_jumpBeginComponent = NULL;
    this->m_jumpEndComponent = NULL;
    this->m_hideoutActor = NULL;
    this->m_splineToFollow = NULL;
    this->m_followSplineDistancePredictionFactor = 2.00f;
    this->m_followSplineStopTimePrediction = 0.20f;
    this->m_skipSplineDistance = 10.00f;
    this->m_followSplineEndInterpolateAnimation = NULL;
    this->m_followSplineFailSafeTime = 0.50f;
    this->m_interpolateAnimation = NULL;
    this->m_railToFollow = NULL;
    this->m_automatedRailHangingCompleteThreshold = 1.00f;
    this->m_isCrossingEnabled = false;
    this->m_exludeCrossingFromJumps = false;
    this->m_maxCrossingLength = 50.00f;
    this->m_maxRunningCrossingLength = 80.00f;
    this->m_minCrossingHeight = -30.00f;
    this->m_maxCrossingHeight = 30.00f;
    this->m_crossingMaxInputAngle = 30.00f;
    this->m_crossingMaxInputCatAngle = 10.00f;
    this->m_crossingMaxDistanceToObstacle = 30.00f;
    this->m_crossingMaxTimeToObstacle = 0.20f;
    this->m_enabledDistanceFieldPilot = false;
    this->m_distanceToObstacle = 15.00f;
    this->m_negativeDistanceToObstacleWeight = 5.00f;
    this->m_angleDeviationWeight = 0.50f;
    this->m_smoothSamplingTime = 0.30f;
    this->m_distanceDiffThreshold = 1.00f;
    this->m_relaxIterationsCount = 2;
    this->m_pilotTimeAhead = 0.50f;
    this->m_pilotDistanceToObstacle = 60.00f;
    this->m_pilotSideFavorAngleThreshold = 10.00f;
    this->m_pilotProbeDistanceAhead = 40.00f;
    this->m_pilotProbeDeviationAngle = 10.00f;
    this->m_pilotDebugProbe = false;
    this->m_pilotDebugDistanceField = false;
    this->m_pilotDebugPathFind = false;
    this->m_pilotDebugPath = false;
    this->m_interactionRadiusHysteresis = 30.00f;
    this->m_closestInteractionHysteresis = 5.00f;
    this->m_interactionSourcePoleHeight = 150.00f;
    this->m_defaultStartInteractionSound = NULL;
    this->m_closestInteraction[0] = NULL;
    this->m_closestInteraction[1] = NULL;
    this->m_closestInteraction[2] = NULL;
    this->m_closestInteraction[3] = NULL;
    this->m_overrideInteraction[0] = NULL;
    this->m_overrideInteraction[1] = NULL;
    this->m_overrideInteraction[2] = NULL;
    this->m_overrideInteraction[3] = NULL;
    this->m_lookedAtInteraction = NULL;
    this->m_validTransformInterval = 0.10f;
    this->m_validTransformMaxObstacleDistance = 15.00f;
    this->m_storedValidTransformCount = 20;
    this->m_validTransformDebugEnabled = false;
    this->m_canFailJumps = false;
    this->m_debugHanging = false;
    this->m_debugUturn = false;
    this->m_debugInputs = false;
    this->m_debugLastJumpFlags = 0;
    this->m_debugCatGroundProbeFlags = 0;
    this->m_debugJumpSearchFlags = 0;
}

