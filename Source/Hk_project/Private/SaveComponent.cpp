#include "SaveComponent.h"

void USaveComponent::SetEnabled(bool _enabled) {
}

bool USaveComponent::IsRegistered() const {
    return false;
}

bool USaveComponent::IsEnabled() const {
    return false;
}

USaveComponent::USaveComponent() {
    this->m_enabled = true;
    this->m_doSaveTransforms = false;
}

