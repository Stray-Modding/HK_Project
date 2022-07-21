// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniGeoPartObject_generated_h
#error "HoudiniGeoPartObject.generated.h already included, missing '#pragma once' in HoudiniGeoPartObject.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniGeoPartObject_generated_h

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_255_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniGeoPartObject>();

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniMeshSocket>();

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniCurveInfo>();

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniVolumeInfo>();

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniPartInfo>();

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniGeoInfo>();

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniObjectInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h


#define FOREACH_ENUM_EHOUDINIINSTANCERTYPE(op) \
	op(EHoudiniInstancerType::Invalid) \
	op(EHoudiniInstancerType::ObjectInstancer) \
	op(EHoudiniInstancerType::PackedPrimitive) \
	op(EHoudiniInstancerType::AttributeInstancer) \
	op(EHoudiniInstancerType::OldSchoolAttributeInstancer) \
	op(EHoudiniInstancerType::GeometryCollection) 

enum class EHoudiniInstancerType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInstancerType>();

#define FOREACH_ENUM_EHOUDINIPARTTYPE(op) \
	op(EHoudiniPartType::Invalid) \
	op(EHoudiniPartType::Mesh) \
	op(EHoudiniPartType::Instancer) \
	op(EHoudiniPartType::Curve) \
	op(EHoudiniPartType::Volume) 

enum class EHoudiniPartType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniPartType>();

#define FOREACH_ENUM_EHOUDINIGEOTYPE(op) \
	op(EHoudiniGeoType::Invalid) \
	op(EHoudiniGeoType::Default) \
	op(EHoudiniGeoType::Intermediate) \
	op(EHoudiniGeoType::Input) \
	op(EHoudiniGeoType::Curve) 

enum class EHoudiniGeoType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniGeoType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
