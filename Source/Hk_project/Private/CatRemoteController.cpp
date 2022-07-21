#include "CatRemoteController.h"

class ACatPawn;

void ACatRemoteController::StopSequence() {
}

void ACatRemoteController::StartSequence() {
}

void ACatRemoteController::_OnJumpEnd(ACatPawn* _cat) {
}

void ACatRemoteController::_OnFollowSplineEndReached(ACatPawn* _cat) {
}

ACatRemoteController::ACatRemoteController() {
    this->m_autoStart = false;
    this->m_loopSequence = false;
    this->m_controlledCat = NULL;
    this->m_stateMachine = NULL;
}

