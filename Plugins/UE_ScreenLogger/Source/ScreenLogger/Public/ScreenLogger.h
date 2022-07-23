// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

class FOnScreenOutputDevice;
class FToConsoleOutputDevice;

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FScreenLoggerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	FOnScreenOutputDevice* m_onScreenOutputDevice = nullptr;
	FToConsoleOutputDevice* m_toConsoleOutputDevice = nullptr;
};
