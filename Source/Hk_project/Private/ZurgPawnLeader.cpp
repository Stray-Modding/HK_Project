#include "ZurgPawnLeader.h"
#include "Templates/SubclassOf.h"
#include "StreamingComponent.h"
#include "NoisableComponent.h"
#include "SaveComponent.h"

class AZurgPawnSlave;
class AActor;
class UPrimitiveComponent;
class UAntiZurgSpotlightComponent;
class UCanvas;
class UBoxComponent;
class AZurgManager;
class ARecastNavMesh;
class UNavigationQueryFilter;

void AZurgPawnLeader::StopSwarm() const {
}

void AZurgPawnLeader::State_Sleeping_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::State_Sleeping_Exit_Implementation() {
}

void AZurgPawnLeader::State_Sleeping_Enter_Implementation() {
}

void AZurgPawnLeader::State_Routine_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::State_Routine_Exit_Implementation() {
}

void AZurgPawnLeader::State_Routine_Enter_Implementation() {
}

void AZurgPawnLeader::State_LockedOnTarget_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::State_LockedOnTarget_Exit_Implementation() {
}

void AZurgPawnLeader::State_LockedOnTarget_Enter_Implementation() {
}

void AZurgPawnLeader::State_Idle_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::State_Idle_Exit_Implementation() {
}

void AZurgPawnLeader::State_Idle_Enter_Implementation() {
}

void AZurgPawnLeader::State_Chasing_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::State_Chasing_Exit_Implementation() {
}

void AZurgPawnLeader::State_Chasing_Enter_Implementation() {
}

void AZurgPawnLeader::State_Angry_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::State_Angry_Exit_Implementation() {
}

void AZurgPawnLeader::State_Angry_Enter_Implementation() {
}

void AZurgPawnLeader::State_Alerted_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::State_Alerted_Exit_Implementation() {
}

void AZurgPawnLeader::State_Alerted_Enter_Implementation() {
}

void AZurgPawnLeader::SpawnSlaves(float _duration, int32 _count) {
}

AZurgPawnSlave* AZurgPawnLeader::SpawnSlave(float _nearRadius, TSubclassOf<AZurgPawnSlave> _zurgClass, FVector _spawnLocation) {
    return NULL;
}

void AZurgPawnLeader::SetZurgLOD(EZurgLOD _newZurgLod) {
}

void AZurgPawnLeader::SetSwarmCanSee(bool _canSee) {
}

void AZurgPawnLeader::SetSwarmCanHearSound(bool _canHearSound) {
}

void AZurgPawnLeader::SetState(EZurgState _newState) {
}

void AZurgPawnLeader::SetActive(bool _active) {
}

void AZurgPawnLeader::RemoveSlave(AZurgPawnSlave* _slave) {
}

int32 AZurgPawnLeader::PushSpawningRequest(int32 _spawnCount, float _duration) {
    return 0;
}

bool AZurgPawnLeader::PopSpawningRequest(int32 _id) {
    return false;
}

void AZurgPawnLeader::OnVisionColliderEnterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AZurgPawnLeader::OnVisionColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}



void AZurgPawnLeader::OnStreamedOut(UStreamingComponent* _streamingComponent) {
}

void AZurgPawnLeader::OnStreamedIn(UStreamingComponent* _streamingComponent) {
}

void AZurgPawnLeader::OnStateChanged_Implementation(EZurgState _newState) {
}

void AZurgPawnLeader::OnSlaveKilled_Implementation(AZurgPawnSlave* _slave, AActor* _killer) {
}

void AZurgPawnLeader::OnSlaveExitLight_Implementation(UAntiZurgSpotlightComponent* _light, AZurgPawnSlave* _zurgPawn) {
}

void AZurgPawnLeader::OnSlaveEnterLight_Implementation(UAntiZurgSpotlightComponent* _light, AZurgPawnSlave* _zurgPawn) {
}

void AZurgPawnLeader::OnSlaveDestroyed(AActor* _slaveDestroyed) {
}

void AZurgPawnLeader::OnHearedNoise_Implementation(UNoisableComponent* _noiseComponent, FVector _location, AActor* _emitter) {
}

void AZurgPawnLeader::OnDisplayDebug_Implementation(UCanvas* _canvas) {
}

void AZurgPawnLeader::OnDamagableDetectorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AZurgPawnLeader::OnDamagableDetectorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AZurgPawnLeader::MoveSwarmToBox(UBoxComponent* _boxComponent) {
    return false;
}

bool AZurgPawnLeader::MoveSwarmTo(FVector _newLocation, float _randomRadius) {
    return false;
}

void AZurgPawnLeader::Lod_2_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::Lod_2_Exit_Implementation() {
}

void AZurgPawnLeader::Lod_2_Enter_Implementation() {
}

void AZurgPawnLeader::Lod_1_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::Lod_1_Exit_Implementation() {
}

void AZurgPawnLeader::Lod_1_Enter_Implementation() {
}

void AZurgPawnLeader::Lod_0_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::Lod_0_Exit_Implementation() {
}

