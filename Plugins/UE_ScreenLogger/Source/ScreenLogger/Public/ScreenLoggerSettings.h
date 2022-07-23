// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <UObject/NoExportTypes.h>

#include "ScreenLoggerSettings.generated.h"


UENUM()
enum EScreenLoggerVerbosity
{
	ScreenLoggerVerbosity_NoLogging = 0		UMETA(DisplayName = "NoLogging"),
	ScreenLoggerVerbosity_Fatal				UMETA(DisplayName = "Fatal"),
	ScreenLoggerVerbosity_Error				UMETA(DisplayName = "Error"),
	ScreenLoggerVerbosity_Warning			UMETA(DisplayName = "Warning"),
	ScreenLoggerVerbosity_Display			UMETA(DisplayName = "Display"),
	ScreenLoggerVerbosity_Log				UMETA(DisplayName = "Log"),
	ScreenLoggerVerbosity_Verbose			UMETA(DisplayName = "Verbose"),
	ScreenLoggerVerbosity_VeryVerbose		UMETA(DisplayName = "VeryVerbose"),
};

ELogVerbosity::Type ScreenLoggerVerbosityToLogVerbosity(EScreenLoggerVerbosity _verbosity);


/**
 * 
 */
UCLASS(config = Game)
class SCREENLOGGER_API UScreenLoggerSettings : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(Config, Category = "Screen", EditAnywhere, DisplayName = "Print to screen verbosity") TEnumAsByte<EScreenLoggerVerbosity> PrintToScreenVerbosity = ScreenLoggerVerbosity_Warning;
	UPROPERTY(Config, Category = "Screen", EditAnywhere, DisplayName = "Print to screen duration") float PrintToScreenDuration = 1.5f;

	UPROPERTY(Config, Category = "Console", EditAnywhere, DisplayName = "Print log to console verbosity") TEnumAsByte<EScreenLoggerVerbosity> PrintToConsoleVerbosity = ScreenLoggerVerbosity_Log;
};
