#include "LootableComponent.h"

bool ULootableComponent::HasID(FName _id) const {
    return false;
}

ULootableComponent::ULootableComponent() {
    this->Icon = NULL;
    this->ID = TEXT("[UNSPECIFIED NAME]");
}

