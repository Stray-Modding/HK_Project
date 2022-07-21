#pragma once
#include "CoreMinimal.h"
#include "EScreenLoggerVerbosity.h"
#include "UObject/Object.h"
#include "ScreenLoggerSettings.generated.h"

UCLASS(Config=Game)
class SCREENLOGGERRUNTIME_API UScreenLoggerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EScreenLoggerVerbosity> PrintToScreenVerbosity;
    
    UPROPERTY(Config, EditAnywhere)
    float PrintToScreenDuration;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EScreenLoggerVerbosity> PrintToConsoleVerbosity;
    
    UScreenLoggerSettings();
};

