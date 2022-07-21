#include "DialogLineAdvanced.h"

FDialogLineAdvanced::FDialogLineAdvanced() {
    this->Animation = NULL;
    this->IsSynchronized = false;
    this->LoopAnimation = false;
    this->ScreenMaterial = NULL;
    this->LookAtMode = DialogOrientationMode_None;
    this->LookAtActor = NULL;
    this->TurnTowardsMode = DialogOrientationMode_None;
    this->TurnTowardsActor = NULL;
    this->ShowDirectionActor = NULL;
    this->DroneTargetTransform = NULL;
}

