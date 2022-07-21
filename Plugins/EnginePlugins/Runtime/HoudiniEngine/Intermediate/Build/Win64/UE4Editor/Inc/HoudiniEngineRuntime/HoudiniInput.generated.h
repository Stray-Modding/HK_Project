// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniInput_generated_h
#error "HoudiniInput.generated.h already included, missing '#pragma once' in HoudiniInput.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniInput_generated_h

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_SPARSE_DATA
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_RPC_WRAPPERS
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniInput(); \
	friend struct Z_Construct_UClass_UHoudiniInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniInput, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniInput)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniInput(); \
	friend struct Z_Construct_UClass_UHoudiniInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniInput, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniInput)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniInput(UHoudiniInput&&); \
	NO_API UHoudiniInput(const UHoudiniInput&); \
public:


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniInput(UHoudiniInput&&); \
	NO_API UHoudiniInput(const UHoudiniInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniInput)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(UHoudiniInput, Name); } \
	FORCEINLINE static uint32 __PPO__Label() { return STRUCT_OFFSET(UHoudiniInput, Label); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(UHoudiniInput, Type); } \
	FORCEINLINE static uint32 __PPO__PreviousType() { return STRUCT_OFFSET(UHoudiniInput, PreviousType); } \
	FORCEINLINE static uint32 __PPO__AssetNodeId() { return STRUCT_OFFSET(UHoudiniInput, AssetNodeId); } \
	FORCEINLINE static uint32 __PPO__InputNodeId() { return STRUCT_OFFSET(UHoudiniInput, InputNodeId); } \
	FORCEINLINE static uint32 __PPO__InputIndex() { return STRUCT_OFFSET(UHoudiniInput, InputIndex); } \
	FORCEINLINE static uint32 __PPO__ParmId() { return STRUCT_OFFSET(UHoudiniInput, ParmId); } \
	FORCEINLINE static uint32 __PPO__bIsObjectPathParameter() { return STRUCT_OFFSET(UHoudiniInput, bIsObjectPathParameter); } \
	FORCEINLINE static uint32 __PPO__CreatedDataNodeIds() { return STRUCT_OFFSET(UHoudiniInput, CreatedDataNodeIds); } \
	FORCEINLINE static uint32 __PPO__bHasChanged() { return STRUCT_OFFSET(UHoudiniInput, bHasChanged); } \
	FORCEINLINE static uint32 __PPO__bNeedsToTriggerUpdate() { return STRUCT_OFFSET(UHoudiniInput, bNeedsToTriggerUpdate); } \
	FORCEINLINE static uint32 __PPO__Help() { return STRUCT_OFFSET(UHoudiniInput, Help); } \
	FORCEINLINE static uint32 __PPO__KeepWorldTransform() { return STRUCT_OFFSET(UHoudiniInput, KeepWorldTransform); } \
	FORCEINLINE static uint32 __PPO__bPackBeforeMerge() { return STRUCT_OFFSET(UHoudiniInput, bPackBeforeMerge); } \
	FORCEINLINE static uint32 __PPO__bImportAsReference() { return STRUCT_OFFSET(UHoudiniInput, bImportAsReference); } \
	FORCEINLINE static uint32 __PPO__bImportAsReferenceRotScaleEnabled() { return STRUCT_OFFSET(UHoudiniInput, bImportAsReferenceRotScaleEnabled); } \
	FORCEINLINE static uint32 __PPO__bExportLODs() { return STRUCT_OFFSET(UHoudiniInput, bExportLODs); } \
	FORCEINLINE static uint32 __PPO__bExportSockets() { return STRUCT_OFFSET(UHoudiniInput, bExportSockets); } \
	FORCEINLINE static uint32 __PPO__bExportColliders() { return STRUCT_OFFSET(UHoudiniInput, bExportColliders); } \
	FORCEINLINE static uint32 __PPO__bCookOnCurveChanged() { return STRUCT_OFFSET(UHoudiniInput, bCookOnCurveChanged); } \
	FORCEINLINE static uint32 __PPO__GeometryInputObjects() { return STRUCT_OFFSET(UHoudiniInput, GeometryInputObjects); } \
	FORCEINLINE static uint32 __PPO__bStaticMeshChanged() { return STRUCT_OFFSET(UHoudiniInput, bStaticMeshChanged); } \
	FORCEINLINE static uint32 __PPO__AssetInputObjects() { return STRUCT_OFFSET(UHoudiniInput, AssetInputObjects); } \
	FORCEINLINE static uint32 __PPO__bInputAssetConnectedInHoudini() { return STRUCT_OFFSET(UHoudiniInput, bInputAssetConnectedInHoudini); } \
	FORCEINLINE static uint32 __PPO__CurveInputObjects() { return STRUCT_OFFSET(UHoudiniInput, CurveInputObjects); } \
	FORCEINLINE static uint32 __PPO__DefaultCurveOffset() { return STRUCT_OFFSET(UHoudiniInput, DefaultCurveOffset); } \
	FORCEINLINE static uint32 __PPO__bAddRotAndScaleAttributesOnCurves() { return STRUCT_OFFSET(UHoudiniInput, bAddRotAndScaleAttributesOnCurves); } \
	FORCEINLINE static uint32 __PPO__bUseLegacyInputCurves() { return STRUCT_OFFSET(UHoudiniInput, bUseLegacyInputCurves); } \
	FORCEINLINE static uint32 __PPO__LandscapeInputObjects() { return STRUCT_OFFSET(UHoudiniInput, LandscapeInputObjects); } \
	FORCEINLINE static uint32 __PPO__bLandscapeHasExportTypeChanged() { return STRUCT_OFFSET(UHoudiniInput, bLandscapeHasExportTypeChanged); } \
	FORCEINLINE static uint32 __PPO__WorldInputObjects() { return STRUCT_OFFSET(UHoudiniInput, WorldInputObjects); } \
	FORCEINLINE static uint32 __PPO__WorldInputBoundSelectorObjects() { return STRUCT_OFFSET(UHoudiniInput, WorldInputBoundSelectorObjects); } \
	FORCEINLINE static uint32 __PPO__bIsWorldInputBoundSelector() { return STRUCT_OFFSET(UHoudiniInput, bIsWorldInputBoundSelector); } \
	FORCEINLINE static uint32 __PPO__bWorldInputBoundSelectorAutoUpdate() { return STRUCT_OFFSET(UHoudiniInput, bWorldInputBoundSelectorAutoUpdate); } \
	FORCEINLINE static uint32 __PPO__UnrealSplineResolution() { return STRUCT_OFFSET(UHoudiniInput, UnrealSplineResolution); } \
	FORCEINLINE static uint32 __PPO__SkeletalInputObjects() { return STRUCT_OFFSET(UHoudiniInput, SkeletalInputObjects); } \
	FORCEINLINE static uint32 __PPO__GeometryCollectionInputObjects() { return STRUCT_OFFSET(UHoudiniInput, GeometryCollectionInputObjects); } \
	FORCEINLINE static uint32 __PPO__LandscapeSelectedComponents() { return STRUCT_OFFSET(UHoudiniInput, LandscapeSelectedComponents); } \
	FORCEINLINE static uint32 __PPO__InputNodesPendingDelete() { return STRUCT_OFFSET(UHoudiniInput, InputNodesPendingDelete); }


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_14_PROLOG
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_PRIVATE_PROPERTY_OFFSET \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_SPARSE_DATA \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_RPC_WRAPPERS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_INCLASS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_PRIVATE_PROPERTY_OFFSET \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_SPARSE_DATA \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_INCLASS_NO_PURE_DECLS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
