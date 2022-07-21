#include "Dialog.h"
#include "SaveComponent.h"
#include "Components/BillboardComponent.h"

class ULootableComponent;
class UAnimSequence;
class UTalkableComponent;
class ACatPawn;

void ADialog::UnrollDialog() {
}

void ADialog::ThrowDialogEvent(FName _eventName) {
}

void ADialog::StartDialog() {
}

void ADialog::SetCanBeShownItems(bool _value) {
}

void ADialog::SetAutoResetCameraActivated(bool _activated) {
}

void ADialog::RequestNextDialogLine() {
}

bool ADialog::PollNextDialogLineRequested() {
    return false;
}

void ADialog::OnRequestDialog_Implementation() {
}

void ADialog::OnMeetupBegan_Implementation() {
}

void ADialog::OnItemShown_Implementation(ULootableComponent* _lootable) {
}

void ADialog::OnDialogBegan_Implementation() {
}

void ADialog::OnBeforeDialogEnded_Implementation() {
}

void ADialog::NotifyLineTextDisplayed() {
}

bool ADialog::IsUnrollRequested() const {
    return false;
}

bool ADialog::IslineTextDisplayed() const {
    return false;
}

bool ADialog::IsDialogRunning() const {
    return false;
}

bool ADialog::IsBeingShownItem() const {
    return false;
}

bool ADialog::IsAutoResetCameraActivated() const {
    return false;
}

UAnimSequence* ADialog::GetCurrentSynchronizedAnimation() const {
    return NULL;
}

UTalkableComponent* ADialog::GetCurrentSpeaker() const {
    return NULL;
}

FDialogLine ADialog::GetCurrentLine() const {
    return FDialogLine{};
}

ACatPawn* ADialog::GetCat() const {
    return NULL;
}

void ADialog::EndDialogLine(const FDialogLine& _line) {
}

void ADialog::EndDialog() {
}

bool ADialog::CheckDialogEvent(FName _eventName) {
    return false;
}

bool ADialog::CanBeShownItems() const {
    return false;
}

void ADialog::BeginShowItem(ULootableComponent* _lootable) {
}

void ADialog::BeginMeetup() {
}

void ADialog::BeginDialogLine(const FDialogLine& _line) {
}

void ADialog::BeginDefaultDialog() {
}

ADialog::ADialog() {
    this->m_billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->m_save = CreateDefaultSubobject<USaveComponent>(TEXT("Save"));
    this->m_canBeShownItems = true;
    this->m_autoResetCameraActivated = true;
    this->m_currentSynchronizedAnimation = NULL;
}

