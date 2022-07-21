#include "LoadingScreenSettings.h"

ULoadingScreenSettings::ULoadingScreenSettings() {
    this->TimeWithoutLoadingBeforeEndingScreen = 2.00f;
    this->LoadingScreenSound = NULL;
    this->LoadingScreenSoundVolume = 0.50f;
    this->LoadingScreenSoundFadeInDuration = 2.00f;
    this->LoadingScreenSoundFadeOutDuration = 2.00f;
}

