#include "HKHUD.h"

class UUserWidget;
class ADialog;
class UHUDDebugWidget;
class ABackpack;


void AHKHUD::StopScreenFade(TEnumAsByte<EScreenFadeType> _type) {
}


void AHKHUD::StartScreenFade(TEnumAsByte<EScreenFadeType> _type, FLinearColor _beginColor, FLinearColor _endColor, float _duration) {
}


void AHKHUD::SetScreenFadeColor(TEnumAsByte<EScreenFadeType> _type, FLinearColor _color) {
}

void AHKHUD::SetActionDisplayEnabled(FName _actionID, bool _enabled) {
}

void AHKHUD::RemoveActionDisplay(FName _actionID) {
}

void AHKHUD::PushActionDisplayHidden() {
}

void AHKHUD::PopActionDisplayHidden() {
}








bool AHKHUD::IsActionDisplayHidden() const {
    return false;
}

TArray<UUserWidget*> AHKHUD::GetWidgets() const {
    return TArray<UUserWidget*>();
}


UUserWidget* AHKHUD::GetHUDWidget() const {
    return NULL;
}

UHUDDebugWidget* AHKHUD::GetHUDDebugWidget() const {
    return NULL;
}

TArray<FActionDisplay> AHKHUD::GetActionDisplays() const {
    return TArray<FActionDisplay>();
}

bool AHKHUD::FindActionDisplay(FName _actionID, FActionDisplay& _outActionDisplay) const {
    return false;
}

void AHKHUD::AddActionDisplayMultipleInputs(FName _actionID, FText _displayText, const TArray<FName>& _actionBindingNames, int32 _priority, bool _showAllKeys) {
}

void AHKHUD::AddActionDisplay(FName _actionID, FText _displayText, FName _actionBindingName, int32 _priority, bool _showAllKeys) {
}


void AHKHUD::_OnBackpackDialogLineBegan(ABackpack* _backpack, ADialog* _dialog) {
}

void AHKHUD::_OnBackpackDialogEnded(ABackpack* _backpack, ADialog* _dialog) {
}

void AHKHUD::_OnBackpackDialogBegan(ABackpack* _backpack, ADialog* _dialog) {
}

AHKHUD::AHKHUD() {
    this->m_HUDWidgetClass = NULL;
    this->m_HUDDebugWidgetClass = NULL;
    this->m_HUDWidget = NULL;
    this->m_HUDDebugWidget = NULL;
    this->m_saveIcon = NULL;
    this->m_reticule = NULL;
    this->m_enableSaveIcon = true;
}

