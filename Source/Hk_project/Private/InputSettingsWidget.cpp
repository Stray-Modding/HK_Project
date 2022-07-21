#include "InputSettingsWidget.h"

UInputSettingsWidget::UInputSettingsWidget() {
    this->InvertLookXCheckBox = NULL;
    this->InvertLookYCheckBox = NULL;
    this->LookSensitivitySliderBox = NULL;
    this->RebindButton = NULL;
    this->BackButton = NULL;
    this->DefaultsButton = NULL;
    this->SwitchTabTextBlock = NULL;
    this->TabLeftButton = NULL;
    this->TabRightButton = NULL;
    this->m_minLookSensitivity = 0.10f;
    this->m_maxLookSensitivity = 1.30f;
}

