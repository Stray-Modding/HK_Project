#include "CharacterDroid.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "TalkableComponent.h"
#include "Components/SplineComponent.h"
#include "StreamingComponent.h"
#include "SaveComponent.h"
#include "GridSnappingComponent.h"

class UAnimSequence;
class AActor;
class UDroidMovementAnimationSettings;
class ADialog;
class UMaterialInstance;
class ACatPawn;
class ARecastNavMesh;
class UDroidUsableComponent;
class USceneComponent;
class ACharacterDroid;
class UPrimitiveComponent;

void ACharacterDroid::ThrowObjectTo_Implementation(UAnimSequence* _throwAnimation, AActor* _throwToThisActor, float _trajectoryArc, bool _blendWithIdle) {
}

void ACharacterDroid::TakeActor(AActor* _actorToTake) {
}

void ACharacterDroid::Stumble(AActor* _stumbledUpon) {
}

void ACharacterDroid::StopUseActor() {
}

void ACharacterDroid::StopMoveTo() {
}

void ACharacterDroid::StopAnimation() {
}

void ACharacterDroid::StepTo_Implementation(FTransform _stepToTransform) {
}

void ACharacterDroid::StartUseActor(AActor* _actorToUse) {
}

bool ACharacterDroid::ShouldSkipIdleAnimationBlend() const {
    return false;
}

void ACharacterDroid::SetTurnTowardsTarget(FLookAtData _target) {
}

void ACharacterDroid::SetTurnTowardsEnabled(bool _enabled) {
}

void ACharacterDroid::SetShowDirection(FLookAtData _data, bool _isAutonomous) {
}

void ACharacterDroid::SetPosture(EDroidPosture _newPosture) {
}

void ACharacterDroid::SetOnMeowedBehavior(EDroidOnMeowedBehavior _newOnMeowedBehavior) {
}

void ACharacterDroid::SetMovementState(EDroidMovementState _movementMode) {
}

void ACharacterDroid::SetMovementAnimationSettings(UDroidMovementAnimationSettings* _newMovementSettings) {
}

void ACharacterDroid::SetLookAtType(EDroidLookAtType _newLookAtType) {
}

void ACharacterDroid::SetLookAt(FLookAtData _lookAtData) {
}

void ACharacterDroid::SetInputMode(EDroidInputMode _inputMode) {
}

void ACharacterDroid::SetIdlePosition(float _position) {
}

void ACharacterDroid::SetIdleAnimation(UAnimSequence* _animation, bool _skipBlend) {
}

void ACharacterDroid::SetDisturbed_Implementation(bool _disturbed) {
}

void ACharacterDroid::SetDialog(ADialog* _dialog) {
}

void ACharacterDroid::SetCollisionEnabled(bool _enabled) {
}

void ACharacterDroid::SetBehaviorState(EDroidBehaviorState _newBehaviorState) {
}

void ACharacterDroid::PushScreenMaterial(FName _id, UMaterialInstance* _materialInstance, int32 _priority) {
}

void ACharacterDroid::Posture_Stumbling_Tick_Implementation(float _dt) {
}

void ACharacterDroid::Posture_Stumbling_Exit_Implementation() {
}

void ACharacterDroid::Posture_Stumbling_Enter_Implementation() {
}

void ACharacterDroid::Posture_StandingUp_Tick_Implementation(float _dt) {
}

void ACharacterDroid::Posture_StandingUp_Exit_Implementation() {
}

void ACharacterDroid::Posture_StandingUp_Enter_Implementation() {
}

void ACharacterDroid::Posture_RisingUp_Tick_Implementation(float _dt) {
}

void ACharacterDroid::Posture_RisingUp_Exit_Implementation() {
}

void ACharacterDroid::Posture_RisingUp_Enter_Implementation() {
}

void ACharacterDroid::Posture_Ragdoll_Tick_Implementation(float _dt) {
}

void ACharacterDroid::Posture_Ragdoll_Exit_Implementation() {
}

void ACharacterDroid::Posture_Ragdoll_Enter_Implementation() {
}

void ACharacterDroid::Posture_Falling_Tick_Implementation(float _dt) {
}

void ACharacterDroid::Posture_Falling_Exit_Implementation() {
}

void ACharacterDroid::Posture_Falling_Enter_Implementation() {
}

void ACharacterDroid::PopScreenMaterial(FName _id) {
}

void ACharacterDroid::PlayAnimationSynchronized(TArray<UAnimSequence*> _droidAnimations, TArray<FPlayingAnimationSynchronizedActors> _synchronizedData, bool _isLooping, bool _keepLastAnimationAsIdle) {
}

