// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EAttribOwner_generated_h
#error "EAttribOwner.generated.h already included, missing '#pragma once' in EAttribOwner.h"
#endif
#define HOUDINIENGINERUNTIME_EAttribOwner_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribOwner_h


#define FOREACH_ENUM_EATTRIBOWNER(op) \
	op(EAttribOwner::Invalid) \
	op(EAttribOwner::Vertex) \
	op(EAttribOwner::Point) \
	op(EAttribOwner::Prim) \
	op(EAttribOwner::Detail) 

enum class EAttribOwner : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribOwner>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
