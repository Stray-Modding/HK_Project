#include "ZurgPawnSlave.h"
#include "LifeComponent.h"

class UZurgNewSettings;
class AZurgPawnSlave;
class UAntiZurgSpotlightComponent;
class UCanvas;
class AActor;
class AZurgPawnLeader;
class ULightableComponent;
class UPrimitiveComponent;
class ACatPawn;
class USkeletalMeshComponent;
class UZurgAttackPointComponent;
class ARecastNavMesh;

void AZurgPawnSlave::StopMovement() {
}

void AZurgPawnSlave::State_UnStunned_Exit_Implementation() {
}

void AZurgPawnSlave::State_UnStunned_Enter_Implementation() {
}

void AZurgPawnSlave::State_UnderLight_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_UnderLight_Exit_Implementation() {
}

void AZurgPawnSlave::State_UnderLight_Enter_Implementation() {
}

void AZurgPawnSlave::State_Stunned_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Stunned_Exit_Implementation() {
}

void AZurgPawnSlave::State_Stunned_Enter_Implementation() {
}

void AZurgPawnSlave::State_Sleeping_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Sleeping_Exit_Implementation() {
}

void AZurgPawnSlave::State_Sleeping_Enter_Implementation() {
}

void AZurgPawnSlave::State_Routine_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Routine_Exit_Implementation() {
}

void AZurgPawnSlave::State_Routine_Enter_Implementation() {
}

void AZurgPawnSlave::State_OnInterestPoint_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_OnInterestPoint_Exit_Implementation() {
}

void AZurgPawnSlave::State_OnInterestPoint_Enter_Implementation() {
}

void AZurgPawnSlave::State_LockedOnTarget_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_LockedOnTarget_Exit_Implementation() {
}

void AZurgPawnSlave::State_LockedOnTarget_Enter_Implementation() {
}

void AZurgPawnSlave::State_Interested_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Interested_Exit_Implementation() {
}

void AZurgPawnSlave::State_Interested_Enter_Implementation() {
}

void AZurgPawnSlave::State_Idle_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Idle_Exit_Implementation() {
}

void AZurgPawnSlave::State_Idle_Enter_Implementation() {
}

void AZurgPawnSlave::State_Grabbing_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Grabbing_Exit_Implementation() {
}

void AZurgPawnSlave::State_Grabbing_Enter_Implementation() {
}

void AZurgPawnSlave::State_Falling_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Falling_Exit_Implementation() {
}

void AZurgPawnSlave::State_Falling_Enter_Implementation() {
}

void AZurgPawnSlave::State_Ejected_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Ejected_Exit_Implementation() {
}

void AZurgPawnSlave::State_Ejected_Enter_Implementation() {
}

void AZurgPawnSlave::State_Chasing_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Chasing_Exit_Implementation() {
}

void AZurgPawnSlave::State_Chasing_Enter_Implementation() {
}

void AZurgPawnSlave::State_Attacking_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Attacking_Exit_Implementation() {
}

void AZurgPawnSlave::State_Attacking_Enter_Implementation() {
}

void AZurgPawnSlave::State_Angry_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Angry_Exit_Implementation() {
}

void AZurgPawnSlave::State_Angry_Enter_Implementation() {
}

void AZurgPawnSlave::State_Alerted_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::State_Alerted_Exit_Implementation() {
}

void AZurgPawnSlave::State_Alerted_Enter_Implementation() {
}

void AZurgPawnSlave::SetZurgSettings(UZurgNewSettings* _newZurgSettings) {
}

void AZurgPawnSlave::SetStunned(bool _stun) {
}

void AZurgPawnSlave::SetStateDelayed(EZurgState _newState, float _fuzzyDelay) {
}

void AZurgPawnSlave::SetState(EZurgState _newState) {
}

void AZurgPawnSlave::SetLife(int32 _newLife) {
}

bool AZurgPawnSlave::SetLeaderZurgSettings() {
    return false;
}

