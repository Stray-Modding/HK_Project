// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniGenericAttribute_generated_h
#error "HoudiniGenericAttribute.generated.h already included, missing '#pragma once' in HoudiniGenericAttribute.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniGenericAttribute_generated_h

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniGenericAttribute>();

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniGenericAttributeChangedProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h


#define FOREACH_ENUM_EATTRIBOWNER(op) \
	op(EAttribOwner::Invalid) \
	op(EAttribOwner::Vertex) \
	op(EAttribOwner::Point) \
	op(EAttribOwner::Prim) \
	op(EAttribOwner::Detail) 

enum class EAttribOwner : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribOwner>();

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
