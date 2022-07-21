#include "DroidMovementAnimationSettings.h"

UDroidMovementAnimationSettings::UDroidMovementAnimationSettings() {
    this->Start_LeftFoot = NULL;
    this->Start_RightFoot = NULL;
    this->WalkBlendSpace = NULL;
    this->StopWalkAnimation_LeftFoot = NULL;
    this->StopWalkAnimation_RightFoot = NULL;
    this->TurnInPlaceBlendSpace = NULL;
    this->FinalStepBlendSpace_LeftFoot = NULL;
    this->FinalStepBlendSpace_RightFoot = NULL;
}

