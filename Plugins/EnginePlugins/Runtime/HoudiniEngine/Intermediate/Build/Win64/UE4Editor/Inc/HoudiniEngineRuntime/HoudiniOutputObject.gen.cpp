// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniOutputObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniOutputObject() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties();
// End Cross Module References
class UScriptStruct* FHoudiniOutputObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniOutputObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniOutputObject, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniOutputObject"), sizeof(FHoudiniOutputObject), Get_Z_Construct_UScriptStruct_FHoudiniOutputObject_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniOutputObject>()
{
	return FHoudiniOutputObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniOutputObject(FHoudiniOutputObject::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniOutputObject"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniOutputObject
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniOutputObject()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniOutputObject>(FName(TEXT("HoudiniOutputObject")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniOutputObject;
	struct Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProxyObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProxyComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProxyIsCurrent_MetaData[];
#endif
		static void NewProp_bProxyIsCurrent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProxyIsCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsImplicit_MetaData[];
#endif
		static void NewProp_bIsImplicit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsImplicit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGeometryCollectionPiece_MetaData[];
#endif
		static void NewProp_bIsGeometryCollectionPiece_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGeometryCollectionPiece;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionPieceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GeometryCollectionPieceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BakeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveOutputProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveOutputProperty;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedAttributes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedTokens_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedTokens_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedTokens;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniOutputObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject = { "OutputObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniOutputObject, OutputObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent = { "OutputComponent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniOutputObject, OutputComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject = { "ProxyObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniOutputObject, ProxyObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent = { "ProxyComponent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniOutputObject, ProxyComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_SetBit(void* Obj)
	{
		((FHoudiniOutputObject*)Obj)->bProxyIsCurrent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent = { "bProxyIsCurrent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_SetBit(void* Obj)
	{
		((FHoudiniOutputObject*)Obj)->bIsImplicit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit = { "bIsImplicit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_SetBit(void* Obj)
	{
		((FHoudiniOutputObject*)Obj)->bIsGeometryCollectionPiece = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece = { "bIsGeometryCollectionPiece", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName = { "GeometryCollectionPieceName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniOutputObject, GeometryCollectionPieceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName = { "BakeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniOutputObject, BakeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty = { "CurveOutputProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniOutputObject, CurveOutputProperty), Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_ValueProp = { "CachedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp = { "CachedAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes = { "CachedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniOutputObject, CachedAttributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_ValueProp = { "CachedTokens", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_Key_KeyProp = { "CachedTokens_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniOutputObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens = { "CachedTokens", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniOutputObject, CachedTokens), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniOutputObject",
		sizeof(FHoudiniOutputObject),
		alignof(FHoudiniOutputObject),
		Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniOutputObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniOutputObject"), sizeof(FHoudiniOutputObject), Get_Z_Construct_UScriptStruct_FHoudiniOutputObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniOutputObject_Hash() { return 3573735356U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
