#include "JumpAnimationData.h"

FJumpAnimationData::FJumpAnimationData() {
    this->JumpAnimation = NULL;
    this->JumpFailAnimation = NULL;
    this->StopAnimation = NULL;
    this->StopRailAnimation = NULL;
    this->SlowAnimation = NULL;
    this->UseManualBounds = false;
    this->MinLengthBound = 0.00f;
    this->MaxLengthBound = 0.00f;
    this->MinHeightBound = 0.00f;
    this->MaxHeightBound = 0.00f;
}