void ACharacterDroid::PlayAnimationBehavior_Implementation(UAnimSequence* _anim, AActor* _lookAtActor, float _time, float _maxRandomTime) {
}

void ACharacterDroid::PlayAnimation(UAnimSequence* _anim, float _duration, float _playPosition, bool _isLooping) {
}

void ACharacterDroid::OnThrowObject_Implementation() {
}


void ACharacterDroid::OnRaise_Implementation(UAnimSequence* _raiseFromFrontAnimation, UAnimSequence* _raiseFromBackAnimation) {
}







void ACharacterDroid::NotifyStumbleAnimationDone() {
}

void ACharacterDroid::NotifyRiseAnimationDone() {
}

void ACharacterDroid::NotifyGoRagdoll() {
}

void ACharacterDroid::NotifyDropActor() {
}

bool ACharacterDroid::MoveDroidTo(USplineComponent* _spline, FVector _destination, EDroidMovementSplineMode _splineMode, bool _preciseMoveTo, float _stopDistance) {
    return false;
}

bool ACharacterDroid::MakeStumble(UAnimSequence* _stumbleAnimation) {
    return false;
}

bool ACharacterDroid::MakeRaise(UAnimSequence* _raiseFromFrontAnimation, UAnimSequence* _raiseFromBackAnimation) {
    return false;
}

bool ACharacterDroid::MakeFall(UAnimSequence* _fallAnimation) {
    return false;
}

bool ACharacterDroid::IsWithinDialog() const {
    return false;
}

bool ACharacterDroid::IsWaitingForInteraction() const {
    return false;
}

bool ACharacterDroid::IsUsingActor() const {
    return false;
}

bool ACharacterDroid::IsThrowingObject() const {
    return false;
}

bool ACharacterDroid::IsStumbling() const {
    return false;
}

bool ACharacterDroid::IsStreamedIn() const {
    return false;
}

bool ACharacterDroid::IsShowDirectionEnabled() const {
    return false;
}

bool ACharacterDroid::IsRisingFromStumble() const {
    return false;
}

bool ACharacterDroid::IsRepellingCat() const {
    return false;
}

bool ACharacterDroid::IsPlayingAnimationBehavior() const {
    return false;
}

bool ACharacterDroid::IsPlayingAnimation() const {
    return false;
}

bool ACharacterDroid::IsLookAtEnabled() const {
    return false;
}

bool ACharacterDroid::IsInRepelMode() const {
    return false;
}

bool ACharacterDroid::IsInPreciseMoveTo() const {
    return false;
}

bool ACharacterDroid::IsInMoveTo() const {
    return false;
}

bool ACharacterDroid::IsDisturbed() const {
    return false;
}

bool ACharacterDroid::IsDazzled() const {
    return false;
}

bool ACharacterDroid::IsAboutToStumble() const {
    return false;
}

bool ACharacterDroid::HasStumbled() const {
    return false;
}


UMaterialInstance* ACharacterDroid::GetTalkScreenMaterial() const {
    return NULL;
}

UTalkableComponent* ACharacterDroid::GetTalkableComponent() const {
    return NULL;
}

AActor* ACharacterDroid::GetTakenActor() const {
    return NULL;
}

ACatPawn* ACharacterDroid::GetSurroundingCat() const {
    return NULL;
}

float ACharacterDroid::GetStopDistance() const {
    return 0.0f;
}

FVector ACharacterDroid::GetShowDirectionTarget() const {
    return FVector{};
}

ARecastNavMesh* ACharacterDroid::GetSelectedNavMeshRecastActor() const {
    return NULL;
}

float ACharacterDroid::GetRepelZoneRadius() const {
    return 0.0f;
}

FVector ACharacterDroid::GetRepelZoneCenter() const {
    return FVector{};
}

float ACharacterDroid::GetRepelPreparationDistance() const {
    return 0.0f;
}

FVector ACharacterDroid::GetRepelDirection() const {
    return FVector{};
}

FTransform ACharacterDroid::GetPreciseMoveToTransform() const {
    return FTransform{};
}

EDroidPosture ACharacterDroid::GetPosture() const {
    return EDroidPosture::Posture_None;
}

FPlayingAnimation ACharacterDroid::GetPlayingAnimation() const {
    return FPlayingAnimation{};
}

EDroidOnMeowedBehavior ACharacterDroid::GetOnMeowedBehavior() const {
    return EDroidOnMeowedBehavior::OnMeowedReaction_None;
}

FVector ACharacterDroid::GetMoveToLocation() const {
    return FVector{};
}

