#include "HKGameUserSettings.h"

UHKGameUserSettings::UHKGameUserSettings() {
    this->MeshQuality = 2;
    this->MasterVolume = 1.00f;
    this->MusicVolume = 1.00f;
    this->EffectsVolume = 1.00f;
    this->Gamma = 2.20f;
    this->MotionBlurAmount = 0.50f;
    this->LookSensitivity = 0.70f;
    this->Sharpness = 1.00f;
    this->PadVibrationEnabled = true;
    this->InvertLookXEnabled = false;
    this->InvertLookYEnabled = false;
    this->ReticuleEnabled = false;
    this->AutoPauseEnabled = true;
    this->JumpPromptEnabled = true;
    this->HUDEnabled = true;
    this->AutoCameraEnabled = true;
    this->FirstLaunch = true;
    this->ScreenPercentage = 100;
    this->SteamDeckScreenPercentage = 80;
    this->SteamDeckEffectsQuality = 1;
    this->SteamDeckMeshQuality = 2;
    this->SteamDeckTextureQuality = 2;
    this->SteamDeckShadowQuality = 1;
}

