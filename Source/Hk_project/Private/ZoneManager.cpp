#include "ZoneManager.h"

class UWorld;

bool AZoneManager::PrepareLoadZone(TSoftObjectPtr<UWorld> _zone, TArray<FName> _transitionGroups, const TArray<TSoftObjectPtr<UWorld>>& _preloadedLevels, TEnumAsByte<EZoneLoadingType> _loadingType) {
    return false;
}

bool AZoneManager::OpenZoneByPath(FName _zonePath, bool _saveBeforeOpenZone) {
    return false;
}

bool AZoneManager::OpenZone(TSoftObjectPtr<UWorld> _zone, bool _saveBeforeOpenZone) {
    return false;
}

bool AZoneManager::LoadZone(TSoftObjectPtr<UWorld> _zone, TArray<FName> _transitionGroups, const TArray<TSoftObjectPtr<UWorld>>& _preloadedLevels, TEnumAsByte<EZoneLoadingType> _loadingType) {
    return false;
}

bool AZoneManager::IsZoneLoading() const {
    return false;
}

bool AZoneManager::IsLoadZoneReadyForCommit() const {
    return false;
}

bool AZoneManager::IsCurrentZone(TSoftObjectPtr<UWorld> _zone) const {
    return false;
}

FName AZoneManager::GetLoadingZoneName() const {
    return NAME_None;
}

FName AZoneManager::GetCurrentZoneName() const {
    return NAME_None;
}

bool AZoneManager::CommitLoadZone() {
    return false;
}

void AZoneManager::CancelZoneLoading() {
}

void AZoneManager::_OnPostLoadZone() {
}

AZoneManager::AZoneManager() {
}

