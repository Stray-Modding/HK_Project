// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniHandleParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniHandleParameter() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
// End Cross Module References
	void UHoudiniHandleParameter::StaticRegisterNativesUHoudiniHandleParameter()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister()
	{
		return UHoudiniHandleParameter::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniHandleParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TupleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TupleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniHandleParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniHandleParameter.h" },
		{ "ModuleRelativePath", "Public/HoudiniHandleParameter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniHandleParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter = { "AssetParameter", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleParameter, AssetParameter), Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniHandleParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex = { "TupleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleParameter, TupleIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniHandleParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams = {
		&UHoudiniHandleParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniHandleParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniHandleParameter, 4051347955);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleParameter>()
	{
		return UHoudiniHandleParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniHandleParameter(Z_Construct_UClass_UHoudiniHandleParameter, &UHoudiniHandleParameter::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniHandleParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
