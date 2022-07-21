#include "HKButton.h"

void UHKButton::_OnUnHovered() {
}

void UHKButton::_OnHovered() {
}

void UHKButton::_OnClicked() {
}

UHKButton::UHKButton() {
    this->m_onSelectedSound = NULL;
    this->m_onPressedSound = NULL;
    this->m_onHoveredAlpha = 1.00f;
    this->m_changeAlphaOnHovered = false;
    this->m_changeTextColorOnSelected = false;
}

