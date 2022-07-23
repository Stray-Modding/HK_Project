#include "HKHUD.h"

class UUserWidget;
class ADialog;
class ABackpack;
class UHUDDebugWidget;


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
    m_HUDWidgetClass = NULL;
    m_HUDDebugWidgetClass = NULL;
    m_HUDWidget = NULL;
    m_HUDDebugWidget = NULL;
    m_saveIcon = NULL;
    m_reticule = NULL;
    m_enableSaveIcon = true;
}

