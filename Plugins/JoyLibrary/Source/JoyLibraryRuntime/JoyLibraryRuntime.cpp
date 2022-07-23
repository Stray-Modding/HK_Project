// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "JoyLibraryRuntime.h"

#include <ISettingsModule.h>
#include <ISettingsSection.h>

#include "JoyLibrarySettings.h"


#define LOCTEXT_NAMESPACE "FJoyLibraryRuntimeModule"

void FJoyLibraryRuntimeModule::StartupModule()
{
	ISettingsModule* settingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (settingsModule != nullptr)
	{
		settingsModule->RegisterSettings("Project", "Plugins", "JoyLibrary",
			LOCTEXT("JoyLibraryName", "Joy Library"),
			LOCTEXT("JoyLibraryDescription", "Configure Joy Library."),
			GetMutableDefault<UJoyLibrarySettings>()
		);
	}

	m_assertEnabledConsoleVariable = IConsoleManager::Get().RegisterConsoleVariable(TEXT("joy.SkipAsserts"), 0, TEXT("Automatically skips assert windows."));
}

void FJoyLibraryRuntimeModule::ShutdownModule()
{
	IConsoleManager::Get().UnregisterConsoleObject(m_assertEnabledConsoleVariable);
	m_assertEnabledConsoleVariable = nullptr;

	ISettingsModule* settingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (settingsModule != nullptr)
	{
		settingsModule->UnregisterSettings("Project", "Plugins", "JoyLibrary");
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FJoyLibraryRuntimeModule, JoyLibraryRuntime)

