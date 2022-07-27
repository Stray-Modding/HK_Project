#include "HKGameUserSettings.h"

UHKGameUserSettings::UHKGameUserSettings() {
    this->MeshQuality = 2;
    this->MasterVolume = 1.00f;
    this->MusicVolume = 1.00f;
    this->EffectsVolume = 1.00f;
    this->Gamma = 1.98f;
    this->MotionBlurAmount = 0.05f;
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
    this->FirstLaunch = false;
    this->ScreenPercentage = 100;
    this->SteamDeckScreenPercentage = 100;
    this->SteamDeckEffectsQuality = 2;
    this->SteamDeckMeshQuality = 2;
    this->SteamDeckTextureQuality = 2;
    this->SteamDeckShadowQuality = 2;
}