UDroidMovementAnimationSettings* ACharacterDroid::GetMovementAnimationSettings() const {
    return NULL;
}

EDroidLookAtType ACharacterDroid::GetLookAtType() const {
    return EDroidLookAtType::DroidLookAt_HeadOnly;
}

FVector ACharacterDroid::GetLookAtLocation() {
    return FVector{};
}

UAnimSequence* ACharacterDroid::GetIdleAnimation() const {
    return NULL;
}

void ACharacterDroid::GetHeadSocket(USceneComponent*& _outComponent, FName& _outSocketName) const {
}

FVector ACharacterDroid::GetHeadLocation() const {
    return FVector{};
}

FVector ACharacterDroid::GetHeadForward() const {
    return FVector{};
}

EDroidMovementState ACharacterDroid::GetDroidMovementState() const {
    return EDroidMovementState::DroidMovement_Waiting;
}

ADialog* ACharacterDroid::GetDialog() const {
    return NULL;
}

UDroidUsableComponent* ACharacterDroid::GetCurrentUsable() const {
    return NULL;
}

FLookAtData ACharacterDroid::GetCurrentLookAtData() const {
    return FLookAtData{};
}

EDroidBehaviorState ACharacterDroid::GetBehaviorState() const {
    return EDroidBehaviorState::DroidBehavior_None;
}

FVector ACharacterDroid::GetAvoidanceVelocity() const {
    return FVector{};
}

void ACharacterDroid::ForceStartUsing(AActor* _actorToUse) {
}

void ACharacterDroid::DropActorAt(FVector _location, FRotator _rotation) {
}

void ACharacterDroid::DropActor() {
}

void ACharacterDroid::ClearLookAt() {
}

bool ACharacterDroid::CanTalk() const {
    return false;
}

void ACharacterDroid::Behavior_ThrowObject_Tick_Implementation(float _dt) {
}

void ACharacterDroid::Behavior_ThrowObject_Exit_Implementation() {
}

void ACharacterDroid::Behavior_ThrowObject_Enter_Implementation() {
}

void ACharacterDroid::Behavior_PlayingAnimation_Tick_Implementation(float _dt) {
}

void ACharacterDroid::Behavior_PlayingAnimation_Exit_Implementation() {
}

void ACharacterDroid::Behavior_PlayingAnimation_Enter_Implementation() {
}

void ACharacterDroid::Behavior_None_Exit_Implementation() {
}

void ACharacterDroid::Behavior_None_Enter_Implementation() {
}

void ACharacterDroid::Behavior_Disturbed_Tick_Implementation(float _dt) {
}

void ACharacterDroid::Behavior_Disturbed_Exit_Implementation() {
}

void ACharacterDroid::Behavior_Disturbed_Enter_Implementation() {
}

void ACharacterDroid::Behavior_Dazzled_Tick_Implementation(float _dt) {
}

void ACharacterDroid::Behavior_Dazzled_Exit_Implementation() {
}

void ACharacterDroid::Behavior_Dazzled_Enter_Implementation() {
}

void ACharacterDroid::_SetTalkScreenMaterial(UMaterialInstance* _materialInstance) {
}

void ACharacterDroid::_SetPreciseMovementTransform(FTransform _targetTransform) {
}

void ACharacterDroid::_SetMovementTargetSpeed(float _newSpeed) {
}

void ACharacterDroid::_SetMovementTargetAngle(float _newAngle) {
}

void ACharacterDroid::_SetExchangeScreenMaterial(UMaterialInstance* _materialInstance) {
}

void ACharacterDroid::_SetBaseScreenMaterial(UMaterialInstance* _materialInstance) {
}

void ACharacterDroid::_OnUsableUseEnded(UDroidUsableComponent* _usable, ACharacterDroid* _droid) {
}

void ACharacterDroid::_OnStreamedOut(UStreamingComponent* _streamingComponent) {
}

void ACharacterDroid::_OnStreamedIn(UStreamingComponent* _streamingComponent) {
}

void ACharacterDroid::_OnDialogLineEnded(UTalkableComponent* _talkable, const FDialogLine& _line) {
}

void ACharacterDroid::_OnDialogLineDisplayed(UTalkableComponent* _talkable, const FDialogLine& _line) {
}

void ACharacterDroid::_OnDialogLineBegan(UTalkableComponent* _talkable, const FDialogLine& _line) {
}

void ACharacterDroid::_OnDialogEnded(UTalkableComponent* _talkable) {
}

void ACharacterDroid::_OnDialogBegan(UTalkableComponent* _talkable) {
}

