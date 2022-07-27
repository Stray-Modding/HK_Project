#include "CameraThirdPerson.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

class UCameraTargetComponent;
class ACatPawn;

FVector ACameraThirdPerson::UpdateWantedTargetLocation_Implementation(float _yaw, float _pitchRatio, float _dt) {
    return FVector{};
}

FVector ACameraThirdPerson::UpdateWantedRaycastTarget_Implementation(float _yaw, float _pitchRatio, float _dt) {
    return FVector{};
}

FVector ACameraThirdPerson::UpdateWantedCameraLocation_Implementation(float _yaw, float _pitchRatio, float _dt) {
    return FVector{};
}

FVector ACameraThirdPerson::UpdateIdealAttachLocation_Implementation(float _dt) {
    return FVector{};
}

FVector ACameraThirdPerson::UpdateFinalRaycastTarget_Implementation(float _yaw, float _pitchRatio, float _dt) {
    return FVector{};
}

FVector ACameraThirdPerson::UpdateFinalExtrapolatedVelocity_Implementation(float _dt, FVector _raycastStart, FVector _raycastEnd, FVector _previousRaycastEnd) {
    return FVector{};
}

FVector ACameraThirdPerson::UpdateFinalAttachLocation_Implementation(float _dt, const FVector& _target) {
    return FVector{};
}

void ACameraThirdPerson::SyncWithTargetLocation() {
}

void ACameraThirdPerson::SetRoll(float _roll) {
}

void ACameraThirdPerson::SetResetCameraOnInput(bool _resetOnInput) {
}

void ACameraThirdPerson::SetInputEnabled(bool _enabled) {
}

void ACameraThirdPerson::SetFOV(float _fov) {
}

void ACameraThirdPerson::ResetToRotation(const FRotator& _rotation, float _time, float _inputDisableTime, bool _inputCancel) {
}

void ACameraThirdPerson::ResetToRelativeRotation(float _yaw, float _pitch, float _roll, float _time, float _inputDisableTime, bool _inputCancel) {
}

void ACameraThirdPerson::ResetToDefaultPosition(float _time, bool _hardSyncWithTarget) {
}

void ACameraThirdPerson::ResetBackCam() {
}

void ACameraThirdPerson::RequestResetToClosestFreeRotation() {
}

void ACameraThirdPerson::RemoveTarget(UCameraTargetComponent* _target) {
}

void ACameraThirdPerson::RemoveModifier(const FName& _id) {
}

void ACameraThirdPerson::PushDisableResetCam() {
}

void ACameraThirdPerson::PushDisableBackCam() {
}

void ACameraThirdPerson::PopDisableResetCam() {
}

void ACameraThirdPerson::PopDisableBackCam() {
}




bool ACameraThirdPerson::IsResetingRotation() const {
    return false;
}

bool ACameraThirdPerson::IsResetCamDisabled() const {
    return false;
}

bool ACameraThirdPerson::IsInputEnabled() const {
    return false;
}

bool ACameraThirdPerson::IsBackCamDisabled() const {
    return false;
}

bool ACameraThirdPerson::IsBackCamActivated() const {
    return false;
}

void ACameraThirdPerson::InputProcess_Implementation(FVector2D _input, float _deltaTime, float& _yawIncrement, float& _pitchIncrement) {
}

FVector2D ACameraThirdPerson::InputFilter_Implementation(FVector2D _rawInput, float _dt) {
    return FVector2D{};
}

float ACameraThirdPerson::GetYaw() const {
    return 0.0f;
}

FVector ACameraThirdPerson::GetWantedTargetLocation() const {
    return FVector{};
}

FVector ACameraThirdPerson::GetWantedRaycastTarget() const {
    return FVector{};
}

FVector ACameraThirdPerson::GetWantedCameraLocation() const {
    return FVector{};
}

float ACameraThirdPerson::GetRoll() const {
    return 0.0f;
}

bool ACameraThirdPerson::GetResetCameraOnInput() const {
    return false;
}

float ACameraThirdPerson::GetPitchRatio() const {
    return 0.0f;
}

float ACameraThirdPerson::GetPitch() const {
    return 0.0f;
}

FVector ACameraThirdPerson::GetIdealAttachLocation() const {
    return FVector{};
}

float ACameraThirdPerson::GetFOVPitchModifier() const {
    return 0.0f;
}

float ACameraThirdPerson::GetFOVBase() const {
    return 0.0f;
}

float ACameraThirdPerson::GetFOV() const {
    return 0.0f;
}

FVector ACameraThirdPerson::GetFinalRaycastTarget() const {
    return FVector{};
}

FVector ACameraThirdPerson::GetFinalAttachLocation() const {
    return FVector{};
}

ACatPawn* ACameraThirdPerson::GetCat() const {
    return NULL;
}

UCameraComponent* ACameraThirdPerson::GetCamera() const {
    return NULL;
}

float ACameraThirdPerson::GetAttachLocationSmoothRatio() const {
    return 0.0f;
}

FVector ACameraThirdPerson::GetAbsoluteOffset() const {
    return FVector{};
}

void ACameraThirdPerson::AlignToPosition(FVector _position, float _time, float _inputDisableTime, bool _inputCancel) {
}

