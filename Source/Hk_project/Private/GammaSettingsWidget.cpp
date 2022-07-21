#include "GammaSettingsWidget.h"

UGammaSettingsWidget::UGammaSettingsWidget() {
    this->BrightnessProgressBar = NULL;
    this->ButtonLeft = NULL;
    this->ButtonRight = NULL;
    this->BackButton = NULL;
    this->AcceptButton = NULL;
    this->DefaultButton = NULL;
    this->ExplainText = NULL;
    this->GammaIconLow = NULL;
    this->GammaIconMiddle = NULL;
    this->GammaIconHigh = NULL;
    this->KeyBox = NULL;
    this->FadeInAnimation = NULL;
    this->m_gammaIconLowTexture = NULL;
    this->m_gammaIconMiddleTexture = NULL;
    this->m_gammaIconHighTexture = NULL;
    this->m_gammaIconMaterial = NULL;
    this->gammaIconLowMaterial = NULL;
    this->gammaIconMiddleMaterial = NULL;
    this->gammaIconHighMaterial = NULL;
    this->m_minimumGammaValue = 0.40f;
    this->m_maximumGammaValue = 4.00f;
}

