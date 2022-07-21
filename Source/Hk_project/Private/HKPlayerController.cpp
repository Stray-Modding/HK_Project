#include "HKPlayerController.h"
#include "DebugInputComponent.h"

class ABackpack;
class ACatPawn;
class ADrone;

void AHKPlayerController::SetWalkableDebugModeEnabled(bool _enabled) {
}

void AHKPlayerController::SetPS5TriggersState(EPS5TriggersState _triggersState, EPS5TriggersSide _triggerSide) {
}

void AHKPlayerController::SetBackpackEnabled(bool _enabled, bool _unlockStrongLight) {
}


void AHKPlayerController::Respawn() {
}

void AHKPlayerController::PushIngameCinematicModeEnabled(float _fadeTime) {
}

void AHKPlayerController::PopIngameCinematicModeEnabled(float _fadeTime) {
}



bool AHKPlayerController::IsWaitingForStreamingAndLoading() const {
    return false;
}

bool AHKPlayerController::IsSkipCinematicDown() const {
    return false;
}

bool AHKPlayerController::IsIngameCinematicModeEnabled() const {
    return false;
}

ADrone* AHKPlayerController::GetDrone() const {
    return NULL;
}

float AHKPlayerController::GetContextualAxisRightValue() const {
    return 0.0f;
}

float AHKPlayerController::GetContextualAxisLeftValue() const {
    return 0.0f;
}

ACatPawn* AHKPlayerController::GetCat() const {
    return NULL;
}

ABackpack* AHKPlayerController::GetBackpack() const {
    return NULL;
}

void AHKPlayerController::ForceWaitForStreamingAndLoading(float _fadeOutTime) {
}


void AHKPlayerController::_OnR3Pressed() {
}

void AHKPlayerController::_OnL3Pressed() {
}

void AHKPlayerController::_OnCatDied(ACatPawn* _cat) {
}

AHKPlayerController::AHKPlayerController() {
    this->m_fadeOutTime = 1.00f;
    this->m_targetTimeDilation = 0.05f;
    this->m_timeDilationLerpRatio = 0.05f;
    this->m_spectatorClass = NULL;
    this->m_minimumWaitForStreamingTime = 1.00f;
    this->m_stateMachine = NULL;
    this->m_cameraManager = NULL;
    this->m_catPawn = NULL;
    this->M_BackPack = NULL;
    this->M_Drone = NULL;
    this->m_spectator = NULL;
    this->m_debugJumpProbeWheelSubdivisions = 20;
    this->m_debugInputComponent = CreateDefaultSubobject<UDebugInputComponent>(TEXT("DebugInput"));
    this->m_gameStateManager = NULL;
    this->m_walkableDebugMaterial = NULL;
    this->m_movementObstacleDebugMaterial = NULL;
    this->m_maxDebugTransformStackSize = 4;
    this->m_defaultIcon = NULL;
    this->m_savedHasBackpack = false;
    this->m_savedHasUnlockedLight = false;
    this->m_PS5VibrationSubmix = NULL;
}

