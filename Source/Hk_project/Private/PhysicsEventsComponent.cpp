#include "PhysicsEventsComponent.h"

class UMeshComponent;
class UPrimitiveComponent;
class AActor;

void UPhysicsEventsComponent::UpdateDebug_Implementation() {
}

void UPhysicsEventsComponent::Update_Implementation() {
}

void UPhysicsEventsComponent::SetAttachMeshComponent(UMeshComponent* _mesh) {
}

void UPhysicsEventsComponent::OnSurfaceMovingEnd_Implementation() {
}

void UPhysicsEventsComponent::OnSurfaceMovingBegin_Implementation() {
}

void UPhysicsEventsComponent::OnMeshWake(UPrimitiveComponent* _wakingComponent, FName _boneName) {
}

void UPhysicsEventsComponent::OnMeshSleep(UPrimitiveComponent* _wakingComponent, FName _boneName) {
}

void UPhysicsEventsComponent::OnImpact_Implementation(FVector _location, float _amplitude, TEnumAsByte<EPhysicalSurface> _surfaceType) {
}

bool UPhysicsEventsComponent::IsSurfaceMoving() const {
    return false;
}

void UPhysicsEventsComponent::Initialize_Implementation() {
}

TEnumAsByte<EPhysicalSurface> UPhysicsEventsComponent::GetCurrentHitMaterial() const {
    return SurfaceType_Default;
}

FVector UPhysicsEventsComponent::GetCurrentHitLocation() const {
    return FVector{};
}

float UPhysicsEventsComponent::GetCurrentHitAmplitude() const {
    return 0.0f;
}

UMeshComponent* UPhysicsEventsComponent::GetAttachMeshComponent() const {
    return NULL;
}

float UPhysicsEventsComponent::ComputeSurfaceMovingIntensityForMesh(UMeshComponent* _mesh) const {
    return 0.0f;
}

float UPhysicsEventsComponent::ComputeSurfaceMovingIntensity() const {
    return 0.0f;
}

float UPhysicsEventsComponent::ComputeSlidingIntensityForMesh(UMeshComponent* _mesh) const {
    return 0.0f;
}

float UPhysicsEventsComponent::ComputeSlidingIntensity() const {
    return 0.0f;
}

float UPhysicsEventsComponent::ComputeRollingIntensityForMesh(UMeshComponent* _mesh) const {
    return 0.0f;
}

float UPhysicsEventsComponent::ComputeRollingIntensity() const {
    return 0.0f;
}

void UPhysicsEventsComponent::_OnMeshHit(UPrimitiveComponent* _hitComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, FVector _normalImpulse, const FHitResult& _hit) {
}

UPhysicsEventsComponent::UPhysicsEventsComponent() {
    this->CanImpact = true;
    this->ImpactThreshold = 100.00f;
    this->ImpactMinVelocity = 10.00f;
    this->ImpactMaxVelocity = 5000.00f;
    this->CanSlide = true;
    this->SlidingMinVelocity = 50.00f;
    this->SlidingMaxVelocity = 600.00f;
    this->CanRoll = true;
    this->RollingMinVelocity = 0.00f;
    this->RollingMaxVelocity = 750.00f;
    this->SurfaceMovingMinVelocity = 50.00f;
    this->SurfaceMovingMaxVelocity = 600.00f;
    this->Debug = false;
    this->m_meshToObserve = NULL;
}

