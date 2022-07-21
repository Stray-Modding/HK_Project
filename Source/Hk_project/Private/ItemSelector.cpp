#include "ItemSelector.h"

class UBackpackUsableComponent;
class ABackpack;

void AItemSelector::OnSelectionExit_Implementation() {
}

void AItemSelector::OnSelectionEnter_Implementation(UBackpackUsableComponent* _usable) {
}

FTransform AItemSelector::GetSelectionBoxTransform() const {
    return FTransform{};
}

void AItemSelector::GetSelectionBox(FVector& _outOrigin, FVector& _outExtent) const {
}

UBackpackUsableComponent* AItemSelector::GetSelectedUsable() const {
    return NULL;
}

ABackpack* AItemSelector::GetBackpack() const {
    return NULL;
}

AItemSelector::AItemSelector() {
    this->M_BackPack = NULL;
    this->m_usable = NULL;
}

