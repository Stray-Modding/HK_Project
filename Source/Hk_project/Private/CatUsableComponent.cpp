#include "CatUsableComponent.h"

bool UCatUsableComponent::CanMeow_Implementation() const {
    return false;
}

UCatUsableComponent::UCatUsableComponent() {
    this->m_hasInteractionLimitAngle = false;
    this->m_deactivateBackpackInteractions = true;
    this->m_interactionLimitAngle = 50.00f;
    this->m_interactionLimitAngleHysteresis = 5.00f;
}

