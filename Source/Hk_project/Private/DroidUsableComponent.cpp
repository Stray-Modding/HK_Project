#include "DroidUsableComponent.h"

class ACharacterDroid;

void UDroidUsableComponent::StopUse() {
}

void UDroidUsableComponent::SetEnabled(bool _enabled) {
}

void UDroidUsableComponent::OnUsing(ACharacterDroid* _droid) {
}

void UDroidUsableComponent::OnStopUse() {
}

void UDroidUsableComponent::OnStartUse(ACharacterDroid* _droid) {
}

bool UDroidUsableComponent::IsEnabled() {
    return false;
}

bool UDroidUsableComponent::IsBeingUsed() {
    return false;
}

FTransform UDroidUsableComponent::GetStartUseSocketTransform() {
    return FTransform{};
}

ACharacterDroid* UDroidUsableComponent::GetCurrentDroid() {
    return NULL;
}

void UDroidUsableComponent::ForceUsing(ACharacterDroid* _droid) {
}

UDroidUsableComponent::UDroidUsableComponent() {
    this->m_startUsingTransformActor = NULL;
    this->m_isEnabled = true;
    this->m_enableTeleportAtEnd = false;
    this->m_stateMachine = NULL;
}

