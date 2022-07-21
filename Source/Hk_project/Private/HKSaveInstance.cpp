#include "HKSaveInstance.h"

class UHKSessionSaveData;
class UHKPersistentSaveData;

void UHKSaveInstance::SavePersistentDataToDisk() {
}

bool UHKSaveInstance::IsSaving() const {
    return false;
}

bool UHKSaveInstance::IsSaveEnabled_Implementation() const {
    return false;
}

UHKSessionSaveData* UHKSaveInstance::GetSessionSaveData() const {
    return NULL;
}

UHKPersistentSaveData* UHKSaveInstance::GetPersistentSaveData() const {
    return NULL;
}

void UHKSaveInstance::BP_SaveDataToDisk(bool _overridePlayerTransform, const FTransform& _playerTransform) {
}

UHKSaveInstance::UHKSaveInstance() {
    this->m_persistentDataClass = NULL;
    this->m_sessionDataClass = NULL;
    this->m_saveData = NULL;
    this->m_persistentSaveData = NULL;
    this->m_globalSaveData = NULL;
    this->m_sessionSaveData = NULL;
    this->m_fixedSlotsCount = 3;
}

