#include "LoadingScreenSubsystem.h"

bool ULoadingScreenSubsystem::IsLoadingScreenOn() const {
    return false;
}

void ULoadingScreenSubsystem::EndLoadingScreen() {
}

void ULoadingScreenSubsystem::BeginLoadingScreen() {
}

ULoadingScreenSubsystem::ULoadingScreenSubsystem() {
    this->m_loadingAudio = NULL;
}

