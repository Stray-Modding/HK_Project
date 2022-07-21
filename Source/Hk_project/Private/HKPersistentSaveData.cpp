#include "HKPersistentSaveData.h"

void UHKPersistentSaveData::UnlockMemory(FName _memoryId) {
}

void UHKPersistentSaveData::SetUnlockedMemories(const TSet<FName>& _memories) {
}

void UHKPersistentSaveData::LockMemory(FName _memoryId) {
}

bool UHKPersistentSaveData::IsMemoryUnlocked(FName _memoryId) const {
    return false;
}

void UHKPersistentSaveData::Init() {
}

TSet<FName> UHKPersistentSaveData::GetUnlockedMemories() const {
    return TSet<FName>();
}

FString UHKPersistentSaveData::BlueprintToString_Implementation() const {
    return TEXT("");
}

UHKPersistentSaveData::UHKPersistentSaveData() {
}

