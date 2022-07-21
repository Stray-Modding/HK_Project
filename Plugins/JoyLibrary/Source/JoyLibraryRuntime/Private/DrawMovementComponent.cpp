#include "DrawMovementComponent.h"

void UDrawMovementComponent::SetDrawEnabled(bool _enabled) {
}

bool UDrawMovementComponent::IsDrawEnabled() const {
    return false;
}

void UDrawMovementComponent::Clear() {
}

UDrawMovementComponent::UDrawMovementComponent() {
    this->DrawLifeTime = -1.00f;
    this->DrawHeight = 10.00f;
    this->DrawThickness = 0.50f;
    this->StartEnabled = false;
    this->DrawType = DrawMovementType_Line;
}

