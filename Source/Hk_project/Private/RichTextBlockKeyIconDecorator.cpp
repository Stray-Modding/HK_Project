#include "RichTextBlockKeyIconDecorator.h"

URichTextBlockKeyIconDecorator::URichTextBlockKeyIconDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->m_widgetClass = NULL;
    this->m_widget = NULL;
}

