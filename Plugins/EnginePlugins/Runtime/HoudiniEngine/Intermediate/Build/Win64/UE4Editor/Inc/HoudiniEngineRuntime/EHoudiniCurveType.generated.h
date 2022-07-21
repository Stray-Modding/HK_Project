// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniCurveType_generated_h
#error "EHoudiniCurveType.generated.h already included, missing '#pragma once' in EHoudiniCurveType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniCurveType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveType_h


#define FOREACH_ENUM_EHOUDINICURVETYPE(op) \
	op(EHoudiniCurveType::Invalid) \
	op(EHoudiniCurveType::Polygon) \
	op(EHoudiniCurveType::Nurbs) \
	op(EHoudiniCurveType::Bezier) \
	op(EHoudiniCurveType::Points) 

enum class EHoudiniCurveType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
