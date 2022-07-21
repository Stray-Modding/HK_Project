#include "StreamingGroupManager.h"
#include "SaveComponent.h"

bool AStreamingGroupManager::IsStreamingInProgress() const {
    return false;
}

bool AStreamingGroupManager::IsPersistentGroupLoaded() const {
    return false;
}

bool AStreamingGroupManager::IsGroupLoaded(const FName _name) const {
    return false;
}

bool AStreamingGroupManager::IsGroupActive(const FName _name) const {
    return false;
}

TEnumAsByte<EStreamingState> AStreamingGroupManager::GetPersistentGroupState() {
    return StreamingState_Removed;
}

TEnumAsByte<EStreamingState> AStreamingGroupManager::GetGroupState(const FName _name) {
    return StreamingState_Removed;
}

void AStreamingGroupManager::DeactivateGroup(const FName _name) {
}

void AStreamingGroupManager::ActivateGroup(const FName _name) {
}

void AStreamingGroupManager::_OnPreLoadZone(const FString& _previousMapName, const FString& _nextMapName) {
}

void AStreamingGroupManager::_OnPostLoadZone() {
}

void AStreamingGroupManager::_BeforeSaved(USaveComponent* _saveComponent) {
}

void AStreamingGroupManager::_AfterLoaded(USaveComponent* _saveComponent) {
}

AStreamingGroupManager::AStreamingGroupManager() {
    this->m_persistentGroup = NULL;
    this->m_saveComponent = CreateDefaultSubobject<USaveComponent>(TEXT("SaveComponent"));
}

