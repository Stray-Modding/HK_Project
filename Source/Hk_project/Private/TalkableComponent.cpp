#include "TalkableComponent.h"

class ADialog;
class ADrone;
class ULootableComponent;

void UTalkableComponent::StopDialogInternal(ADrone* _drone) {
}

void UTalkableComponent::StartDialogInternal(ADrone* _drone) {
}

bool UTalkableComponent::ShouldUseB12Voice() const {
    return false;
}

void UTalkableComponent::SetShouldUseB12Voice(bool _useB12Voice) {
}

void UTalkableComponent::SetSecondaryColor(const FColor& _color) {
}

void UTalkableComponent::SetPrimaryColor(const FColor& _color) {
}

void UTalkableComponent::SetMet(bool _met) {
}

void UTalkableComponent::SetItemToShow(ULootableComponent* _lootable) {
}

void UTalkableComponent::SetDialog(ADialog* _dialog) {
}

bool UTalkableComponent::IsWaitingInterlocutor() const {
    return false;
}

bool UTalkableComponent::IsWaitingDialog() const {
    return false;
}

bool UTalkableComponent::IsMet() const {
    return false;
}

bool UTalkableComponent::IsCalling() const {
    return false;
}

FColor UTalkableComponent::GetSecondaryColor() const {
    return FColor{};
}

FColor UTalkableComponent::GetPrimaryColor() const {
    return FColor{};
}

ULootableComponent* UTalkableComponent::GetItemToShow() const {
    return NULL;
}

FText UTalkableComponent::GetDialogDisplayedName_Implementation() const {
    return FText::GetEmpty();
}

ADialog* UTalkableComponent::GetDialog() const {
    return NULL;
}

void UTalkableComponent::_OnGuiClosed(ADrone* _drone) {
}

UTalkableComponent::UTalkableComponent() {
    this->m_notMetTextFormat = FText::FromString(TEXT("Meet"));
    this->m_callBeforeDialogTime = 1.50f;
    this->m_useB12Voice = false;
    this->m_alreadyMet = false;
    this->m_dialog = NULL;
    this->m_dialogClass = NULL;
    this->m_isMet = false;
    this->m_turnTowardInterlocutor = true;
    this->m_movementRange = 500.00f;
    this->m_speedLimit = 0.60f;
    this->m_droidOwner = NULL;
    this->m_itemToShow = NULL;
}

