#include "HKCamera.h"

void AHKCamera::SetCameraInput(FVector2D _input) {
}

void AHKCamera::OnCameraFocusLost_Implementation(float _blendTime) {
}

void AHKCamera::OnCameraFocus_Implementation(float _blendTime) {
}

void AHKCamera::OnCameraButtonReleased_Implementation() {
}

void AHKCamera::OnCameraButtonPressed_Implementation() {
}

float AHKCamera::GetLookSensitivity() const {
    return 0.0f;
}

FVector AHKCamera::GetCollisionPosition() const {
    return FVector{};
}

FVector2D AHKCamera::GetCameraInput() const {
    return FVector2D{};
}

AHKCamera::AHKCamera() {
}

