#include "SplineRailComponent.h"

class ACatPawn;
class UStreamingComponent;
class UPrimitiveComponent;
class AActor;

void USplineRailComponent::SetQuadrantEnabled(int32 _quadrantId, bool _enabled) {
}

void USplineRailComponent::SetEnabled(bool _enabled) {
}

void USplineRailComponent::RefreshConnections() {
}

bool USplineRailComponent::IsQuadrantEnabled(int32 _quadrantId) const {
    return false;
}

bool USplineRailComponent::IsEnabled() const {
    return false;
}

bool USplineRailComponent::IsBucket() const {
    return false;
}

TArray<ACatPawn*> USplineRailComponent::GetRidingCats() const {
    return TArray<ACatPawn*>();
}

void USplineRailComponent::FixUpSpline() {
}

void USplineRailComponent::_OnStreamedOut(UStreamingComponent* _streamingComponent) {
}

void USplineRailComponent::_OnStreamedIn(UStreamingComponent* _streamingComponent) {
}

void USplineRailComponent::_OnConnectionColliderEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex) {
}

void USplineRailComponent::_OnConnectionColliderBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

USplineRailComponent::USplineRailComponent() {
    this->Width = 15.00f;
    this->Height = 30.00f;
    this->TrajectoryRaycastEndOffset = 0.00f;
    this->m_proceduralMeshComponent = NULL;
    this->m_encapsulatingCollider = NULL;
    this->m_streamingComponent = NULL;
    this->m_beginGroundConnection = NULL;
    this->m_endGroundConnection = NULL;
    this->m_enabled = true;
    this->m_drawMesh = false;
    this->m_isBucket = false;
    this->m_enableBeginConnection = true;
    this->m_enableEndConnection = true;
    this->m_additionalEncapsulatingColliderSize = 5.00f;
    this->m_samplingStep = 20.00f;
    this->m_debug = false;
    this->m_connectionRaycastDistance = 20.00f;
    this->m_connectionRadius = 40.00f;
}

