// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniRampPointConstructStatus_generated_h
#error "EHoudiniRampPointConstructStatus.generated.h already included, missing '#pragma once' in EHoudiniRampPointConstructStatus.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniRampPointConstructStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampPointConstructStatus_h


#define FOREACH_ENUM_EHOUDINIRAMPPOINTCONSTRUCTSTATUS(op) \
	op(EHoudiniRampPointConstructStatus::None) \
	op(EHoudiniRampPointConstructStatus::INITIALIZED) \
	op(EHoudiniRampPointConstructStatus::POSITION_INSERTED) \
	op(EHoudiniRampPointConstructStatus::VALUE_INSERTED) \
	op(EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED) 

enum class EHoudiniRampPointConstructStatus : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampPointConstructStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
