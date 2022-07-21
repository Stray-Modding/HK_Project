#include "JumpData.h"

FJumpData::FJumpData() {
    this->stopVelocity = 0.00f;
    this->beginRail = NULL;
    this->endRail = NULL;
    this->hasGap = false;
    this->gapSize = 0.00f;
    this->IsHanging = false;
    this->IsCrossing = false;
    this->isSlowJump = false;
    this->isFailedJump = false;
}