void AZurgPawnLeader::Lod_0_Enter_Implementation() {
}

bool AZurgPawnLeader::IsDisplayingDebug() const {
    return false;
}

bool AZurgPawnLeader::IsActive() const {
    return false;
}

AZurgManager* AZurgPawnLeader::GetZurgManager() const {
    return NULL;
}

TArray<AActor*> AZurgPawnLeader::GetVisibleActors() {
    return TArray<AActor*>();
}

float AZurgPawnLeader::GetSwarmVisionDistance() const {
    return 0.0f;
}

float AZurgPawnLeader::GetSwarmRadius() const {
    return 0.0f;
}

FVector AZurgPawnLeader::GetSwarmCenter() const {
    return FVector{};
}

EZurgState AZurgPawnLeader::GetState() const {
    return EZurgState::ZurgState_Idle;
}

int32 AZurgPawnLeader::GetSpawnedSlaveCount() const {
    return 0;
}

TArray<AZurgPawnSlave*> AZurgPawnLeader::GetSlavesAbleToAttack() const {
    return TArray<AZurgPawnSlave*>();
}

TArray<AZurgPawnSlave*> AZurgPawnLeader::GetSlaves() const {
    return TArray<AZurgPawnSlave*>();
}

int32 AZurgPawnLeader::GetSlaveCount() {
    return 0;
}

FVector AZurgPawnLeader::GetReachableMoveToLocation() const {
    return FVector{};
}


ARecastNavMesh* AZurgPawnLeader::GetNavMesh() const {
    return NULL;
}

TSubclassOf<UNavigationQueryFilter> AZurgPawnLeader::GetNavigationQueryFilter() const {
    return NULL;
}

FTransform AZurgPawnLeader::GetInitialTransform() const {
    return FTransform{};
}

EZurgLOD AZurgPawnLeader::GetCurrentZurgLOD() const {
    return EZurgLOD::Zurg_LOD0;
}

int32 AZurgPawnLeader::GetConnectedSlaveCount() const {
    return 0;
}

AZurgPawnSlave* AZurgPawnLeader::GetClosestSlaveFromLocation(const TArray<AZurgPawnSlave*> _slaves, FVector _location, float _radius) const {
    return NULL;
}

void AZurgPawnLeader::FindZurgsCloseFromThisLocation(TArray<AZurgPawnSlave*>& _closestSlave, FVector _location, float _distance) {
}

int32 AZurgPawnLeader::FindZurgCountCloseFromThisLocation(FVector _location, float _distance) {
    return 0;
}

void AZurgPawnLeader::FindSlavesInSpecificState(TArray<AZurgPawnSlave*>& _slaves, EZurgState _state) const {
}

void AZurgPawnLeader::Deactivated_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::Deactivated_Exit_Implementation() {
}

void AZurgPawnLeader::Deactivated_Enter_Implementation() {
}

bool AZurgPawnLeader::CanSwarmSee() const {
    return false;
}

bool AZurgPawnLeader::CanSwarmHearSound() const {
    return false;
}

void AZurgPawnLeader::CancelSpawningRequests() {
}



void AZurgPawnLeader::AddSlave(AZurgPawnSlave* _newSlave) {
}

void AZurgPawnLeader::Activated_Tick_Implementation(float _dt) {
}

void AZurgPawnLeader::Activated_Exit_Implementation() {
}

void AZurgPawnLeader::Activated_Enter_Implementation() {
}

void AZurgPawnLeader::_EditorTick(float _deltaTime) {
}

void AZurgPawnLeader::_BeforeSaved(USaveComponent* _saveComponent) {
}

void AZurgPawnLeader::_AfterLoaded(USaveComponent* _saveComponent) {
}

AZurgPawnLeader::AZurgPawnLeader() {
    this->SwarmSettings = NULL;
    this->m_slaveClass = NULL;
    this->m_initialSwarmState = EZurgState::ZurgState_Idle;
    this->m_zurgSpawnCount = 10;
    this->m_spawningBox = NULL;
    this->m_spawningRadius = 50.00f;
    this->m_movementQueryFilterClass = NULL;
    this->m_visionTraceChannel = ECC_Visibility;
    this->m_noisableComponent = CreateDefaultSubobject<UNoisableComponent>(TEXT("m_noisableComponent"));
    this->m_damagableDetector = NULL;
    this->m_lightableComponent = NULL;
    this->m_isAlreadySpawned = false;
    this->m_slaveLeftBeforeSave = 0;
    this->m_streamingComponent = CreateDefaultSubobject<UStreamingComponent>(TEXT("m_streamingComponent"));
    this->m_cachedPlayerCatPawn = NULL;
    this->m_canBeManaged = true;
    this->m_stateMachine = NULL;
    this->m_currentState = EZurgState::ZurgState_None;
    this->m_beforeIdleState = EZurgState::ZurgState_None;
    this->m_currentLOD = EZurgLOD::Zurg_LOD0;
    this->m_saveComponent = CreateDefaultSubobject<USaveComponent>(TEXT("m_saveComponent"));
    this->m_drawDebug = false;
}

