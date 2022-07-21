#include "CameraTargetComponent.h"

class UCameraComponent;
class UPrimitiveComponent;
class AActor;

void UCameraTargetComponent::SetKillZoneEnable(bool _enable) {
}

void UCameraTargetComponent::SetKilled(bool _killed) {
}

void UCameraTargetComponent::SetEnabled(bool _enabled) {
}

bool UCameraTargetComponent::IsKilled() const {
    return false;
}

bool UCameraTargetComponent::IsEnabled() const {
    return false;
}

float UCameraTargetComponent::GetCameraDistanceOffset(UCameraComponent* _camera, float _xScreenLimit, float _yScreenLimit, float _cameraDistanceOffsetMultiplier) const {
    return 0.0f;
}

void UCameraTargetComponent::_OnEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex) {
}

void UCameraTargetComponent::_OnBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

UCameraTargetComponent::UCameraTargetComponent() {
    this->Influence = 1.00f;
    this->EnableCameraBackwardsMovement = true;
    this->ActivateOnView = false;
    this->ViewXMinimum = -0.10f;
    this->ViewYMinimum = -0.10f;
    this->ViewXMaximum = 0.30f;
    this->ViewYMaximum = 0.30f;
    this->UseTarget = false;
    this->EnableDistanceOffset = false;
    this->DistanceMax = -100.00f;
    this->EnableOnDirection = false;
    this->m_enabled = true;
    this->m_influenceCoreRadius = 150.00f;
    this->m_isKillZoneEnabled = true;
    this->m_killZoneRadius = 100.00f;
    this->m_maximumDirectionErrorTolerance = 40.00f;
    this->m_minimumDirectionErrorTolerance = 10.00f;
    this->m_influenceResponse_Curve = NULL;
}

