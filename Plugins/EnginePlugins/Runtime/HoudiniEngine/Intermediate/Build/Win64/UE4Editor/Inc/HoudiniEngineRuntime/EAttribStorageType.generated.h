// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EAttribStorageType_generated_h
#error "EAttribStorageType.generated.h already included, missing '#pragma once' in EAttribStorageType.h"
#endif
#define HOUDINIENGINERUNTIME_EAttribStorageType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EAttribStorageType_h


#define FOREACH_ENUM_EATTRIBSTORAGETYPE(op) \
	op(EAttribStorageType::Invalid) \
	op(EAttribStorageType::INT) \
	op(EAttribStorageType::INT64) \
	op(EAttribStorageType::FLOAT) \
	op(EAttribStorageType::FLOAT64) \
	op(EAttribStorageType::STRING) 

enum class EAttribStorageType : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribStorageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
