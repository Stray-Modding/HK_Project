#include "IntroWidget.h"

void UIntroWidget::ShowGammaSetting_Implementation() {
}

bool UIntroWidget::IsPcBuild() {
    return false;
}

void UIntroWidget::_OpenMenu_Implementation() {
}

void UIntroWidget::_OnSkipButtonPressed_Implementation(FKey _key) {
}

UIntroWidget::UIntroWidget() {
    this->m_maximumFlashingOpacity = 0.60f;
    this->m_minimumFlashingOpacity = 0.00f;
    this->m_flashingSpeed = 7.50f;
    this->FadeAnimation = NULL;
    this->SavingIconImage = NULL;
}