void AZurgPawnSlave::SetLeader(AZurgPawnLeader* _newLeader) {
}

void AZurgPawnSlave::SetKamikaze(bool _isKamikaze) {
}

void AZurgPawnSlave::SetConnectedToLeader(bool _connected) {
}

void AZurgPawnSlave::SetCanSenseProximity(bool _enableProximitySense) {
}

void AZurgPawnSlave::SetCanGrab(bool _canGrab) {
}

void AZurgPawnSlave::SetCanAttack(bool _canAttack) {
}

void AZurgPawnSlave::SetBehavior(EZurgBehavior _newBehavior) {
}

void AZurgPawnSlave::RequestLeaderConnection() {
}


void AZurgPawnSlave::OnZurgLostLeader_Implementation() {
}

void AZurgPawnSlave::OnZurgFoundLeader_Implementation(AZurgPawnLeader* _leader) {
}

void AZurgPawnSlave::OnStateChanged_Implementation(EZurgState _newState) {
}

void AZurgPawnSlave::OnProximityExitDetection_Implementation(AActor* _detectedActor) {
}

void AZurgPawnSlave::OnProximityEnterDetection_Implementation(AActor* _detectedActor) {
}

void AZurgPawnSlave::OnExitSpotLight_Implementation(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight) {
}

void AZurgPawnSlave::OnEnterInSpotLight_Implementation(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight) {
}

void AZurgPawnSlave::OnEnlightenEnd(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight) {
}

void AZurgPawnSlave::OnEnlightenBegin(ULightableComponent* _lightable, UAntiZurgSpotlightComponent* _spotlight) {
}

void AZurgPawnSlave::OnDisplayDebug_Implementation(UCanvas* _canvas) {
}

void AZurgPawnSlave::OnDetachedFromCat_Implementation(ACatPawn* _catPawn, USkeletalMeshComponent* _catSkeletalMesh, FName _socketName) {
}

void AZurgPawnSlave::OnDetachedFromAttackPoint_Implementation(UZurgAttackPointComponent* _zurgAttackPoint) {
}

void AZurgPawnSlave::OnAttackPoint_Implementation(FVector _pointToAttack) {
}

void AZurgPawnSlave::OnAttack_Implementation(AActor* _actorToAttack) {
}

void AZurgPawnSlave::OnAttachOnAttackPoint_Implementation(UZurgAttackPointComponent* _zurgAttackPoint) {
}



void AZurgPawnSlave::OnAttachedOnCat_Implementation(ACatPawn* _catPawn, USkeletalMeshComponent* _catSkeletalMesh, FName _socketName) {
}

void AZurgPawnSlave::MoveToAtPreciseFrame(int32 _moveAtThisFrame, FVector _newLocation, float _randomRadius, float _acceptanceRadius) {
}

bool AZurgPawnSlave::MoveTo(FVector _newLocation, float _randomRadius, float _acceptanceRadius) {
    return false;
}

void AZurgPawnSlave::Lod_2_Exit_Implementation() {
}

void AZurgPawnSlave::Lod_2_Enter_Implementation() {
}

void AZurgPawnSlave::Lod_1_Exit_Implementation() {
}

void AZurgPawnSlave::Lod_1_Enter_Implementation() {
}

void AZurgPawnSlave::Lod_0_Exit_Implementation() {
}

void AZurgPawnSlave::Lod_0_Enter_Implementation() {
}

bool AZurgPawnSlave::IsWalking() const {
    return false;
}

bool AZurgPawnSlave::IsUnderAntiZurgSpotlight() const {
    return false;
}

bool AZurgPawnSlave::IsStunned() const {
    return false;
}

bool AZurgPawnSlave::IsSlaveValid(const AZurgPawnSlave* _slave) {
    return false;
}

bool AZurgPawnSlave::IsKamikaze() {
    return false;
}

