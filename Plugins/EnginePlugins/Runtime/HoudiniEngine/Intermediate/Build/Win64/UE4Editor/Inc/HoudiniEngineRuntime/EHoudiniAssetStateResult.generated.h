// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniAssetStateResult_generated_h
#error "EHoudiniAssetStateResult.generated.h already included, missing '#pragma once' in EHoudiniAssetStateResult.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniAssetStateResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniAssetStateResult_h


#define FOREACH_ENUM_EHOUDINIASSETSTATERESULT(op) \
	op(EHoudiniAssetStateResult::None) \
	op(EHoudiniAssetStateResult::Working) \
	op(EHoudiniAssetStateResult::Success) \
	op(EHoudiniAssetStateResult::FinishedWithError) \
	op(EHoudiniAssetStateResult::FinishedWithFatalError) \
	op(EHoudiniAssetStateResult::Aborted) 

enum class EHoudiniAssetStateResult : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetStateResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
