#include "AntiZurgSpotlightComponent.h"

class UCurveFloat;
class UPrimitiveComponent;
class AActor;
class USphereComponent;

void UAntiZurgSpotlightComponent::SetRadialDamageCurve(UCurveFloat* _newRadialDamageCurve) {
}

void UAntiZurgSpotlightComponent::SetDistanceDamageCurve(UCurveFloat* _newDistanceDamageCurve) {
}

void UAntiZurgSpotlightComponent::SetDamageToApplyPerTime(float _damageToApplyPerTime) {
}

void UAntiZurgSpotlightComponent::SetDamageApplicationTime(float _damageToApplyPerTime) {
}

void UAntiZurgSpotlightComponent::SetCanRepulseZurgs(bool _canRepulseZurg) {
}

void UAntiZurgSpotlightComponent::SetApplyDamage(bool _applyDamage) {
}

bool UAntiZurgSpotlightComponent::IsPointVisibleByLight(FVector _location, FBox _ownerBox, AActor* _actorToIgnore) const {
    return false;
}

TArray<FHitResult> UAntiZurgSpotlightComponent::GetSpotLightHitResults() const {
    return TArray<FHitResult>();
}

USphereComponent* UAntiZurgSpotlightComponent::GetSphereObstacleComponent() const {
    return NULL;
}

UCurveFloat* UAntiZurgSpotlightComponent::GetRadialDamageCurve() const {
    return NULL;
}

UCurveFloat* UAntiZurgSpotlightComponent::GetDistanceDamageCurve() const {
    return NULL;
}

float UAntiZurgSpotlightComponent::GetDamageToApplyPerTime() const {
    return 0.0f;
}

float UAntiZurgSpotlightComponent::GetDamageApplicationTime() const {
    return 0.0f;
}

void UAntiZurgSpotlightComponent::FindBestVisiblePointBySpotlight(FVector& _result, const FBox _box) {
}

float UAntiZurgSpotlightComponent::ComputePointLightingRatio(FVector _pointLocation) const {
    return 0.0f;
}

bool UAntiZurgSpotlightComponent::CanRepulseZurgs() const {
    return false;
}

bool UAntiZurgSpotlightComponent::CanApplyDamage() const {
    return false;
}

void UAntiZurgSpotlightComponent::_OnObstacleSphereOverlapEnd(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex) {
}

void UAntiZurgSpotlightComponent::_OnObstacleSphereOverlapBegin(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void UAntiZurgSpotlightComponent::_OnLightableOwnerEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

UAntiZurgSpotlightComponent::UAntiZurgSpotlightComponent() {
    this->m_canRepulseZurgs = true;
    this->m_useDynamicObstacle = false;
    this->m_applyDamage = true;
    this->m_damageToApplyPerDelay = 10.00f;
    this->m_damageApplicationDelayInSecond = 1.00f;
    this->m_drawDebug = false;
    this->m_obstacleNavigationArea = NULL;
    this->m_traceEveryFrame = true;
    this->m_lightTraceChannel = ECC_Visibility;
    this->m_visionTraceChannel = ECC_Visibility;
    this->m_obstacleSphereOverlappChannel = ECC_Visibility;
    this->m_obstacleSphereComponent = NULL;
    this->m_radialDamageCurve = NULL;
    this->m_distanceDamageCurve = NULL;
}

