#include "PrefabComponent.h"

UPrefabComponent::UPrefabComponent() {
    this->bConnected = true;
    this->bLockSelection = true;
    this->Prefab = NULL;
    this->GeneratedBlueprint = NULL;
    this->bTransient = false;
}

