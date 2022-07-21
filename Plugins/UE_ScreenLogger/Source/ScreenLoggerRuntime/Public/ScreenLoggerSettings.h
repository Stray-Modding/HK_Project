#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EScreenLoggerVerbosity.h"
#include "ScreenLoggerSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class SCREENLOGGERRUNTIME_API UScreenLoggerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EScreenLoggerVerbosity> PrintToScreenVerbosity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrintToScreenDuration;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EScreenLoggerVerbosity> PrintToConsoleVerbosity;
    
    UScreenLoggerSettings();
};

