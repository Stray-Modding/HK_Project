// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniOutputType_generated_h
#error "EHoudiniOutputType.generated.h already included, missing '#pragma once' in EHoudiniOutputType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniOutputType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniOutputType_h


#define FOREACH_ENUM_EHOUDINIOUTPUTTYPE(op) \
	op(EHoudiniOutputType::Invalid) \
	op(EHoudiniOutputType::Mesh) \
	op(EHoudiniOutputType::Instancer) \
	op(EHoudiniOutputType::Landscape) \
	op(EHoudiniOutputType::Curve) \
	op(EHoudiniOutputType::Skeletal) \
	op(EHoudiniOutputType::GeometryCollection) 

enum class EHoudiniOutputType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniOutputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
