// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFolderList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterFolderList() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolderList_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolderList();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister();
// End Cross Module References
	void UHoudiniParameterFolderList::StaticRegisterNativesUHoudiniParameterFolderList()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterFolderList_NoRegister()
	{
		return UHoudiniParameterFolderList::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterFolderList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTabMenu_MetaData[];
#endif
		static void NewProp_bIsTabMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTabMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTabsShown_MetaData[];
#endif
		static void NewProp_bIsTabsShown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTabsShown;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabFolders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabFolders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TabFolders;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterFolderList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolderList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterFolderList.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterFolderList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolderList.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu_SetBit(void* Obj)
	{
		((UHoudiniParameterFolderList*)Obj)->bIsTabMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu = { "bIsTabMenu", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterFolderList), &Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolderList.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown_SetBit(void* Obj)
	{
		((UHoudiniParameterFolderList*)Obj)->bIsTabsShown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown = { "bIsTabsShown", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterFolderList), &Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders_Inner = { "TabFolders", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterFolderList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders = { "TabFolders", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterFolderList, TabFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterFolderList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterFolderList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterFolderList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::ClassParams = {
		&UHoudiniParameterFolderList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterFolderList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterFolderList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterFolderList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterFolderList, 3135678556);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterFolderList>()
	{
		return UHoudiniParameterFolderList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterFolderList(Z_Construct_UClass_UHoudiniParameterFolderList, &UHoudiniParameterFolderList::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterFolderList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterFolderList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
