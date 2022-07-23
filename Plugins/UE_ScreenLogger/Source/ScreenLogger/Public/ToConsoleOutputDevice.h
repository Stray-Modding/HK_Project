#pragma once

#include <CoreMinimal.h>
#include <Misc/OutputDevice.h>

/**
 * 
 */
class SCREENLOGGER_API FToConsoleOutputDevice : public FOutputDevice
{
public:
	virtual void Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const FName& Category) override;
};
