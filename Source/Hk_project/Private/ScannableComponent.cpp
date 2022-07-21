#include "ScannableComponent.h"

void UScannableComponent::SetScannableEnabled(bool _value) {
}

bool UScannableComponent::IsScannableEnabled() const {
    return false;
}

UScannableComponent::UScannableComponent() {
    this->EnabledOnStart = true;
    this->ClueActorClass = NULL;
}

