#include "LifeComponent.h"

class AActor;

void ULifeComponent::SetTakeDamage(bool _canTakeDamage) {
}

void ULifeComponent::SetRegenerationTime(float _lifeRegenerationTime) {
}

void ULifeComponent::SetRegenerationPerTime(float _lifeRegenerationPerTime) {
}

void ULifeComponent::SetRegenerationCoolDown(float _lifeRegenerationCoolDown) {
}

void ULifeComponent::Reset(float _life) {
}

bool ULifeComponent::IsDamageAmountFatal(float _damageAmount) {
    return false;
}

bool ULifeComponent::IsAlive() {
    return false;
}

float ULifeComponent::GetRegenerationTime() const {
    return 0.0f;
}

float ULifeComponent::GetRegenerationPerTime() const {
    return 0.0f;
}

float ULifeComponent::GetRegenerationCoolDown() const {
    return 0.0f;
}

float ULifeComponent::GetMaxLife() const {
    return 0.0f;
}

float ULifeComponent::GetCurrentLife() const {
    return 0.0f;
}

bool ULifeComponent::CanTakeDamage() const {
    return false;
}

void ULifeComponent::ApplyDamage(AActor* _damageApplier, float _damageAmount) {
}

ULifeComponent::ULifeComponent() {
    this->m_canTakeDamage = true;
    this->m_maxLife = 100.00f;
    this->m_regenerationCoolDownAfterDamage = 1.00f;
    this->m_regenerationTime = 0.00f;
    this->m_regenerationPerTime = 0.00f;
}

