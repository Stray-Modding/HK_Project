// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniHandleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniHandleComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType();
// End Cross Module References
	void UHoudiniHandleComponent::StaticRegisterNativesUHoudiniHandleComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister()
	{
		return UHoudiniHandleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniHandleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XformParms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XformParms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_XformParms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RSTParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RSTParm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotOrderParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotOrderParm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HandleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniHandleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniHandleComponent.h" },
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner = { "XformParms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms = { "XformParms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, XformParms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm = { "RSTParm", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RSTParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm = { "RotOrderParm", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RotOrderParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType = { "HandleType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName = { "HandleName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniHandleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams = {
		&UHoudiniHandleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniHandleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniHandleComponent, 2040702209);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleComponent>()
	{
		return UHoudiniHandleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniHandleComponent(Z_Construct_UClass_UHoudiniHandleComponent, &UHoudiniHandleComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniHandleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
