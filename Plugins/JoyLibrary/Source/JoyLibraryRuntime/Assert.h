#pragma once
#include "CoreMinimal.h"
#include "Misc/MessageDialog.h"
#include "Misc/Paths.h"

#ifdef UE_EDITOR
	#define JOY_ASSERT_ENABLED 1
#else
	#define JOY_ASSERT_ENABLED 0
#endif

#if JOY_ASSERT_ENABLED

	static TArray<FName> s_bypassedAsserts;

	#if PLATFORM_PS4
		#define _JOY_ASSERT_FAILED(condition, msg)\
		{\
			if (FGenericPlatformMisc::IsDebuggerPresent())\
			{\
				__debugbreak(); \
			}\
			else\
			{\
				checkf(condition, TEXT("%s"), msg); \
			}\
		}
		
	#else
		#define _JOY_ASSERT_FAILED(condition, msg)\
		{\
			FName __key = FName(*FString::Printf(TEXT("%s%d"), TEXT(__FILE__), __LINE__));\
			if (s_bypassedAsserts.Find(__key) == INDEX_NONE)\
			{\
				EAppReturnType::Type __ret = FMessageDialog::Open(\
					EAppMsgType::YesNoCancel,\
					FText::FromString(FString::Printf(TEXT("%s[%s:%d -> %s]\n\n[Assertion failed] => " #condition "\n\nYes\t\t\t-> Crash and generate dump\nNo\t\t\t\t-> Pass Assert\nCancel\t-> Deactivate Assert"), (msg), *FString(__FILENAME__), __LINE__, *FString(__FUNCTION__)))\
				); \
				switch (__ret)\
				{\
				case EAppReturnType::Yes:\
				{\
					if (FGenericPlatformMisc::IsDebuggerPresent())\
					{\
						__debugbreak();\
					}\
					else\
					{\
						checkf(condition, TEXT("%s"), msg);\
					}\
				}\
				break;\
				case EAppReturnType::Cancel:\
				{\
					s_bypassedAsserts.Add(__key);\
				}\
				break;\
				default: break; \
				}\
			}\
		}

	#endif

	#define JOY_ASSERT_MSG(condition, msg)\
	{\
		if (!(condition))\
		{\
			LOGF_ERROR(TEXT("[Assertion failed][%s:%d -> %s] => " #condition "\n%s"), *FString(__FILENAME__), __LINE__, *FString(__FUNCTION__), msg);\
			IConsoleVariable* __cvar = IConsoleManager::Get().FindConsoleVariable(TEXT("joy.SkipAsserts"));\
			if (__cvar && __cvar->GetInt() == 0)\
			{\
				_JOY_ASSERT_FAILED(condition, msg);\
			}\
		}\
	}

	#define JOY_ASSERT(condition)\
		JOY_ASSERT_MSG(condition, TEXT(""))

	#define JOY_ASSERT_MSGF(condition, fmt, ...)\
	{\
		FString __msg = FString::Printf(fmt TEXT("\n\n"), __VA_ARGS__);\
		JOY_ASSERT_MSG(condition, *__msg);\
	}

#else
	#define JOY_ASSERT(condition)
	#define JOY_ASSERT_MSG(condition, msg)
	#define JOY_ASSERT_MSGF(condition, fmt, ...)
#endif
