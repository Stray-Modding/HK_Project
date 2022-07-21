#include "CustomAnimation.h"

FCustomAnimation::FCustomAnimation() {
    this->Animation = NULL;
    this->bIsLooping = false;
    this->EnableLookAt = false;
    this->IsSynchronized = false;
    this->KeepCollisions = false;
    this->SynchronizationTime = 0.00f;
    this->PlayRate = 0.00f;
}

