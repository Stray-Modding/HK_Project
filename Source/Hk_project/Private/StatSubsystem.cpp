#include "StatSubsystem.h"

class UHKSaveInstance;

void UStatSubsystem::ResetCount(EStatEvent _id) {
}

void UStatSubsystem::OnEvent(EStatEvent _id, int32 _increment) {
}

int32 UStatSubsystem::GetDeltaMilliseconds() const {
    return 0;
}

void UStatSubsystem::_OnGameSaved(UHKSaveInstance* _saveInstance) {
}

void UStatSubsystem::_OnGameLoaded(UHKSaveInstance* _saveInstance) {
}

UStatSubsystem::UStatSubsystem() {
}