void ACameraThirdPerson::AddTarget(UCameraTargetComponent* _target) {
}

void ACameraThirdPerson::AddModifier(const FName& _id, const FCameraThirdPersonPreset& _preset, int32 _priority) {
}

void ACameraThirdPerson::_OnControllerTypeChanged() {
}

ACameraThirdPerson::ACameraThirdPerson() {
    this->m_speedOffsetEnabled = true;
    this->m_speedOffsetInfluence = 60.00f;
    this->m_armRoot = CreateDefaultSubobject<USceneComponent>(TEXT("armRoot"));
    this->m_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->m_probeRadius = 2.00f;
    this->m_cameraTraceChannel = ECC_WorldStatic;
    this->m_inputThreshold = 0.10f;
    this->m_additionalRaycastDeadDistance = 20.00f;
    this->m_forwardDistanceDamping90Time = 0.00f;
    this->m_backwardDistanceDamping90Time = 0.50f;
    this->m_useLinearVelocityOnSpline = true;
    this->m_collisionsAvoidanceEnabled = true;
    this->m_collisionAvoidanceRadius = 10.00f;
    this->m_collisionAvoidanceMinSpeed = 5.00f;
    this->m_collisionsAvoidanceExtrapolationEnabled = true;
    this->m_collisionAvoidanceHorizontalExtrapolationTime = 0.20f;
    this->m_collisionAvoidanceVerticalExtrapolationTime = 0.20f;
    this->m_resetCameraTime = 0.30f;
    this->m_resetPitch = 15.00f;
    this->m_attachLocationSmoothSampleCount = 33;
    this->m_attachLocationJumpCorrectionRatio = 0.40f;
    this->m_backCamDelay = 0.20f;
    this->m_gamepadInputResponseCurve = NULL;
    this->m_mouseInputResponseCurve = NULL;
    this->m_gamepadInputTimeTo90Curve = NULL;
    this->m_mouseInputTimeTo90Curve = NULL;
    this->m_mouseInputPitchRatioInputFactor = NULL;
    this->m_gamePadPitchRatioInputFactor = NULL;
    this->m_emptyGamepadInputTimeTo90 = 0.00f;
    this->m_emptyMouseInputTimeTo90 = 0.00f;
    this->m_invertVelocityWithStick = false;
    this->m_yawRealignEnabled = false;
    this->m_yawRealignCurve_InputDirectionDot_YawSpeed = NULL;
    this->m_speedOffsetLengthSmootherForwardTime = 1.50f;
    this->m_speedOffsetLengthSmootherBackwardTime = 6.00f;
    this->m_speedOffsetDirectionSmootherTime = 2.50f;
    this->m_speedOffsetDoubleSmootherTime = 0.50f;
    this->m_forwardSpeedOffsetPitchResponse = NULL;
    this->m_forwardSpeedOffsetCameraDotResponse = NULL;
    this->m_dynamicSplineHeightEnabled = false;
    this->m_dynamicSplineHeightMinimum = 300.00f;
    this->m_dynamicSplineHeightRecoverBlendTime = 1.00f;
    this->m_cameraTargetSmoothTime = 1.00f;
    this->m_cameraTargetBlendOutTime = 1.00f;
    this->m_cameraTargetDistanceOutMax = 500.00f;
    this->m_cameraTargetOtherOffsetsResetTime = 0.30f;
    this->m_cameraTargetClass = NULL;
    this->m_cameraTargetDistanceXBorder = 0.20f;
    this->m_cameraTargetDistanceYBorder = 0.20f;
    this->m_cameraTargetDistanceOutSpeed = 1.00f;
    this->m_cameraTargetDistanceInSpeed = 1.00f;
    this->m_cameraTargetInterpolationSpeed = 5.00f;
    this->m_resetCameraOnInput = true;
    this->m_dialogResetDistance = 210.00f;
    this->m_dialogResetTime = 0.75f;
    this->m_dialogResetMinPitch = 15.00f;
    this->m_dialogResetMaxPitch = 30.00f;
    this->m_dialogResetPitchUnderMin = false;
    this->m_dialogResetPitchAboveMax = true;
    this->m_dialogResetProbeDistanceToObstacle = 3;
    this->m_editionMode = false;
    this->m_smoothSplines = true;
    this->m_cameraSpline = CreateDefaultSubobject<USplineComponent>(TEXT("cameraSpline"));
    this->m_targetSpline = CreateDefaultSubobject<USplineComponent>(TEXT("targetSpline"));
    this->m_raycastTargetSmoothTimeTo90 = 0.30f;
    this->m_antiWobbleActivated = true;
    this->m_antiWobbleTimeToRelease = 2.00f;
    this->m_antiWobbleSensivityToRelease = 0.10f;
    this->m_antiWobbleDistanceToRelease = 0.10f;
    this->m_antiWobbleCatForwardAngleToRelease = 90.00f;
    this->m_antiWobbleCatBackwardAngleToRelease = 0.00f;
    this->m_antiWobbleCatSpeedToRelease = 1000.00f;
    this->m_proximityProbeAttachPoint = NULL;
    this->m_proximityProbeCamera = NULL;
}

