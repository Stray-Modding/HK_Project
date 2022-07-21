// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniInputActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputActor() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputActor();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UHoudiniInputActor::StaticRegisterNativesUHoudiniInputActor()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInputActor_NoRegister()
	{
		return UHoudiniInputActor::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniInputActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorComponents;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActorSceneComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSceneComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ActorSceneComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateNumComponentsRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastUpdateNumComponentsRemoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniInputActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniInputObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniInputActor.h" },
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_Inner = { "ActorComponents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInputSceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents = { "ActorComponents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputActor, ActorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_ElementProp = { "ActorSceneComponents", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents = { "ActorSceneComponents", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputActor, ActorSceneComponents), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded = { "LastUpdateNumComponentsAdded", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputActor, LastUpdateNumComponentsAdded), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniInputActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved = { "LastUpdateNumComponentsRemoved", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniInputActor, LastUpdateNumComponentsRemoved), METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_ActorSceneComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniInputActor_Statics::NewProp_LastUpdateNumComponentsRemoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniInputActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniInputActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniInputActor_Statics::ClassParams = {
		&UHoudiniInputActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniInputActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniInputActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniInputActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInputActor, 1511436727);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniInputActor>()
	{
		return UHoudiniInputActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInputActor(Z_Construct_UClass_UHoudiniInputActor, &UHoudiniInputActor::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInputActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInputActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
