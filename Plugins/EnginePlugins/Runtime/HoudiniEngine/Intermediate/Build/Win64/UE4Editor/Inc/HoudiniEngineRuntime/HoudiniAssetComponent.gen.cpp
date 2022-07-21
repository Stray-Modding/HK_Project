// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister();
// End Cross Module References
	void UHoudiniAssetComponent::StaticRegisterNativesUHoudiniAssetComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister()
	{
		return UHoudiniAssetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookOnParameterChange_MetaData[];
#endif
		static void NewProp_bCookOnParameterChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnParameterChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUploadTransformsToHoudiniEngine_MetaData[];
#endif
		static void NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUploadTransformsToHoudiniEngine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookOnTransformChange_MetaData[];
#endif
		static void NewProp_bCookOnTransformChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnTransformChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookOnAssetInputCook_MetaData[];
#endif
		static void NewProp_bCookOnAssetInputCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnAssetInputCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputless_MetaData[];
#endif
		static void NewProp_bOutputless_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputless;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputTemplateGeos_MetaData[];
#endif
		static void NewProp_bOutputTemplateGeos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputTemplateGeos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOutputNodes_MetaData[];
#endif
		static void NewProp_bUseOutputNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOutputNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemporaryCookFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemporaryCookFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakeFolder;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StaticMeshMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StaticMeshMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshGenerationProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshGenerationProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBuildSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshBuildSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData[];
#endif
		static void NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalProxyStaticMeshSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementByTimerOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData[];
#endif
		static void NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIdsToCook_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIdsToCook_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeIdsToCook;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputNodeCookCounts_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputNodeCookCounts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputNodeCookCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutputNodeCookCounts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownstreamHoudiniAssets_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownstreamHoudiniAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_DownstreamHoudiniAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapiGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HapiGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapiAssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HapiAssetName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugLastAssetState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLastAssetState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebugLastAssetState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetStateResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetStateResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetStateResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubAssetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SubAssetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetCookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetCookCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenLoaded_MetaData[];
#endif
		static void NewProp_bHasBeenLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenDuplicated_MetaData[];
#endif
		static void NewProp_bHasBeenDuplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenDuplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingDelete_MetaData[];
#endif
		static void NewProp_bPendingDelete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingDelete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecookRequested_MetaData[];
#endif
		static void NewProp_bRecookRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecookRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRebuildRequested_MetaData[];
#endif
		static void NewProp_bRebuildRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCooking_MetaData[];
#endif
		static void NewProp_bEnableCooking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCooking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNeedUpdate_MetaData[];
#endif
		static void NewProp_bForceNeedUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNeedUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastCookSuccess_MetaData[];
#endif
		static void NewProp_bLastCookSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastCookSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParameterDefinitionUpdateNeeded_MetaData[];
#endif
		static void NewProp_bParameterDefinitionUpdateNeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParameterDefinitionUpdateNeeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlueprintStructureModified_MetaData[];
#endif
		static void NewProp_bBlueprintStructureModified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlueprintStructureModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlueprintModified_MetaData[];
#endif
		static void NewProp_bBlueprintModified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlueprintModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_UntrackedOutputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UntrackedOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UntrackedOutputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandleComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandleComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasComponentTransformChanged_MetaData[];
#endif
		static void NewProp_bHasComponentTransformChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasComponentTransformChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullyLoaded_MetaData[];
#endif
		static void NewProp_bFullyLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullyLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDGAssetLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PDGAssetLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefineMeshesTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefineMeshesTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoProxyMeshNextCookRequested_MetaData[];
#endif
		static void NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoProxyMeshNextCookRequested;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputPresets_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPresets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPresets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InputPresets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeAfterNextCook_MetaData[];
#endif
		static void NewProp_bBakeAfterNextCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeAfterNextCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedIsPreview_MetaData[];
#endif
		static void NewProp_bCachedIsPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedIsPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_LastTickTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "HoudiniAssetComponent.h" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bCookOnParameterChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange = { "bCookOnParameterChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bUploadTransformsToHoudiniEngine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine = { "bUploadTransformsToHoudiniEngine", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bCookOnTransformChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange = { "bCookOnTransformChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bCookOnAssetInputCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook = { "bCookOnAssetInputCook", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bOutputless = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless = { "bOutputless", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bOutputTemplateGeos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos = { "bOutputTemplateGeos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bUseOutputNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes = { "bUseOutputNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder = { "TemporaryCookFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, TemporaryCookFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, BakeFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod = { "StaticMeshMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, StaticMeshMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniStaticMeshMethod, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshGenerationProperties_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshGenerationProperties = { "StaticMeshGenerationProperties", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, StaticMeshGenerationProperties), Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshGenerationProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshGenerationProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshBuildSettings_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshBuildSettings = { "StaticMeshBuildSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, StaticMeshBuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshBuildSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshBuildSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bOverrideGlobalProxyStaticMeshSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings = { "bOverrideGlobalProxyStaticMeshSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride = { "bEnableProxyStaticMeshOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementByTimerOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride = { "bEnableProxyStaticMeshRefinementByTimerOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride = { "ProxyMeshAutoRefineTimeoutSecondsOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ProxyMeshAutoRefineTimeoutSecondsOverride), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = { "bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData[] = {
		{ "Category", "HoudiniAssetComponent" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = { "bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetId), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook_Inner = { "NodeIdsToCook", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook = { "NodeIdsToCook", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, NodeIdsToCook), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_ValueProp = { "OutputNodeCookCounts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_Key_KeyProp = { "OutputNodeCookCounts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts = { "OutputNodeCookCounts", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, OutputNodeCookCounts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_ElementProp = { "DownstreamHoudiniAssets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets = { "DownstreamHoudiniAssets", nullptr, (EPropertyFlags)0x0020088000200008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, DownstreamHoudiniAssets), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, ComponentGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID = { "HapiGUID", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HapiGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiAssetName = { "HapiAssetName", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HapiAssetName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiAssetName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState = { "AssetState", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState = { "DebugLastAssetState", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, DebugLastAssetState), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult = { "AssetStateResult", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetStateResult), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex = { "SubAssetIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, SubAssetIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount = { "AssetCookCount", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, AssetCookCount), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bHasBeenLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded = { "bHasBeenLoaded", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bHasBeenDuplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated = { "bHasBeenDuplicated", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bPendingDelete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete = { "bPendingDelete", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bRecookRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested = { "bRecookRequested", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bRebuildRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested = { "bRebuildRequested", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bEnableCooking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking = { "bEnableCooking", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bForceNeedUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate = { "bForceNeedUpdate", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bLastCookSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess = { "bLastCookSuccess", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bParameterDefinitionUpdateNeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded = { "bParameterDefinitionUpdateNeeded", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bBlueprintStructureModified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified = { "bBlueprintStructureModified", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bBlueprintModified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified = { "bBlueprintModified", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_Inner = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_MetaData[] = {
		{ "Comment", "/*UPROPERTY()\n    TArray<FHoudiniBakedOutput> BakedOutputs;*/" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
		{ "ToolTip", "UPROPERTY()\n    TArray<FHoudiniBakedOutput> BakedOutputs;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs = { "UntrackedOutputs", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, UntrackedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner = { "HandleComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents = { "HandleComponents", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, HandleComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bHasComponentTransformChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged = { "bHasComponentTransformChanged", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bFullyLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded = { "bFullyLoaded", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink = { "PDGAssetLink", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, PDGAssetLink), Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer = { "RefineMeshesTimer", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, RefineMeshesTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bNoProxyMeshNextCookRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested = { "bNoProxyMeshNextCookRequested", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_ValueProp = { "InputPresets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_Key_KeyProp = { "InputPresets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets = { "InputPresets", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, InputPresets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bBakeAfterNextCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook = { "bBakeAfterNextCook", nullptr, (EPropertyFlags)0x0020080000200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_SetBit(void* Obj)
	{
		((UHoudiniAssetComponent*)Obj)->bCachedIsPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview = { "bCachedIsPreview", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetComponent), &Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastTickTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastTickTime = { "LastTickTime", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetComponent, LastTickTime), METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastTickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastTickTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HoudiniAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnParameterChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUploadTransformsToHoudiniEngine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnTransformChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCookOnAssetInputCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputless,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOutputTemplateGeos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bUseOutputNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_TemporaryCookFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_BakeFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshGenerationProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_StaticMeshBuildSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bOverrideGlobalProxyStaticMeshSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementByTimerOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ProxyMeshAutoRefineTimeoutSecondsOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_NodeIdsToCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_OutputNodeCookCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DownstreamHoudiniAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_ComponentGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HapiAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_DebugLastAssetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetStateResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_SubAssetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_AssetCookCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasBeenDuplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bPendingDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRecookRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bRebuildRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bEnableCooking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bForceNeedUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bLastCookSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bParameterDefinitionUpdateNeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintStructureModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBlueprintModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_UntrackedOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_HandleComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bHasComponentTransformChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bFullyLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_PDGAssetLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_RefineMeshesTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bNoProxyMeshNextCookRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_InputPresets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bBakeAfterNextCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_bCachedIsPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetComponent_Statics::NewProp_LastTickTime,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister, (int32)VTABLE_OFFSET(UHoudiniAssetComponent, IHoudiniAssetStateEvents), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetComponent_Statics::ClassParams = {
		&UHoudiniAssetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniAssetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetComponent, 684656782);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetComponent>()
	{
		return UHoudiniAssetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetComponent(Z_Construct_UClass_UHoudiniAssetComponent, &UHoudiniAssetComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
