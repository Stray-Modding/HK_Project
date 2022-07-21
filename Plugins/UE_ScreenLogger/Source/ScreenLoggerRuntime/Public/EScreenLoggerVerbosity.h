#pragma once
#include "CoreMinimal.h"
#include "EScreenLoggerVerbosity.generated.h"

UENUM(BlueprintType)
enum EScreenLoggerVerbosity {
    ScreenLoggerVerbosity_NoLogging,
    ScreenLoggerVerbosity_Fatal,
    ScreenLoggerVerbosity_Error,
    ScreenLoggerVerbosity_Warning,
    ScreenLoggerVerbosity_Display,
    ScreenLoggerVerbosity_Log,
    ScreenLoggerVerbosity_Verbose,
    ScreenLoggerVerbosity_VeryVerbose,
    ScreenLoggerVerbosity_MAX UMETA(Hidden),
};

