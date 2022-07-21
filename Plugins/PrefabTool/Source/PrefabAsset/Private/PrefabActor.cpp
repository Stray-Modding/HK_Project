#include "PrefabActor.h"
#include "PrefabComponent.h"

class UPrefabAsset;

void APrefabActor::SetPrefab(UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected) {
}

void APrefabActor::SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility) {
}

UPrefabAsset* APrefabActor::GetPrefab() const {
    return NULL;
}

void APrefabActor::DestroyPrefabActor(bool bDestroyAttachedChildren) {
}

APrefabActor::APrefabActor() {
    this->PrefabComponent = CreateDefaultSubobject<UPrefabComponent>(TEXT("PrefabComponent"));
}

