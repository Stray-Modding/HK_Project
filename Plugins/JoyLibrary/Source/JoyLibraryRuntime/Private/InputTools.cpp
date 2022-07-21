#include "InputTools.h"

class APlayerController;

void UInputTools::SetViewportIgnoreInput(bool _value) {
}

bool UInputTools::IsShiftPressed(const APlayerController* _playerController) {
    return false;
}

bool UInputTools::IsCtrlPressed(const APlayerController* _playerController) {
    return false;
}

bool UInputTools::IsCmdPressed(const APlayerController* _playerController) {
    return false;
}

bool UInputTools::IsAltPressed(const APlayerController* _playerController) {
    return false;
}

bool UInputTools::InputKey(APlayerController* _playerController, FKey Key, TEnumAsByte<EInputEvent> Event) {
    return false;
}

bool UInputTools::InputAxis(APlayerController* _playerController, FKey Key, float Delta, float DeltaTime) {
    return false;
}

float UInputTools::GetTimeDown(const APlayerController* _playerController, FKey InKey) {
    return 0.0f;
}

UInputTools::UInputTools() {
}

