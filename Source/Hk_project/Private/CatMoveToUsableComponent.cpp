#include "CatMoveToUsableComponent.h"

class USceneComponent;
class ACatPawn;

void UCatMoveToUsableComponent::SetMoveToTarget(USceneComponent* _target, FName _targetSocket) {
}

void UCatMoveToUsableComponent::SetIsPrecise(bool _value) {
}

void UCatMoveToUsableComponent::SetAlignWithTarget(bool _value) {
}

TEnumAsByte<ECatMoveToUsableState> UCatMoveToUsableComponent::GetState() const {
    return CatMoveToUsableState_None;
}

USceneComponent* UCatMoveToUsableComponent::GetMoveToTarget(FName& _outTargetSocket) const {
    return NULL;
}

FTransform UCatMoveToUsableComponent::GetLastMoveToTarget() const {
    return FTransform{};
}

void UCatMoveToUsableComponent::_OnFollowSplineEndReached(ACatPawn* _cat) {
}

void UCatMoveToUsableComponent::_OnAfterMoveUseStarted_Implementation(ACatPawn* _cat) {
}

bool UCatMoveToUsableComponent::_IsMoveToFinished_Implementation() const {
    return false;
}

UCatMoveToUsableComponent::UCatMoveToUsableComponent() {
    this->m_alignWithTarget = true;
    this->m_isPrecise = true;
    this->m_stickToBeginRailOnExit = true;
    this->m_moveToMaxSpeed = 1.00f;
    this->m_ignoreTargetForMovement = 1.00f;
    this->m_moveToTarget = NULL;
    this->m_beginRail = NULL;
}

