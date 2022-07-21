#include "BackpackUserWidget.h"

class ABackpackGUI;
class ADrone;

void UBackpackUserWidget::SetBackpackGUI(ABackpackGUI* _GUI) {
}

void UBackpackUserWidget::OnYPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnXPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnValidatePressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnUpPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnRightVerticalAxis_Implementation(float _value, bool& _handled) {
}

void UBackpackUserWidget::OnRightTriggerAxis_Implementation(float _value, bool& _handled) {
}

void UBackpackUserWidget::OnRightPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnRightHorizontalAxis_Implementation(float _value, bool& _handled) {
}


void UBackpackUserWidget::OnRBPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnLeftVerticalAxis_Implementation(float _value, bool& _handled) {
}

void UBackpackUserWidget::OnLeftTriggerAxis_Implementation(float _value, bool& _handled) {
}

void UBackpackUserWidget::OnLeftPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnLeftHorizontalAxis_Implementation(float _value, bool& _handled) {
}

void UBackpackUserWidget::OnLBPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnDpadUpReleased_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnDpadUpPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnDpadRightReleased_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnDpadRightPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnDpadLeftReleased_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnDpadLeftPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnDpadDownReleased_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnDpadDownPressed_Implementation(bool& _handled) {
}

void UBackpackUserWidget::OnDownPressed_Implementation(bool& _handled) {
}


void UBackpackUserWidget::OnCancelPressed_Implementation(bool& _handled) {
}

ABackpackGUI* UBackpackUserWidget::GetGUI() const {
    return NULL;
}

ADrone* UBackpackUserWidget::GetDrone() const {
    return NULL;
}

UBackpackUserWidget::UBackpackUserWidget() : UUserWidget(FObjectInitializer::Get()) {
}

