#include "ZurgPawn.h"

class ACatPawn;
class USceneComponent;

void AZurgPawn::OnDetachedFromCat_Implementation(ACatPawn* _catPawn, USceneComponent* _attachedComponent, FName _socketName) {
}

void AZurgPawn::OnAttachedToCat_Implementation(ACatPawn* _catPawn, USceneComponent* _attachedComponent, FName _socketName) {
}

bool AZurgPawn::CanGrabCat_Implementation() const {
    return false;
}

AZurgPawn::AZurgPawn() {
    this->ZurgSettings = NULL;
}