void ACharacterDroid::_OnCatDetectorEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex) {
}

void ACharacterDroid::_OnCatDetectorBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

FTransform ACharacterDroid::_GetPreciseMovementTransform() const {
    return FTransform{};
}

float ACharacterDroid::_GetPreciseMovementLateralDistance() const {
    return 0.0f;
}

float ACharacterDroid::_GetPreciseMovementFrontalDistance() const {
    return 0.0f;
}

float ACharacterDroid::_GetMovementTargetSpeed() const {
    return 0.0f;
}

float ACharacterDroid::_GetMovementTargetAngle() const {
    return 0.0f;
}

EDroidInputMode ACharacterDroid::_GetDroidInputMode() const {
    return EDroidInputMode::DroidInputMode_Spline;
}

void ACharacterDroid::_BeforeSaved(USaveComponent* _saveComponent) {
}

void ACharacterDroid::_AfterLoaded(USaveComponent* _saveComponent) {
}

ACharacterDroid::ACharacterDroid() {
    this->m_drawMoveToDebug = false;
    this->m_maxAngleToStartTurning = 90.00f;
    this->m_movementTargetAngle = 0.00f;
    this->m_movementTargetSpeed = 0.00f;
    this->m_movementSteppingLateralDistance = 0.00f;
    this->m_movementSteppingFrontalDistance = 0.00f;
    this->m_currentMoveToStopDistance = -1.00f;
    this->m_currentLateralAvoidanceValue = 0.00f;
    this->m_saveComponent = CreateDefaultSubobject<USaveComponent>(TEXT("SaveComponent"));
    this->m_streamingComponent = CreateDefaultSubobject<UStreamingComponent>(TEXT("StreamingComponent"));
    this->m_catDetectorGridSnapping = CreateDefaultSubobject<UGridSnappingComponent>(TEXT("catDetectorGridSnapping"));
    this->m_catDetector = CreateDefaultSubobject<UCapsuleComponent>(TEXT("catDetector"));
    this->m_repelZone = CreateDefaultSubobject<UCapsuleComponent>(TEXT("repelZone"));
    this->m_repelDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("repelDirection"));
    this->m_talkable = CreateDefaultSubobject<UTalkableComponent>(TEXT("talkable"));
    this->m_pathFindSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("m_pathFindSplineComponent"));
    this->m_doHateCats = false;
    this->m_faceCatDuringRepel = true;
    this->m_baseScreenMaterial = NULL;
    this->m_exchangeScreenMaterial = NULL;
    this->m_talkScreenMaterial = NULL;
    this->m_doHeadFollowCat = false;
    this->m_idleAnimation = NULL;
    this->m_lookAtSpeed = 100.00f;
    this->m_currentStumbleAnimation = NULL;
    this->m_currentFallingAnimation = NULL;
    this->m_currentRaiseFromFrontAnimation = NULL;
    this->m_currentRaiseFromBackAnimation = NULL;
    this->m_droidManager = NULL;
    this->m_aiController = NULL;
    this->m_currentMovementAnimationSettings = NULL;
    this->m_currentUsable = NULL;
    this->m_overrideLookAt = false;
    this->m_currentLookAtType = EDroidLookAtType::DroidLookAt_HeadOnly;
    this->m_startsWithCollisionEnabled = true;
    this->m_takeActorSocketName = TEXT("Root_PropsSocket");
    this->m_headSocketName = TEXT("Neck1");
    this->m_aboutToStumbleTime = 2.50f;
    this->m_stumbleChargeTime = 0.50f;
    this->m_stumbledTime = 5.00f;
    this->m_visionTraceChannel = ECC_WorldStatic;
    this->m_turnTowardsSpeedRatio = 0.00f;
    this->m_minimumAngleForTurnTowardInDegree = 20.00f;
    this->m_repelMinimumTime = 1.50f;
    this->m_repelPreparationDistance = 150.00f;
    this->m_repelPreparationDistanceHysteresis = 40.00f;
    this->m_lookAtCatWhenWaitingObject = true;
    this->m_isMet = false;
    this->m_shouldCollisionBeEnabled = true;
    this->m_sstateMachine = NULL;
    this->m_startingAngleCorrectionMaximum = 2.50f;
    this->m_startingCorrectionStartDistance = 3.00f;
    this->m_useManualSkeletalMeshRefreshSetting = false;
    this->m_alwaysStationary = false;
    this->m_currentOnMeowedBehavior = EDroidOnMeowedBehavior::OnMeowedReaction_None;
    this->m_shouldBeActive = true;
}

