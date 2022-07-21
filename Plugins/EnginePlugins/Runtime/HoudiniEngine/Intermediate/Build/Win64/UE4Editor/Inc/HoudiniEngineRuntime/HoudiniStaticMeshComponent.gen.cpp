// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniStaticMeshComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniStaticMeshComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execSetHoudiniIconVisible)
	{
		P_GET_UBOOL(Z_Param_bInHoudiniIconVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoudiniIconVisible(Z_Param_bInHoudiniIconVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execIsHoudiniIconVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHoudiniIconVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execNotifyMeshUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyMeshUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoudiniStaticMesh**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execSetMesh)
	{
		P_GET_OBJECT(UHoudiniStaticMesh,Z_Param_InMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMesh(Z_Param_InMesh);
		P_NATIVE_END;
	}
	void UHoudiniStaticMeshComponent::StaticRegisterNativesUHoudiniStaticMeshComponent()
	{
		UClass* Class = UHoudiniStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMesh", &UHoudiniStaticMeshComponent::execGetMesh },
			{ "IsHoudiniIconVisible", &UHoudiniStaticMeshComponent::execIsHoudiniIconVisible },
			{ "NotifyMeshUpdated", &UHoudiniStaticMeshComponent::execNotifyMeshUpdated },
			{ "SetHoudiniIconVisible", &UHoudiniStaticMeshComponent::execSetHoudiniIconVisible },
			{ "SetMesh", &UHoudiniStaticMeshComponent::execSetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics
	{
		struct HoudiniStaticMeshComponent_eventGetMesh_Parms
		{
			UHoudiniStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMeshComponent_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UHoudiniStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "GetMesh", nullptr, nullptr, sizeof(HoudiniStaticMeshComponent_eventGetMesh_Parms), Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics
	{
		struct HoudiniStaticMeshComponent_eventIsHoudiniIconVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniStaticMeshComponent_eventIsHoudiniIconVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMeshComponent_eventIsHoudiniIconVisible_Parms), &Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "IsHoudiniIconVisible", nullptr, nullptr, sizeof(HoudiniStaticMeshComponent_eventIsHoudiniIconVisible_Parms), Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Call this if the mesh updated (outside of calling SetMesh).\n" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
		{ "ToolTip", "Call this if the mesh updated (outside of calling SetMesh)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "NotifyMeshUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics
	{
		struct HoudiniStaticMeshComponent_eventSetHoudiniIconVisible_Parms
		{
			bool bInHoudiniIconVisible;
		};
		static void NewProp_bInHoudiniIconVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHoudiniIconVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::NewProp_bInHoudiniIconVisible_SetBit(void* Obj)
	{
		((HoudiniStaticMeshComponent_eventSetHoudiniIconVisible_Parms*)Obj)->bInHoudiniIconVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::NewProp_bInHoudiniIconVisible = { "bInHoudiniIconVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMeshComponent_eventSetHoudiniIconVisible_Parms), &Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::NewProp_bInHoudiniIconVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::NewProp_bInHoudiniIconVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "SetHoudiniIconVisible", nullptr, nullptr, sizeof(HoudiniStaticMeshComponent_eventSetHoudiniIconVisible_Parms), Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics
	{
		struct HoudiniStaticMeshComponent_eventSetMesh_Parms
		{
			UHoudiniStaticMesh* InMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMeshComponent_eventSetMesh_Parms, InMesh), Z_Construct_UClass_UHoudiniStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::NewProp_InMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "SetMesh", nullptr, nullptr, sizeof(HoudiniStaticMeshComponent_eventSetMesh_Parms), Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniStaticMeshComponent_NoRegister()
	{
		return UHoudiniStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHoudiniIconVisible_MetaData[];
#endif
		static void NewProp_bHoudiniIconVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHoudiniIconVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh, "GetMesh" }, // 2766388976
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible, "IsHoudiniIconVisible" }, // 4143894295
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated, "NotifyMeshUpdated" }, // 1904992431
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible, "SetHoudiniIconVisible" }, // 3193714774
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh, "SetMesh" }, // 3752970157
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Houdini Engine | Rendering" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "HoudiniStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The mesh. */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
		{ "ToolTip", "The mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMeshComponent, Mesh), Z_Construct_UClass_UHoudiniStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "Comment", "/** Local space bounds of mesh. */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
		{ "ToolTip", "Local space bounds of mesh." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_LocalBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible_MetaData[] = {
		{ "Category", "Icons" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible_SetBit(void* Obj)
	{
		((UHoudiniStaticMeshComponent*)Obj)->bHoudiniIconVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible = { "bHoudiniIconVisible", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniStaticMeshComponent), &Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_LocalBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::ClassParams = {
		&UHoudiniStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniStaticMeshComponent, 2206187406);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniStaticMeshComponent>()
	{
		return UHoudiniStaticMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniStaticMeshComponent(Z_Construct_UClass_UHoudiniStaticMeshComponent, &UHoudiniStaticMeshComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
