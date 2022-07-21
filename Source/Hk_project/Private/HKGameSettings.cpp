#include "HKGameSettings.h"

UHKGameSettings::UHKGameSettings() {
    this->DisplayActorLinksOnlyWhileSelected = true;
    this->SessionSaveName = TEXT("Session");
    this->IsAudioLogEnabled = false;
    this->GameplaySoundTraceChannel = ECC_GameTraceChannel3;
    this->MovementObstacleProbeChannel = ECC_GameTraceChannel6;
    this->WalkableProbeChannel = ECC_GameTraceChannel1;
    this->InteractCollisionChannel = ECC_GameTraceChannel18;
    this->VisibilityCollisionChannel = ECC_GameTraceChannel17;
    this->LoadingNotificationEnabled = true;
    this->FadeToBlackDuringWaitForStreamingAndLoading = true;
    this->UseBaseMapMode = true;
    this->BaseMapModeZones.AddDefaulted(14);
    this->GUIInputDeadZone = 0.60f;
    this->GUIFadeOutDuration = 0.50f;
    this->GUIAutoFireDelay = 0.45f;
    this->GUIAutoFireInterval = 0.14f;
}

