#include "HKSessionSaveData.h"

FString UHKSessionSaveData::BlueprintToString_Implementation() const {
    return TEXT("");
}

UHKSessionSaveData::UHKSessionSaveData() {
    this->IsInSentinelPattern = false;
    this->IsInZurgPursuit = false;
}

