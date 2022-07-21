#include "CameraThirdPersonModifier.h"

void ACameraThirdPersonModifier::SetEnabled(bool _enabled) {
}

void ACameraThirdPersonModifier::OnEnabled_Implementation() {
}

void ACameraThirdPersonModifier::OnDisabled_Implementation() {
}

bool ACameraThirdPersonModifier::IsEnabled() {
    return false;
}

ACameraThirdPersonModifier::ACameraThirdPersonModifier() {
    this->m_enabled = true;
    this->m_priority = 0.00f;
    this->m_camera = NULL;
}

