#include "BackpackGUI.h"

class ABackpack;
class ACatPawn;


void ABackpackGUI::SetGUIMode(TEnumAsByte<EBackpackGUIMode> _mode) {
}

void ABackpackGUI::OnYPressed_Implementation(bool& _handled) {
}

void ABackpackGUI::OnXPressed_Implementation(bool& _handled) {
}

void ABackpackGUI::OnValidatePressed_Implementation(bool& _handled) {
}

void ABackpackGUI::OnUpPressed_Implementation(bool& _handled) {
}


void ABackpackGUI::OnRightVerticalAxis_Implementation(float _value, bool& _handled) {
}

void ABackpackGUI::OnRightPressed_Implementation(bool& _handled) {
}

void ABackpackGUI::OnRightHorizontalAxis_Implementation(float _value, bool& _handled) {
}

void ABackpackGUI::OnRBPressed_Implementation(bool& _handled) {
}



void ABackpackGUI::OnLeftPressed_Implementation(bool& _handled) {
}

void ABackpackGUI::OnLBPressed_Implementation(bool& _handled) {
}




void ABackpackGUI::OnDpadUpPressed_Implementation(bool& _handled) {
}

void ABackpackGUI::OnDpadRightPressed_Implementation(bool& _handled) {
}

void ABackpackGUI::OnDpadLeftPressed_Implementation(bool& _handled) {
}

void ABackpackGUI::OnDpadDownPressed_Implementation(bool& _handled) {
}

void ABackpackGUI::OnDownPressed_Implementation(bool& _handled) {
}


void ABackpackGUI::OnCancelPressed_Implementation(bool& _handled) {
}


TEnumAsByte<EBackpackGUIMode> ABackpackGUI::GetGUIMode() const {
    return BackpackGUIMode_Dialogue;
}

ACatPawn* ABackpackGUI::GetCatPawn() const {
    return NULL;
}

ABackpack* ABackpackGUI::GetBackpack() const {
    return NULL;
}

ABackpackGUI::ABackpackGUI() {
    this->m_GUIInputDeadZone = 0.60f;
}

