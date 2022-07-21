// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetBlueprintComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetBlueprintComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniAssetBlueprintComponent::execHasParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasParameter(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniAssetBlueprintComponent::execSetFloatParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameter(Z_Param_Name,Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniAssetBlueprintComponent::execSetToggleValueAt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleValueAt(Z_Param_Name,Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	void UHoudiniAssetBlueprintComponent::StaticRegisterNativesUHoudiniAssetBlueprintComponent()
	{
		UClass* Class = UHoudiniAssetBlueprintComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasParameter", &UHoudiniAssetBlueprintComponent::execHasParameter },
			{ "SetFloatParameter", &UHoudiniAssetBlueprintComponent::execSetFloatParameter },
			{ "SetToggleValueAt", &UHoudiniAssetBlueprintComponent::execSetToggleValueAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics
	{
		struct HoudiniAssetBlueprintComponent_eventHasParameter_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventHasParameter_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniAssetBlueprintComponent_eventHasParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniAssetBlueprintComponent_eventHasParameter_Parms), &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetBlueprintComponent, nullptr, "HasParameter", nullptr, nullptr, sizeof(HoudiniAssetBlueprintComponent_eventHasParameter_Parms), Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics
	{
		struct HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms
		{
			FString Name;
			float Value;
			int32 Index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetBlueprintComponent, nullptr, "SetFloatParameter", nullptr, nullptr, sizeof(HoudiniAssetBlueprintComponent_eventSetFloatParameter_Parms), Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics
	{
		struct HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms
		{
			FString Name;
			bool Value;
			int32 Index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms), &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetBlueprintComponent, nullptr, "SetToggleValueAt", nullptr, nullptr, sizeof(HoudiniAssetBlueprintComponent_eventSetToggleValueAt_Parms), Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent_NoRegister()
	{
		return UHoudiniAssetBlueprintComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FauxBPProperty_MetaData[];
#endif
		static void NewProp_FauxBPProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FauxBPProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHoudiniAssetChanged_MetaData[];
#endif
		static void NewProp_bHoudiniAssetChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHoudiniAssetChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatedFromTemplate_MetaData[];
#endif
		static void NewProp_bUpdatedFromTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatedFromTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInBlueprintEditor_MetaData[];
#endif
		static void NewProp_bIsInBlueprintEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInBlueprintEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[];
#endif
		static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRegisteredComponentTemplate_MetaData[];
#endif
		static void NewProp_bHasRegisteredComponentTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRegisteredComponentTemplate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedOutputNodes_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedOutputNodes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedOutputNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedOutputNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedInputNodes_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedInputNodes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedInputNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedInputNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniAssetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_HasParameter, "HasParameter" }, // 1591972345
		{ &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetFloatParameter, "SetFloatParameter" }, // 3444156316
		{ &Z_Construct_UFunction_UHoudiniAssetBlueprintComponent_SetToggleValueAt, "SetToggleValueAt" }, // 1189716327
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "HoudiniAssetBlueprintComponent.h" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->FauxBPProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty = { "FauxBPProperty", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bHoudiniAssetChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged = { "bHoudiniAssetChanged", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bUpdatedFromTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate = { "bUpdatedFromTemplate", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bIsInBlueprintEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor = { "bIsInBlueprintEditor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bCanDeleteHoudiniNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_SetBit(void* Obj)
	{
		((UHoudiniAssetBlueprintComponent*)Obj)->bHasRegisteredComponentTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate = { "bHasRegisteredComponentTemplate", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetBlueprintComponent), &Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_ValueProp = { "CachedOutputNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_Key_KeyProp = { "CachedOutputNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes = { "CachedOutputNodes", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedOutputNodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_ValueProp = { "CachedInputNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_Key_KeyProp = { "CachedInputNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes = { "CachedInputNodes", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetBlueprintComponent, CachedInputNodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_FauxBPProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHoudiniAssetChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bUpdatedFromTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bIsInBlueprintEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bCanDeleteHoudiniNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_bHasRegisteredComponentTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedOutputNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::NewProp_CachedInputNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetBlueprintComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::ClassParams = {
		&UHoudiniAssetBlueprintComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetBlueprintComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetBlueprintComponent, 2254455256);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetBlueprintComponent>()
	{
		return UHoudiniAssetBlueprintComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetBlueprintComponent(Z_Construct_UClass_UHoudiniAssetBlueprintComponent, &UHoudiniAssetBlueprintComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetBlueprintComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetBlueprintComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
