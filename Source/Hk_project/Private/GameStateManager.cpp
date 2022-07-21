#include "GameStateManager.h"

class UHUDDebugWidget;

void AGameStateManager::UnsuspendGame() {
}

void AGameStateManager::SuspendGame(TEnumAsByte<EGameSuspendedReason> _gameSuspendedReason) {
}

void AGameStateManager::SetDebugMenuOpen(bool _open) {
}


bool AGameStateManager::IsSuspended() const {
    return false;
}

bool AGameStateManager::IsGameMapType() const {
    return false;
}

bool AGameStateManager::IsDebugMenuOpen() const {
    return false;
}

void AGameStateManager::_OnToggleDebugMenuPressed() {
}

void AGameStateManager::_OnMenuStartPressed() {
}

void AGameStateManager::_OnHUDDebugWidgetOpened(UHUDDebugWidget* _widget) {
}

void AGameStateManager::_OnHUDDebugWidgetClosed(UHUDDebugWidget* _widget) {
}

AGameStateManager::AGameStateManager() {
    this->m_stateMachine = NULL;
}

