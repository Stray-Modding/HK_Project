#include "HKPlayerCameraManager.h"
#include "Components/SphereComponent.h"

class AActor;

void AHKPlayerCameraManager::SetInputMode(ECameraInputMode _mode) {
}

void AHKPlayerCameraManager::PushFadeToBlack(float _fadeDuration) {
}

void AHKPlayerCameraManager::PushCamera(AActor* _actor, float _blendTime, TEnumAsByte<EViewTargetBlendFunction> _blendFunction, float _blendExp, bool _keepPreviousCameraForPlayerInput, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime, bool _lockRoll) {
}

void AHKPlayerCameraManager::PopFadeToBlack(float _fadeDuration) {
}

void AHKPlayerCameraManager::PopCamera(AActor* _actor, float _blendTime, TEnumAsByte<EViewTargetBlendFunction> _blendFunction, float _blendExp, bool _keepPreviousCameraForPlayerInput, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime, bool _lockRoll) {
}

bool AHKPlayerCameraManager::IsViewTargetInStack() const {
    return false;
}

bool AHKPlayerCameraManager::IsLookingAt(FVector _target, float _screenRatio, bool _checkObstacle, TEnumAsByte<ECollisionChannel> _obstacleChannel, TArray<AActor*> _obstaclesToIgnore) const {
    return false;
}

bool AHKPlayerCameraManager::IsFadedToBlack() const {
    return false;
}

ECameraInputMode AHKPlayerCameraManager::GetInputMode() const {
    return ECameraInputMode::CameraInputMode_GamePad;
}

TArray<AActor*> AHKPlayerCameraManager::GetCameraStack() const {
    return TArray<AActor*>();
}

FVector2D AHKPlayerCameraManager::GetCameraInput() const {
    return FVector2D{};
}

void AHKPlayerCameraManager::_OnCameraActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason) {
}

AHKPlayerCameraManager::AHKPlayerCameraManager() {
    this->m_collisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->m_maxDriftingAngularVelocity = 20.00f;
    this->m_driftAngularDeceleration = 2.00f;
}

