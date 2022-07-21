#include "ScreenLoggerSettings.h"

UScreenLoggerSettings::UScreenLoggerSettings() {
    this->PrintToScreenVerbosity = ScreenLoggerVerbosity_Warning;
    this->PrintToScreenDuration = 1.50f;
    this->PrintToConsoleVerbosity = ScreenLoggerVerbosity_Log;
}

