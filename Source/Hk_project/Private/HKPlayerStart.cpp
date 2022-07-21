#include "HKPlayerStart.h"

class ACatPawn;

void AHKPlayerStart::BeforeCatSpawned_Implementation() {
}

void AHKPlayerStart::AfterCatSpawned_Implementation(ACatPawn* _cat) {
}

AHKPlayerStart::AHKPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    this->UseData = false;
}

