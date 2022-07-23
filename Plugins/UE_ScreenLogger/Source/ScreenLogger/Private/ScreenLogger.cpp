// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ScreenLogger.h"

#include <ISettingsModule.h>
#include <ISettingsSection.h>
#include <ScreenLoggerSettings.h>
#include <OnScreenOutputDevice.h>
#include <ToConsoleOutputDevice.h>

#define LOCTEXT_NAMESPACE "FScreenLoggerModule"

void FScreenLoggerModule::StartupModule()
{
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (SettingsModule != nullptr)
	{
		ISettingsSectionPtr GameSettingsSection = SettingsModule->RegisterSettings("Project", "Plugins", "ScreenLogger",
			LOCTEXT("ScreenLoggerName", "Screen Logger"),
			LOCTEXT("ScreenLoggerDescription", "Configure Screen Logger."),
			GetMutableDefault<UScreenLoggerSettings>()
		);
	}

	m_onScreenOutputDevice = new FOnScreenOutputDevice;
	GLog->AddOutputDevice(m_onScreenOutputDevice);

	m_toConsoleOutputDevice = new FToConsoleOutputDevice;
	GLog->AddOutputDevice(m_toConsoleOutputDevice);
}

void FScreenLoggerModule::ShutdownModule()
{
	GLog->RemoveOutputDevice(m_toConsoleOutputDevice);
	delete m_toConsoleOutputDevice;
	m_toConsoleOutputDevice = nullptr;

	GLog->RemoveOutputDevice(m_onScreenOutputDevice);
	delete m_onScreenOutputDevice;
	m_onScreenOutputDevice = nullptr;

	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (SettingsModule != nullptr)
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "ScreenLogger");
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FScreenLoggerModule, ScreenLogger)