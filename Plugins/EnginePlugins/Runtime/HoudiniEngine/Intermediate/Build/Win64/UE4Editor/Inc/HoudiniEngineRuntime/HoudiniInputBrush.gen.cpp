// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputBrush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputBrush() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBrush_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputBrush();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBrushInfo();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
// End Cross Module References
	void UHoudiniInputBrush::StaticRegisterNativesUHoudiniInputBrush()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputBrush_NoRegister()
	{
		return UHoudiniInputBrush::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushesInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushesInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BrushesInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombinedModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInputObject_MetaData[];
#endif
		static void NewProp_bIgnoreInputObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInputObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedInputBrushType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CachedInputBrushType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniInputBrush.h" },
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_Inner = { "BrushesInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniBrushInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo = { "BrushesInfo", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBrush, BrushesInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel = { "CombinedModel", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBrush, CombinedModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_SetBit(void* Obj)
	{
		((UHoudiniInputBrush*)Obj)->bIgnoreInputObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject = { "bIgnoreInputObject", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniInputBrush), &Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType = { "CachedInputBrushType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputBrush, CachedInputBrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_BrushesInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CombinedModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_bIgnoreInputObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputBrush_Statics::NewProp_CachedInputBrushType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputBrush>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputBrush_Statics::ClassParams = {
		&UHoudiniInputBrush::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputBrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputBrush()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputBrush_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputBrush, 2246386191);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputBrush>()
	{
		return UHoudiniInputBrush::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputBrush(Z_Construct_UClass_UHoudiniInputBrush, &UHoudiniInputBrush::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputBrush"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputBrush);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
