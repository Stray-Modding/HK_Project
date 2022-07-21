#include "Sentinel.h"
#include "Templates/SubclassOf.h"
#include "StreamingComponent.h"
#include "Components/SplineComponent.h"

class USentinelSettings;
class UCanvas;
class AActor;
class UNavigationQueryFilter;
class ARecastNavMesh;
class ATargetPoint;

void ASentinel::TickRotateToLocationInSpeed(FVector _location, float _speed) {
}

void ASentinel::TickRotateToDirectionInSpeed(FVector _direction, float _speed) {
}

void ASentinel::Tazer_UnLoading_Tick_Implementation(float _dt) {
}

void ASentinel::Tazer_UnLoading_Exit_Implementation() {
}

void ASentinel::Tazer_UnLoading_Enter_Implementation() {
}

void ASentinel::Tazer_Shooting_Exit_Implementation() {
}

void ASentinel::Tazer_Shooting_Enter_Implementation() {
}

void ASentinel::Tazer_Reloading_Tick_Implementation(float _dt) {
}

void ASentinel::Tazer_Reloading_Exit_Implementation() {
}

void ASentinel::Tazer_Reloading_Enter_Implementation() {
}

void ASentinel::Tazer_ReadyToShoot_Exit_Implementation() {
}

void ASentinel::Tazer_ReadyToShoot_Enter_Implementation() {
}

void ASentinel::Tazer_Loading_Tick_Implementation(float _dt) {
}

void ASentinel::Tazer_Loading_Exit_Implementation() {
}

void ASentinel::Tazer_Loading_Enter_Implementation() {
}

void ASentinel::Tazer_Idle_Exit_Implementation() {
}

void ASentinel::Tazer_Idle_Enter_Implementation() {
}

void ASentinel::SetVisonLightEnabled(bool _enable) {
}

void ASentinel::SetTazerMode(ESentinelTazerMode _newTazerMode) {
}

void ASentinel::SetSettings(USentinelSettings* _newSettings) {
}

void ASentinel::SetSentinelActive(bool _isActive) {
}

void ASentinel::SetLockOnTarget(AActor* _targetActor) {
}

void ASentinel::SetInputMode(ESentinelInputMode _inputMode) {
}

void ASentinel::SetAggressive(bool _isAggressive) {
}

void ASentinel::RotateToLocationInTime(FVector _location, float _time) {
}

void ASentinel::RotateToDirectionInTime(FVector _direction, float _time) {
}


void ASentinel::OnDisplayDebug_Implementation(UCanvas* _canvas) {
}

bool ASentinel::MoveToOnNavMesh(FVector _location, float _speed, float _zOffset, bool _rotateToVelocity, TSubclassOf<UNavigationQueryFilter> _queryFilter) {
    return false;
}

bool ASentinel::MoveTo(FVector _location, float _speed, float _zOffset, bool _rotateToVelocity, TSubclassOf<UNavigationQueryFilter> _queryFilter) {
    return false;
}

bool ASentinel::IsSentinelActive() const {
    return false;
}

bool ASentinel::IsAggressive() const {
    return false;
}

bool ASentinel::IsActorInVision(AActor* _actorToCheck, FVector _direction, float _angleInDegree, float _distance, TEnumAsByte<ECollisionChannel> _traceChannel, bool _drawDebug) const {
    return false;
}

bool ASentinel::GetVisionLightEnabled() const {
    return false;
}

ESentinelTazerMode ASentinel::GetTazerMode() const {
    return ESentinelTazerMode::SentinelTazerMode_Idle;
}

USentinelSettings* ASentinel::GetSettings() const {
    return NULL;
}

ARecastNavMesh* ASentinel::GetSelectedNavMeshRecastActor() const {
    return NULL;
}

ATargetPoint* ASentinel::GetNextWaypointFromLocation(FVector _location) {
    return NULL;
}

AActor* ASentinel::GetLockedTargetActor() const {
    return NULL;
}

ESentinelInputMode ASentinel::GetInputMode() const {
    return ESentinelInputMode::SentinelInputMode_NavMesh;
}

ATargetPoint* ASentinel::GetClosestWaypointToLocation(FVector _location) {
    return NULL;
}

FVector ASentinel::GetClosestLocationOnPatrolPath() {
    return FVector{};
}

void ASentinel::AddForce(FVector _direction, float _speed) {
}

void ASentinel::_OnVisionLightEnabled_Implementation() {
}

void ASentinel::_OnVisionLightDisabled_Implementation() {
}

void ASentinel::_OnStreamedOut(UStreamingComponent* _streamingComponent) {
}

void ASentinel::_OnStreamedIn(UStreamingComponent* _streamingComponent) {
}

void ASentinel::_EditorTick(float _deltaTime) {
}

ASentinel::ASentinel() {
    this->m_navigationQueryFilter = NULL;
    this->m_splinePathFindComponent = CreateDefaultSubobject<USplineComponent>(TEXT("m_splinePathFindComponent"));
    this->m_sentinelSettings = NULL;
    this->m_drawDebug = false;
    this->m_streamingComponent = CreateDefaultSubobject<UStreamingComponent>(TEXT("m_streamingComponent"));
    this->m_sentinelStateMachine = NULL;
    this->m_startSentinelActive = true;
    this->m_lockedTargetActor = NULL;
}

