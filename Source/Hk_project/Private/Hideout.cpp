#include "Hideout.h"

class AActor;

void AHideout::SetClosed(bool _value) {
}

bool AHideout::IsClosed() const {
    return false;
}

bool AHideout::IsAvailableForHiding() const {
    return false;
}

FVector AHideout::GetHiddenLocation_Implementation() const {
    return FVector{};
}

AActor* AHideout::GetHiddenActor() const {
    return NULL;
}

AHideout::AHideout() {
}

