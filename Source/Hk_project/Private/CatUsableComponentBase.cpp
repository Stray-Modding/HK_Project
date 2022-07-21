#include "CatUsableComponentBase.h"

class USoundBase;
class ACatPawn;
class USceneComponent;

void UCatUsableComponentBase::UseDone() {
}

bool UCatUsableComponentBase::ShouldStopBeforeTeleport_Implementation() const {
    return false;
}

bool UCatUsableComponentBase::ShouldDisplayFeedbackWhileUsing_Implementation() const {
    return false;
}

void UCatUsableComponentBase::SetUseEnabled(bool _value) {
}

void UCatUsableComponentBase::SetSelectable(bool _value) {
}

void UCatUsableComponentBase::SetGUIFeedbackPosition(USceneComponent* _usePosition, FName _socket) {
}

void UCatUsableComponentBase::SetEnabled(bool _value) {
}

void UCatUsableComponentBase::SetDisplayedName(FText _displayedName) {
}

bool UCatUsableComponentBase::IsValid_Implementation(ACatPawn* _cat) {
    return false;
}

bool UCatUsableComponentBase::IsUseEnabled_Implementation() const {
    return false;
}

bool UCatUsableComponentBase::IsSelectable_Implementation() const {
    return false;
}

bool UCatUsableComponentBase::IsEnabled_Implementation() const {
    return false;
}

bool UCatUsableComponentBase::IsBeingUsed() const {
    return false;
}

ACatPawn* UCatUsableComponentBase::GetUsingCat() const {
    return NULL;
}

FText UCatUsableComponentBase::GetUseDisplayText_Implementation() const {
    return FText::GetEmpty();
}

TEnumAsByte<EUsableInteractionButton> UCatUsableComponentBase::GetInteractionButton_Implementation() const {
    return UsableInteractionButton_JumpUp;
}

USceneComponent* UCatUsableComponentBase::GetGUIFeedbackPosition(FName& _outSocket) const {
    return NULL;
}

ACatPawn* UCatUsableComponentBase::GetFocusingCat() const {
    return NULL;
}

FText UCatUsableComponentBase::GetDisplayedName_Implementation() const {
    return FText::GetEmpty();
}

bool UCatUsableComponentBase::CanInteract_Implementation(ACatPawn* _cat) {
    return false;
}

bool UCatUsableComponentBase::CanBeUsedWhileSameButtonIsUsed_Implementation() const {
    return false;
}

void UCatUsableComponentBase::_OnUseStarted_Implementation(ACatPawn* _cat) {
}

void UCatUsableComponentBase::_OnFocusLost_Implementation(ACatPawn* _cat) {
}

void UCatUsableComponentBase::_OnFocusGained_Implementation(ACatPawn* _cat) {
}

void UCatUsableComponentBase::_OnBeforeUseDone_Implementation(ACatPawn* _cat) {
}

void UCatUsableComponentBase::_OnAfterUseDone_Implementation(ACatPawn* _cat) {
}

USoundBase* UCatUsableComponentBase::_GetStartSoundToPlay_Implementation() const {
    return NULL;
}

UCatUsableComponentBase::UCatUsableComponentBase() {
    this->m_interactRange = 100.00f;
    this->m_visibleRange = -1.00f;
    this->m_startEnabled = true;
    this->m_disableShoulderCamera = true;
    this->m_startInteractionSound = NULL;
    this->m_usingCat = NULL;
    this->m_focusingCat = NULL;
    this->m_isEnabled = true;
    this->m_isUseEnabled = true;
    this->m_isSelectable = true;
}

