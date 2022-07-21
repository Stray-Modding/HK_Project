#include "SliderBoxWidget.h"

USliderBoxWidget::USliderBoxWidget() {
    this->Border = NULL;
    this->SliderText = NULL;
    this->LeftButton = NULL;
    this->RightButton = NULL;
    this->Slider = NULL;
    this->m_notchCount = 10;
    this->m_onSliderValueChangeSound = NULL;
}

