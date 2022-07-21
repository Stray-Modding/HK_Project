// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniParameter_generated_h
#error "HoudiniParameter.generated.h already included, missing '#pragma once' in HoudiniParameter.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameter_generated_h

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_SPARSE_DATA
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_RPC_WRAPPERS
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_RPC_WRAPPERS_NO_PURE_DECLS
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniParameter(); \
	friend struct Z_Construct_UClass_UHoudiniParameter_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameter)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameter(); \
	friend struct Z_Construct_UClass_UHoudiniParameter_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameter)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniParameter(UHoudiniParameter&&); \
	NO_API UHoudiniParameter(const UHoudiniParameter&); \
public:


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniParameter(UHoudiniParameter&&); \
	NO_API UHoudiniParameter(const UHoudiniParameter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameter)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(UHoudiniParameter, Name); } \
	FORCEINLINE static uint32 __PPO__Label() { return STRUCT_OFFSET(UHoudiniParameter, Label); } \
	FORCEINLINE static uint32 __PPO__ParmType() { return STRUCT_OFFSET(UHoudiniParameter, ParmType); } \
	FORCEINLINE static uint32 __PPO__TupleSize() { return STRUCT_OFFSET(UHoudiniParameter, TupleSize); } \
	FORCEINLINE static uint32 __PPO__NodeId() { return STRUCT_OFFSET(UHoudiniParameter, NodeId); } \
	FORCEINLINE static uint32 __PPO__ParmId() { return STRUCT_OFFSET(UHoudiniParameter, ParmId); } \
	FORCEINLINE static uint32 __PPO__ParentParmId() { return STRUCT_OFFSET(UHoudiniParameter, ParentParmId); } \
	FORCEINLINE static uint32 __PPO__ChildIndex() { return STRUCT_OFFSET(UHoudiniParameter, ChildIndex); } \
	FORCEINLINE static uint32 __PPO__bIsVisible() { return STRUCT_OFFSET(UHoudiniParameter, bIsVisible); } \
	FORCEINLINE static uint32 __PPO__bIsParentFolderVisible() { return STRUCT_OFFSET(UHoudiniParameter, bIsParentFolderVisible); } \
	FORCEINLINE static uint32 __PPO__bIsDisabled() { return STRUCT_OFFSET(UHoudiniParameter, bIsDisabled); } \
	FORCEINLINE static uint32 __PPO__bHasChanged() { return STRUCT_OFFSET(UHoudiniParameter, bHasChanged); } \
	FORCEINLINE static uint32 __PPO__bNeedsToTriggerUpdate() { return STRUCT_OFFSET(UHoudiniParameter, bNeedsToTriggerUpdate); } \
	FORCEINLINE static uint32 __PPO__bIsDefault() { return STRUCT_OFFSET(UHoudiniParameter, bIsDefault); } \
	FORCEINLINE static uint32 __PPO__bIsSpare() { return STRUCT_OFFSET(UHoudiniParameter, bIsSpare); } \
	FORCEINLINE static uint32 __PPO__bJoinNext() { return STRUCT_OFFSET(UHoudiniParameter, bJoinNext); } \
	FORCEINLINE static uint32 __PPO__bIsChildOfMultiParm() { return STRUCT_OFFSET(UHoudiniParameter, bIsChildOfMultiParm); } \
	FORCEINLINE static uint32 __PPO__bIsDirectChildOfMultiParm() { return STRUCT_OFFSET(UHoudiniParameter, bIsDirectChildOfMultiParm); } \
	FORCEINLINE static uint32 __PPO__bPendingRevertToDefault() { return STRUCT_OFFSET(UHoudiniParameter, bPendingRevertToDefault); } \
	FORCEINLINE static uint32 __PPO__TuplePendingRevertToDefault() { return STRUCT_OFFSET(UHoudiniParameter, TuplePendingRevertToDefault); } \
	FORCEINLINE static uint32 __PPO__Help() { return STRUCT_OFFSET(UHoudiniParameter, Help); } \
	FORCEINLINE static uint32 __PPO__TagCount() { return STRUCT_OFFSET(UHoudiniParameter, TagCount); } \
	FORCEINLINE static uint32 __PPO__ValueIndex() { return STRUCT_OFFSET(UHoudiniParameter, ValueIndex); } \
	FORCEINLINE static uint32 __PPO__bHasExpression() { return STRUCT_OFFSET(UHoudiniParameter, bHasExpression); } \
	FORCEINLINE static uint32 __PPO__bShowExpression() { return STRUCT_OFFSET(UHoudiniParameter, bShowExpression); } \
	FORCEINLINE static uint32 __PPO__ParamExpression() { return STRUCT_OFFSET(UHoudiniParameter, ParamExpression); } \
	FORCEINLINE static uint32 __PPO__Tags() { return STRUCT_OFFSET(UHoudiniParameter, Tags); } \
	FORCEINLINE static uint32 __PPO__bAutoUpdate() { return STRUCT_OFFSET(UHoudiniParameter, bAutoUpdate); }


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_67_PROLOG
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_PRIVATE_PROPERTY_OFFSET \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_SPARSE_DATA \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_RPC_WRAPPERS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_INCLASS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_PRIVATE_PROPERTY_OFFSET \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_SPARSE_DATA \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_INCLASS_NO_PURE_DECLS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HoudiniParameter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h


#define FOREACH_ENUM_EHOUDINIPARAMETERTYPE(op) \
	op(EHoudiniParameterType::Invalid) \
	op(EHoudiniParameterType::Button) \
	op(EHoudiniParameterType::ButtonStrip) \
	op(EHoudiniParameterType::Color) \
	op(EHoudiniParameterType::ColorRamp) \
	op(EHoudiniParameterType::File) \
	op(EHoudiniParameterType::FileDir) \
	op(EHoudiniParameterType::FileGeo) \
	op(EHoudiniParameterType::FileImage) \
	op(EHoudiniParameterType::Float) \
	op(EHoudiniParameterType::FloatRamp) \
	op(EHoudiniParameterType::Folder) \
	op(EHoudiniParameterType::FolderList) \
	op(EHoudiniParameterType::Input) \
	op(EHoudiniParameterType::Int) \
	op(EHoudiniParameterType::IntChoice) \
	op(EHoudiniParameterType::Label) \
	op(EHoudiniParameterType::MultiParm) \
	op(EHoudiniParameterType::Separator) \
	op(EHoudiniParameterType::String) \
	op(EHoudiniParameterType::StringChoice) \
	op(EHoudiniParameterType::StringAssetRef) \
	op(EHoudiniParameterType::Toggle) 

enum class EHoudiniParameterType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
