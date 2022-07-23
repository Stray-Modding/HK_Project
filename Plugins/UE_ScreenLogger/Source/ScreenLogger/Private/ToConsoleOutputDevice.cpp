#include "ToConsoleOutputDevice.h"

#include <Engine/Engine.h>
#include <Engine/Console.h>
#include <ScreenLoggerSettings.h>


void FToConsoleOutputDevice::Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const FName& Category)
{
	if (GEngine)
	{
		UScreenLoggerSettings* settings = (UScreenLoggerSettings*)(UScreenLoggerSettings::StaticClass()->ClassDefaultObject);
		if (!settings)
			return;

		FString verbosity;
		switch (Verbosity)
		{
		case ELogVerbosity::NoLogging:
			verbosity = TEXT("NoLogging");
			break;
		case ELogVerbosity::Fatal:
			verbosity = TEXT("Fatal");
			break;
		case ELogVerbosity::Error:
			verbosity = TEXT("Error");
			break;
		case ELogVerbosity::Warning:
			verbosity = TEXT("Warning");
			break;
		case ELogVerbosity::Display:
			verbosity = TEXT("Display");
			break;
		case ELogVerbosity::Log:
			verbosity = TEXT("Log");
			break;
		case ELogVerbosity::Verbose:
			verbosity = TEXT("Verbose");
			break;
		case ELogVerbosity::VeryVerbose:
			verbosity = TEXT("VeryVerbose");
			break;
		default:
			break;
		}

		if (Verbosity <= ScreenLoggerVerbosityToLogVerbosity(settings->PrintToConsoleVerbosity))
		{
			if (GEngine->GameViewport && GEngine->GameViewport->ViewportConsole)
			{
				GEngine->GameViewport->ViewportConsole->OutputText(FString::Printf(TEXT("%s: %s: %s"), *Category.ToString(), *verbosity, V));
			}
		}
	}
}