bool AZurgPawnSlave::IsConnectedToLeader() {
    return false;
}

bool AZurgPawnSlave::IsAttacking() const {
    return false;
}

bool AZurgPawnSlave::IsActive() const {
    return false;
}

EZurgState AZurgPawnSlave::GetState() const {
    return EZurgState::ZurgState_Idle;
}

ARecastNavMesh* AZurgPawnSlave::GetNavMesh() const {
    return NULL;
}

ULifeComponent* AZurgPawnSlave::GetLifeComponent() const {
    return NULL;
}

AZurgPawnLeader* AZurgPawnSlave::GetLeader() {
    return NULL;
}

UZurgNewSettings* AZurgPawnSlave::GetCurrentZurgSettings() const {
    return NULL;
}

FVector AZurgPawnSlave::GetCurrentMoveToLocation() const {
    return FVector{};
}

EZurgBehavior AZurgPawnSlave::GetBehavior() const {
    return EZurgBehavior::ZurgBehavior_None;
}

void AZurgPawnSlave::DestroySlave() {
}

void AZurgPawnSlave::Deactivated_Exit_Implementation() {
}

void AZurgPawnSlave::Deactivated_Enter_Implementation() {
}

bool AZurgPawnSlave::CanSenseProximity() const {
    return false;
}

bool AZurgPawnSlave::CanMove() const {
    return false;
}

bool AZurgPawnSlave::CanGrab() const {
    return false;
}

bool AZurgPawnSlave::CanAttack() const {
    return false;
}

void AZurgPawnSlave::Behavior_None_Exit_Implementation() {
}

void AZurgPawnSlave::Behavior_None_Enter_Implementation() {
}

void AZurgPawnSlave::Behavior_Escaping_Tick_Implementation(float _dt) {
}

void AZurgPawnSlave::Behavior_Escaping_Exit_Implementation() {
}

void AZurgPawnSlave::Behavior_Escaping_Enter_Implementation() {
}

bool AZurgPawnSlave::AttackPoint(FVector _pointToAttack) {
    return false;
}

FVector AZurgPawnSlave::Attack(AActor* _actorToAttack) {
    return FVector{};
}

bool AZurgPawnSlave::ApplyDamage(AActor* _damageApplier, float _damageAmount) {
    return false;
}

void AZurgPawnSlave::Activated_Exit_Implementation() {
}

void AZurgPawnSlave::Activated_Enter_Implementation() {
}

void AZurgPawnSlave::_OnTakeDamage_Implementation(ULifeComponent* _lifeComponent, AActor* _damageApplier, float _damageAmount) {
}

void AZurgPawnSlave::_OnProximityColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AZurgPawnSlave::_OnProximityColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AZurgPawnSlave::_OnLifeRegeneration_Implementation(ULifeComponent* _lifeComponent, float _life) {
}

void AZurgPawnSlave::_OnKilled_Implementation(ULifeComponent* _lifeComponent, AActor* _killer) {
}

void AZurgPawnSlave::_OnAttachOnActorColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AZurgPawnSlave::_OnAttachOnActorColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AZurgPawnSlave::AZurgPawnSlave() {
    this->m_lifeComponent = CreateDefaultSubobject<ULifeComponent>(TEXT("m_lifeComponent"));
    this->m_damagableSphereDetector = NULL;
    this->m_damagableLightableComponent = NULL;
    this->m_deathFxActorClass = NULL;
    this->m_minimalLightIntensityToAvoid = 0.20f;
    this->m_maxAccelerationTarget = 0.00f;
    this->m_maxWalkSpeedTarget = 0.00f;
    this->m_currentZurgSettings = NULL;
    this->m_stateMachine = NULL;
    this->m_movementQueryFilterClass = NULL;
    this->m_zurgMovementComponent = NULL;
    this->m_proximitySphereDetector = NULL;
    this->m_attachOnActorSphereCollider = NULL;
}

