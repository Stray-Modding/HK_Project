// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniProxyRefineResult_generated_h
#error "EHoudiniProxyRefineResult.generated.h already included, missing '#pragma once' in EHoudiniProxyRefineResult.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniProxyRefineResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineResult_h


#define FOREACH_ENUM_EHOUDINIPROXYREFINERESULT(op) \
	op(EHoudiniProxyRefineResult::Invalid) \
	op(EHoudiniProxyRefineResult::Failed) \
	op(EHoudiniProxyRefineResult::Success) \
	op(EHoudiniProxyRefineResult::Skipped) 

enum class EHoudiniProxyRefineResult : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
