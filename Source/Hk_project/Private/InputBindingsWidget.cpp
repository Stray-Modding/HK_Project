#include "InputBindingsWidget.h"

UInputBindingsWidget::UInputBindingsWidget() {
    this->ScrollBox = NULL;
    this->InputKeyRowVBox = NULL;
    this->InputRowForward = NULL;
    this->InputRowBack = NULL;
    this->InputRowLeft = NULL;
    this->InputRowRight = NULL;
    this->InputRowRun = NULL;
    this->InputRowJump = NULL;
    this->InputRowInteract = NULL;
    this->InputRowMeow = NULL;
    this->InputRowCall = NULL;
    this->InputRowMenu = NULL;
    this->InputRowLight = NULL;
    this->InputRowDefluxor = NULL;
    this->InputRowHelp = NULL;
    this->InputRowFirstPerson = NULL;
    this->InputRowRecenter = NULL;
    this->InputRowValidate = NULL;
    this->InputRowExit = NULL;
    this->InputRowNextDialog = NULL;
    this->InputRowPrevCategory = NULL;
    this->InputRowNextCategory = NULL;
    this->KeyBox = NULL;
    this->CancelKeyBox = NULL;
    this->BackButton = NULL;
    this->DefaultsButton = NULL;
    this->CancelButton = NULL;
    this->m_onKeyRowSelectedSound = NULL;
    this->m_onKeyRowListeningStartSound = NULL;
    this->m_onKeyRowListeningConfirmSound = NULL;
    this->m_onListeningOtherKeyOpacity = 0.30f;
}

