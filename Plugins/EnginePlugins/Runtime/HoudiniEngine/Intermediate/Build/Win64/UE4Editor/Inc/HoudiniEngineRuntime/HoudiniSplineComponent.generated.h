// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniSplineComponent_generated_h
#error "HoudiniSplineComponent.generated.h already included, missing '#pragma once' in HoudiniSplineComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniSplineComponent_generated_h

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_281_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics; \
	HOUDINIENGINERUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniSplineComponentInstanceData>();

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_SPARSE_DATA
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_RPC_WRAPPERS
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniSplineComponent, NO_API)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniSplineComponent(); \
	friend struct Z_Construct_UClass_UHoudiniSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniSplineComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniSplineComponent) \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UHoudiniSplineComponent*>(this); }


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniSplineComponent(); \
	friend struct Z_Construct_UClass_UHoudiniSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniSplineComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniSplineComponent) \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UHoudiniSplineComponent*>(this); }


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniSplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniSplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniSplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniSplineComponent(UHoudiniSplineComponent&&); \
	NO_API UHoudiniSplineComponent(const UHoudiniSplineComponent&); \
public:


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniSplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniSplineComponent(UHoudiniSplineComponent&&); \
	NO_API UHoudiniSplineComponent(const UHoudiniSplineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniSplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniSplineComponent)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHasChanged() { return STRUCT_OFFSET(UHoudiniSplineComponent, bHasChanged); } \
	FORCEINLINE static uint32 __PPO__bNeedsToTriggerUpdate() { return STRUCT_OFFSET(UHoudiniSplineComponent, bNeedsToTriggerUpdate); } \
	FORCEINLINE static uint32 __PPO__bIsInputCurve() { return STRUCT_OFFSET(UHoudiniSplineComponent, bIsInputCurve); } \
	FORCEINLINE static uint32 __PPO__bIsEditableOutputCurve() { return STRUCT_OFFSET(UHoudiniSplineComponent, bIsEditableOutputCurve); } \
	FORCEINLINE static uint32 __PPO__NodeId() { return STRUCT_OFFSET(UHoudiniSplineComponent, NodeId); } \
	FORCEINLINE static uint32 __PPO__PartName() { return STRUCT_OFFSET(UHoudiniSplineComponent, PartName); }


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_46_PROLOG
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_SPARSE_DATA \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_RPC_WRAPPERS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_INCLASS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_SPARSE_DATA \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_INCLASS_NO_PURE_DECLS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HoudiniSplineComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniSplineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
