#include "CatAnimInstance.h"


void UCatAnimInstance::PushBendInputMode(FName _id, TEnumAsByte<ECatBendInputMode> _mode) {
}

void UCatAnimInstance::PushBendDisabled() {
}

void UCatAnimInstance::PopBendInputMode(FName _id) {
}

void UCatAnimInstance::PopBendDisabled() {
}


void UCatAnimInstance::OnJumpExit() {
}


void UCatAnimInstance::OnEnablePlayerControl() {
}


bool UCatAnimInstance::IsInterpolating_Implementation() {
    return false;
}

bool UCatAnimInstance::IsBendDisabled() const {
    return false;
}

FJumpBlock UCatAnimInstance::GetCurrentJumpBlock() const {
    return FJumpBlock{};
}

TEnumAsByte<ECatBendInputMode> UCatAnimInstance::GetBendInputMode() const {
    return CatBendInputMode_Input;
}

FJumpBlock UCatAnimInstance::FindRelevantJumpBlock(float _jumpLength, float _jumpHeight, const TArray<FJumpBlock>& _jumpBlocks) const {
    return FJumpBlock{};
}

bool UCatAnimInstance::FindJumpBlockBySpeed(float _speed, float _jumpLength, float _jumpHeight, FJumpBlock& _outJumpBlock) const {
    return false;
}

bool UCatAnimInstance::FindJumpBlockByName(FName _speedName, float _jumpLength, float _jumpHeight, FJumpBlock& _outJumpBlock) const {
    return false;
}

UCatAnimInstance::UCatAnimInstance() {
    this->m_jumpAnimationLibrary = NULL;
    this->m_logAnimationErrors = true;
    this->m_enablePlayerControlNotifyClass = NULL;
    this->m_jumpExitNotifyClass = NULL;
    this->m_maxSlopeCorrectionAngle = 20.00f;
}

