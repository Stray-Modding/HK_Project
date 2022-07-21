#include "CartonUsableComponent.h"

bool UCartonUsableComponent::IsPointWithinConstraints(FVector _point) const {
    return false;
}

FVector UCartonUsableComponent::ConstrainPoint(FVector _point) const {
    return FVector{};
}

FVector UCartonUsableComponent::ConstrainDirection(FVector _direction) const {
    return FVector{};
}

UCartonUsableComponent::UCartonUsableComponent() {
    this->m_useConstraints = false;
    this->m_beginConstraint = 0.00f;
    this->m_endConstraint = 0.00f;
}

