#include "PlayingAnimation.h"

FPlayingAnimation::FPlayingAnimation() {
    this->Animation = NULL;
    this->Duration = 0.00f;
    this->PlayPosition = 0.00f;
    this->IsLooping = false;
    this->IsSynchronized = false;
    this->KeepLastAnimationAsIdle = false;
}

