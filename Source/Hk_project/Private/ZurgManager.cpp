#include "ZurgManager.h"

class ARecastNavMesh;
class AZurgPawnLeader;

void AZurgManager::SetMaxActivatedZurgCount(int32 _newMaxCount) {
}









ARecastNavMesh* AZurgManager::GetZurgsNavMesh() const {
    return NULL;
}

int32 AZurgManager::GetZurgSlaveCount() const {
    return 0;
}

int32 AZurgManager::GetMaxActivatedZurgCount() const {
    return 0;
}

TArray<AZurgPawnLeader*> AZurgManager::GetLeaders() const {
    return TArray<AZurgPawnLeader*>();
}

int32 AZurgManager::GetActivatedZurgSlaveCount() const {
    return 0;
}

AZurgManager::AZurgManager() {
    this->m_leaderDeactivationDistance = 2500.00f;
    this->m_slaveBP = NULL;
    this->m_maxSlaveTicksPerFrame = 24;
    this->m_slaveLODDistanceScale = 200.00f;
    this->m_slavePoolInitialSize = 200;
    this->m_maxActivatedZurgCount = 50;
    this->m_maxSlaveSpawnPerFrame = 5;
    this->m_maxLeaderTicksPerFrame = 3;
    this->m_deactivationDistanceHysteresis = 100.00f;
    this->m_navMesh = NULL;
    this->m_hkGameInstance = NULL;
    this->m_catPawn = NULL;
    this->m_animationSharingManager = NULL;
    this->m_animationSharingSetup = NULL;
}

