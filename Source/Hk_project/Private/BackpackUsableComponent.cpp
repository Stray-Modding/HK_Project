#include "BackpackUsableComponent.h"

class UBoxComponent;
class ABackpack;

void UBackpackUsableComponent::SetVisualBox(UBoxComponent* _visualBox) {
}

UBoxComponent* UBackpackUsableComponent::GetVisualBox() const {
    return NULL;
}

ABackpack* UBackpackUsableComponent::GetUsingBackpack() const {
    return NULL;
}

FTransform UBackpackUsableComponent::GetSelectionBoxTransform_Implementation() const {
    return FTransform{};
}

UBackpackUsableComponent::UBackpackUsableComponent() {
    this->m_usageCooldownTime = 0.00f;
    this->m_deactivateCatInteractions = true;
    this->m_backpackScreenWidgetClass = NULL;
    this->m_blockCatDuringUse = false;
}

