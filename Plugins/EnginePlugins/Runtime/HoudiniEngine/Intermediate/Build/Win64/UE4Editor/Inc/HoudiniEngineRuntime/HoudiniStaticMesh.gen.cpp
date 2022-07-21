// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniStaticMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniStaticMesh() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniStaticMesh_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniStaticMesh();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniStaticMesh::execIsValid)
	{
		P_GET_UBOOL(Z_Param_bInSkipVertexIndicesCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid(Z_Param_bInSkipVertexIndicesCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetMaterialIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InMaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_InMaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_InMaterialIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetStaticMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FStaticMaterial>*)Z_Param__Result=P_THIS->GetStaticMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetMaterialIDsPerTriangle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetMaterialIDsPerTriangle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetVertexInstanceUVs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=P_THIS->GetVertexInstanceUVs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetVertexInstanceVTangents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVertexInstanceVTangents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetVertexInstanceUTangents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVertexInstanceUTangents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetVertexInstanceNormals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVertexInstanceNormals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetVertexInstanceColors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=P_THIS->GetVertexInstanceColors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetTriangleIndices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FIntVector>*)Z_Param__Result=P_THIS->GetTriangleIndices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetVertexPositions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVertexPositions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execCalcBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->CalcBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execOptimize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Optimize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execCalculateTangents)
	{
		P_GET_UBOOL(Z_Param_bInComputeWeightedNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateTangents(Z_Param_bInComputeWeightedNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execCalculateNormals)
	{
		P_GET_UBOOL(Z_Param_bInComputeWeightedNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateNormals(Z_Param_bInComputeWeightedNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execAddStaticMaterial)
	{
		P_GET_STRUCT_REF(FStaticMaterial,Z_Param_Out_InStaticMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->AddStaticMaterial(Z_Param_Out_InStaticMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetStaticMaterial)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InMaterialIndex);
		P_GET_STRUCT_REF(FStaticMaterial,Z_Param_Out_InStaticMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaticMaterial(Z_Param_InMaterialIndex,Z_Param_Out_InStaticMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetTriangleMaterialID)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InTriangleIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaterialID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriangleMaterialID(Z_Param_InTriangleIndex,Z_Param_InMaterialID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetTriangleVertexUV)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InTriangleIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_InTriangleVertexIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_InUVLayer);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InUV);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriangleVertexUV(Z_Param_InTriangleIndex,Z_Param_InTriangleVertexIndex,Z_Param_InUVLayer,Z_Param_Out_InUV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetTriangleVertexColor)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InTriangleIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_InTriangleVertexIndex);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriangleVertexColor(Z_Param_InTriangleIndex,Z_Param_InTriangleVertexIndex,Z_Param_Out_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetTriangleVertexVTangent)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InTriangleIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_InTriangleVertexIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriangleVertexVTangent(Z_Param_InTriangleIndex,Z_Param_InTriangleVertexIndex,Z_Param_Out_InVTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetTriangleVertexUTangent)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InTriangleIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_InTriangleVertexIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InUTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriangleVertexUTangent(Z_Param_InTriangleIndex,Z_Param_InTriangleVertexIndex,Z_Param_Out_InUTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetTriangleVertexNormal)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InTriangleIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_InTriangleVertexIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriangleVertexNormal(Z_Param_InTriangleIndex,Z_Param_InTriangleVertexIndex,Z_Param_Out_InNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetTriangleVertexIndices)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InTriangleIndex);
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_InTriangleVertexIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriangleVertexIndices(Z_Param_InTriangleIndex,Z_Param_Out_InTriangleVertexIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetVertexPosition)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InVertexIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexPosition(Z_Param_InVertexIndex,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetNumVertexInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->GetNumVertexInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetNumTriangles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->GetNumTriangles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetNumVertices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->GetNumVertices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetNumStaticMaterials)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InNumStaticMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumStaticMaterials(Z_Param_InNumStaticMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetNumStaticMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->GetNumStaticMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetNumUVLayers)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InNumUVLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumUVLayers(Z_Param_InNumUVLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execGetNumUVLayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->GetNumUVLayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetHasColors)
	{
		P_GET_UBOOL(Z_Param_bInHasColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasColors(Z_Param_bInHasColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execHasColors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasColors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetHasTangents)
	{
		P_GET_UBOOL(Z_Param_bInHasTangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasTangents(Z_Param_bInHasTangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execHasTangents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTangents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetHasNormals)
	{
		P_GET_UBOOL(Z_Param_bInHasNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasNormals(Z_Param_bInHasNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execHasNormals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNormals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execSetHasPerFaceMaterials)
	{
		P_GET_UBOOL(Z_Param_bInHasPerFaceMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasPerFaceMaterials(Z_Param_bInHasPerFaceMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execHasPerFaceMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPerFaceMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniStaticMesh::execInitialize)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InNumVertices);
		P_GET_PROPERTY(FUInt32Property,Z_Param_InNumTriangles);
		P_GET_PROPERTY(FUInt32Property,Z_Param_InNumUVLayers);
		P_GET_PROPERTY(FUInt32Property,Z_Param_InInitialNumStaticMaterials);
		P_GET_UBOOL(Z_Param_bInHasNormals);
		P_GET_UBOOL(Z_Param_bInHasTangents);
		P_GET_UBOOL(Z_Param_bInHasColors);
		P_GET_UBOOL(Z_Param_bInHasPerFaceMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InNumVertices,Z_Param_InNumTriangles,Z_Param_InNumUVLayers,Z_Param_InInitialNumStaticMaterials,Z_Param_bInHasNormals,Z_Param_bInHasTangents,Z_Param_bInHasColors,Z_Param_bInHasPerFaceMaterials);
		P_NATIVE_END;
	}
	void UHoudiniStaticMesh::StaticRegisterNativesUHoudiniStaticMesh()
	{
		UClass* Class = UHoudiniStaticMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStaticMaterial", &UHoudiniStaticMesh::execAddStaticMaterial },
			{ "CalcBounds", &UHoudiniStaticMesh::execCalcBounds },
			{ "CalculateNormals", &UHoudiniStaticMesh::execCalculateNormals },
			{ "CalculateTangents", &UHoudiniStaticMesh::execCalculateTangents },
			{ "GetMaterial", &UHoudiniStaticMesh::execGetMaterial },
			{ "GetMaterialIDsPerTriangle", &UHoudiniStaticMesh::execGetMaterialIDsPerTriangle },
			{ "GetMaterialIndex", &UHoudiniStaticMesh::execGetMaterialIndex },
			{ "GetNumStaticMaterials", &UHoudiniStaticMesh::execGetNumStaticMaterials },
			{ "GetNumTriangles", &UHoudiniStaticMesh::execGetNumTriangles },
			{ "GetNumUVLayers", &UHoudiniStaticMesh::execGetNumUVLayers },
			{ "GetNumVertexInstances", &UHoudiniStaticMesh::execGetNumVertexInstances },
			{ "GetNumVertices", &UHoudiniStaticMesh::execGetNumVertices },
			{ "GetStaticMaterials", &UHoudiniStaticMesh::execGetStaticMaterials },
			{ "GetTriangleIndices", &UHoudiniStaticMesh::execGetTriangleIndices },
			{ "GetVertexInstanceColors", &UHoudiniStaticMesh::execGetVertexInstanceColors },
			{ "GetVertexInstanceNormals", &UHoudiniStaticMesh::execGetVertexInstanceNormals },
			{ "GetVertexInstanceUTangents", &UHoudiniStaticMesh::execGetVertexInstanceUTangents },
			{ "GetVertexInstanceUVs", &UHoudiniStaticMesh::execGetVertexInstanceUVs },
			{ "GetVertexInstanceVTangents", &UHoudiniStaticMesh::execGetVertexInstanceVTangents },
			{ "GetVertexPositions", &UHoudiniStaticMesh::execGetVertexPositions },
			{ "HasColors", &UHoudiniStaticMesh::execHasColors },
			{ "HasNormals", &UHoudiniStaticMesh::execHasNormals },
			{ "HasPerFaceMaterials", &UHoudiniStaticMesh::execHasPerFaceMaterials },
			{ "HasTangents", &UHoudiniStaticMesh::execHasTangents },
			{ "Initialize", &UHoudiniStaticMesh::execInitialize },
			{ "IsValid", &UHoudiniStaticMesh::execIsValid },
			{ "Optimize", &UHoudiniStaticMesh::execOptimize },
			{ "SetHasColors", &UHoudiniStaticMesh::execSetHasColors },
			{ "SetHasNormals", &UHoudiniStaticMesh::execSetHasNormals },
			{ "SetHasPerFaceMaterials", &UHoudiniStaticMesh::execSetHasPerFaceMaterials },
			{ "SetHasTangents", &UHoudiniStaticMesh::execSetHasTangents },
			{ "SetNumStaticMaterials", &UHoudiniStaticMesh::execSetNumStaticMaterials },
			{ "SetNumUVLayers", &UHoudiniStaticMesh::execSetNumUVLayers },
			{ "SetStaticMaterial", &UHoudiniStaticMesh::execSetStaticMaterial },
			{ "SetTriangleMaterialID", &UHoudiniStaticMesh::execSetTriangleMaterialID },
			{ "SetTriangleVertexColor", &UHoudiniStaticMesh::execSetTriangleVertexColor },
			{ "SetTriangleVertexIndices", &UHoudiniStaticMesh::execSetTriangleVertexIndices },
			{ "SetTriangleVertexNormal", &UHoudiniStaticMesh::execSetTriangleVertexNormal },
			{ "SetTriangleVertexUTangent", &UHoudiniStaticMesh::execSetTriangleVertexUTangent },
			{ "SetTriangleVertexUV", &UHoudiniStaticMesh::execSetTriangleVertexUV },
			{ "SetTriangleVertexVTangent", &UHoudiniStaticMesh::execSetTriangleVertexVTangent },
			{ "SetVertexPosition", &UHoudiniStaticMesh::execSetVertexPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics
	{
		struct HoudiniStaticMesh_eventAddStaticMaterial_Parms
		{
			FStaticMaterial InStaticMaterial;
			uint32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStaticMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStaticMaterial;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::NewProp_InStaticMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::NewProp_InStaticMaterial = { "InStaticMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventAddStaticMaterial_Parms, InStaticMaterial), Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::NewProp_InStaticMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::NewProp_InStaticMaterial_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventAddStaticMaterial_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::NewProp_InStaticMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "AddStaticMaterial", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventAddStaticMaterial_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics
	{
		struct HoudiniStaticMesh_eventCalcBounds_Parms
		{
			FBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventCalcBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "CalcBounds", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventCalcBounds_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics
	{
		struct HoudiniStaticMesh_eventCalculateNormals_Parms
		{
			bool bInComputeWeightedNormals;
		};
		static void NewProp_bInComputeWeightedNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInComputeWeightedNormals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::NewProp_bInComputeWeightedNormals_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventCalculateNormals_Parms*)Obj)->bInComputeWeightedNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::NewProp_bInComputeWeightedNormals = { "bInComputeWeightedNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventCalculateNormals_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::NewProp_bInComputeWeightedNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::NewProp_bInComputeWeightedNormals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Calculate the normals of the mesh by calculating the face normal of each triangle (if a triangle has vertices\n\x09 * V0, V1, V2, get the vector perpendicular to the face Pf = (V2 - V0) x (V1 - V0). To calculate the\n\x09 * vertex normal for V0 sum and then normalize all its shared face normals. If bInComputeWeightedNormals is true\n\x09 * then the weight of each face normal that contributes to V0's normal is the area of the face multiplied by the V0\n\x09 * corner angle of that face. If bInComputeWeightedNormals is false then the weight is 1.\n\x09 *\n\x09 * @param bInComputeWeightedNormals Whether or not to use weighted normal calculation. Defaults to false.\n\x09 */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Calculate the normals of the mesh by calculating the face normal of each triangle (if a triangle has vertices\nV0, V1, V2, get the vector perpendicular to the face Pf = (V2 - V0) x (V1 - V0). To calculate the\nvertex normal for V0 sum and then normalize all its shared face normals. If bInComputeWeightedNormals is true\nthen the weight of each face normal that contributes to V0's normal is the area of the face multiplied by the V0\ncorner angle of that face. If bInComputeWeightedNormals is false then the weight is 1.\n\n@param bInComputeWeightedNormals Whether or not to use weighted normal calculation. Defaults to false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "CalculateNormals", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventCalculateNormals_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics
	{
		struct HoudiniStaticMesh_eventCalculateTangents_Parms
		{
			bool bInComputeWeightedNormals;
		};
		static void NewProp_bInComputeWeightedNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInComputeWeightedNormals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::NewProp_bInComputeWeightedNormals_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventCalculateTangents_Parms*)Obj)->bInComputeWeightedNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::NewProp_bInComputeWeightedNormals = { "bInComputeWeightedNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventCalculateTangents_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::NewProp_bInComputeWeightedNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::NewProp_bInComputeWeightedNormals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Calculate tangents from the normals. Calculates normals first via CalculateNormals() if the mesh does not yet\n\x09 * have normals.\n\x09 *\n\x09 * @param bInComputeWeightedNormals Whether or not to use weighted normal calculation if CalculateNormals() is\n\x09 * called. Defaults to false.\n\x09 */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Calculate tangents from the normals. Calculates normals first via CalculateNormals() if the mesh does not yet\nhave normals.\n\n@param bInComputeWeightedNormals Whether or not to use weighted normal calculation if CalculateNormals() is\ncalled. Defaults to false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "CalculateTangents", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventCalculateTangents_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics
	{
		struct HoudiniStaticMesh_eventGetMaterial_Parms
		{
			int32 InMaterialIndex;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaterialIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::NewProp_InMaterialIndex = { "InMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetMaterial_Parms, InMaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::NewProp_InMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetMaterial", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetMaterial_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics
	{
		struct HoudiniStaticMesh_eventGetMaterialIDsPerTriangle_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetMaterialIDsPerTriangle_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetMaterialIDsPerTriangle", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetMaterialIDsPerTriangle_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics
	{
		struct HoudiniStaticMesh_eventGetMaterialIndex_Parms
		{
			FName InMaterialSlotName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InMaterialSlotName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::NewProp_InMaterialSlotName = { "InMaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetMaterialIndex_Parms, InMaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::NewProp_InMaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics
	{
		struct HoudiniStaticMesh_eventGetNumStaticMaterials_Parms
		{
			uint32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetNumStaticMaterials_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetNumStaticMaterials", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetNumStaticMaterials_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics
	{
		struct HoudiniStaticMesh_eventGetNumTriangles_Parms
		{
			uint32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetNumTriangles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetNumTriangles", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetNumTriangles_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics
	{
		struct HoudiniStaticMesh_eventGetNumUVLayers_Parms
		{
			uint32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetNumUVLayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetNumUVLayers", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetNumUVLayers_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics
	{
		struct HoudiniStaticMesh_eventGetNumVertexInstances_Parms
		{
			uint32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetNumVertexInstances_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetNumVertexInstances", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetNumVertexInstances_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics
	{
		struct HoudiniStaticMesh_eventGetNumVertices_Parms
		{
			uint32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetNumVertices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetNumVertices", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetNumVertices_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics
	{
		struct HoudiniStaticMesh_eventGetStaticMaterials_Parms
		{
			TArray<FStaticMaterial> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetStaticMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetStaticMaterials", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetStaticMaterials_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics
	{
		struct HoudiniStaticMesh_eventGetTriangleIndices_Parms
		{
			TArray<FIntVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetTriangleIndices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetTriangleIndices", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetTriangleIndices_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics
	{
		struct HoudiniStaticMesh_eventGetVertexInstanceColors_Parms
		{
			TArray<FColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetVertexInstanceColors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetVertexInstanceColors", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetVertexInstanceColors_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics
	{
		struct HoudiniStaticMesh_eventGetVertexInstanceNormals_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetVertexInstanceNormals_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetVertexInstanceNormals", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetVertexInstanceNormals_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics
	{
		struct HoudiniStaticMesh_eventGetVertexInstanceUTangents_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetVertexInstanceUTangents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetVertexInstanceUTangents", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetVertexInstanceUTangents_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics
	{
		struct HoudiniStaticMesh_eventGetVertexInstanceUVs_Parms
		{
			TArray<FVector2D> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetVertexInstanceUVs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetVertexInstanceUVs", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetVertexInstanceUVs_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics
	{
		struct HoudiniStaticMesh_eventGetVertexInstanceVTangents_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetVertexInstanceVTangents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetVertexInstanceVTangents", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetVertexInstanceVTangents_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics
	{
		struct HoudiniStaticMesh_eventGetVertexPositions_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventGetVertexPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "GetVertexPositions", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventGetVertexPositions_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics
	{
		struct HoudiniStaticMesh_eventHasColors_Parms
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
	void Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventHasColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventHasColors_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "HasColors", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventHasColors_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_HasColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_HasColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics
	{
		struct HoudiniStaticMesh_eventHasNormals_Parms
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
	void Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventHasNormals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventHasNormals_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "HasNormals", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventHasNormals_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics
	{
		struct HoudiniStaticMesh_eventHasPerFaceMaterials_Parms
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
	void Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventHasPerFaceMaterials_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventHasPerFaceMaterials_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "HasPerFaceMaterials", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventHasPerFaceMaterials_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics
	{
		struct HoudiniStaticMesh_eventHasTangents_Parms
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
	void Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventHasTangents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventHasTangents_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "HasTangents", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventHasTangents_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics
	{
		struct HoudiniStaticMesh_eventInitialize_Parms
		{
			uint32 InNumVertices;
			uint32 InNumTriangles;
			uint32 InNumUVLayers;
			uint32 InInitialNumStaticMaterials;
			bool bInHasNormals;
			bool bInHasTangents;
			bool bInHasColors;
			bool bInHasPerFaceMaterials;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InNumVertices;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InNumTriangles;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InNumUVLayers;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InInitialNumStaticMaterials;
		static void NewProp_bInHasNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasNormals;
		static void NewProp_bInHasTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasTangents;
		static void NewProp_bInHasColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasColors;
		static void NewProp_bInHasPerFaceMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasPerFaceMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_InNumVertices = { "InNumVertices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventInitialize_Parms, InNumVertices), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_InNumTriangles = { "InNumTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventInitialize_Parms, InNumTriangles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_InNumUVLayers = { "InNumUVLayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventInitialize_Parms, InNumUVLayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_InInitialNumStaticMaterials = { "InInitialNumStaticMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventInitialize_Parms, InInitialNumStaticMaterials), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasNormals_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventInitialize_Parms*)Obj)->bInHasNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasNormals = { "bInHasNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventInitialize_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasTangents_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventInitialize_Parms*)Obj)->bInHasTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasTangents = { "bInHasTangents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventInitialize_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasTangents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasColors_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventInitialize_Parms*)Obj)->bInHasColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasColors = { "bInHasColors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventInitialize_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasColors_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasPerFaceMaterials_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventInitialize_Parms*)Obj)->bInHasPerFaceMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasPerFaceMaterials = { "bInHasPerFaceMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventInitialize_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasPerFaceMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_InNumVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_InNumTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_InNumUVLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_InInitialNumStaticMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::NewProp_bInHasPerFaceMaterials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Clears all existing data and initializes internal arrays to the relevant sizes to accommodate the\n// mesh based InNumVertices, InNumTriangles, UVs etc.\n" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Clears all existing data and initializes internal arrays to the relevant sizes to accommodate the\nmesh based InNumVertices, InNumTriangles, UVs etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "Initialize", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventInitialize_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics
	{
		struct HoudiniStaticMesh_eventIsValid_Parms
		{
			bool bInSkipVertexIndicesCheck;
			bool ReturnValue;
		};
		static void NewProp_bInSkipVertexIndicesCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInSkipVertexIndicesCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::NewProp_bInSkipVertexIndicesCheck_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventIsValid_Parms*)Obj)->bInSkipVertexIndicesCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::NewProp_bInSkipVertexIndicesCheck = { "bInSkipVertexIndicesCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventIsValid_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::NewProp_bInSkipVertexIndicesCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventIsValid_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::NewProp_bInSkipVertexIndicesCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Checks if the mesh is valid by checking face, vertex and attribute (normals etc) counts.\n// If bSkipVertexIndicesCheck is true, then we don't loop over all triangle vertex indices to\n// check if each index is valid (< NumVertices)\n" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Checks if the mesh is valid by checking face, vertex and attribute (normals etc) counts.\nIf bSkipVertexIndicesCheck is true, then we don't loop over all triangle vertex indices to\ncheck if each index is valid (< NumVertices)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "IsValid", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventIsValid_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_Optimize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_Optimize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Meant to be called after the mesh data arrays are populated.\n\x09 * Currently only calls Shrink on the arrays\n\x09 */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Meant to be called after the mesh data arrays are populated.\nCurrently only calls Shrink on the arrays" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_Optimize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "Optimize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_Optimize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_Optimize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_Optimize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_Optimize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics
	{
		struct HoudiniStaticMesh_eventSetHasColors_Parms
		{
			bool bInHasColors;
		};
		static void NewProp_bInHasColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasColors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::NewProp_bInHasColors_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventSetHasColors_Parms*)Obj)->bInHasColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::NewProp_bInHasColors = { "bInHasColors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventSetHasColors_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::NewProp_bInHasColors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::NewProp_bInHasColors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetHasColors", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetHasColors_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics
	{
		struct HoudiniStaticMesh_eventSetHasNormals_Parms
		{
			bool bInHasNormals;
		};
		static void NewProp_bInHasNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasNormals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::NewProp_bInHasNormals_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventSetHasNormals_Parms*)Obj)->bInHasNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::NewProp_bInHasNormals = { "bInHasNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventSetHasNormals_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::NewProp_bInHasNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::NewProp_bInHasNormals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetHasNormals", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetHasNormals_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics
	{
		struct HoudiniStaticMesh_eventSetHasPerFaceMaterials_Parms
		{
			bool bInHasPerFaceMaterials;
		};
		static void NewProp_bInHasPerFaceMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasPerFaceMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::NewProp_bInHasPerFaceMaterials_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventSetHasPerFaceMaterials_Parms*)Obj)->bInHasPerFaceMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::NewProp_bInHasPerFaceMaterials = { "bInHasPerFaceMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventSetHasPerFaceMaterials_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::NewProp_bInHasPerFaceMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::NewProp_bInHasPerFaceMaterials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetHasPerFaceMaterials", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetHasPerFaceMaterials_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics
	{
		struct HoudiniStaticMesh_eventSetHasTangents_Parms
		{
			bool bInHasTangents;
		};
		static void NewProp_bInHasTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasTangents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::NewProp_bInHasTangents_SetBit(void* Obj)
	{
		((HoudiniStaticMesh_eventSetHasTangents_Parms*)Obj)->bInHasTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::NewProp_bInHasTangents = { "bInHasTangents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniStaticMesh_eventSetHasTangents_Parms), &Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::NewProp_bInHasTangents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::NewProp_bInHasTangents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetHasTangents", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetHasTangents_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics
	{
		struct HoudiniStaticMesh_eventSetNumStaticMaterials_Parms
		{
			uint32 InNumStaticMaterials;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InNumStaticMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::NewProp_InNumStaticMaterials = { "InNumStaticMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetNumStaticMaterials_Parms, InNumStaticMaterials), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::NewProp_InNumStaticMaterials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetNumStaticMaterials", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetNumStaticMaterials_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics
	{
		struct HoudiniStaticMesh_eventSetNumUVLayers_Parms
		{
			uint32 InNumUVLayers;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InNumUVLayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::NewProp_InNumUVLayers = { "InNumUVLayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetNumUVLayers_Parms, InNumUVLayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::NewProp_InNumUVLayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetNumUVLayers", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetNumUVLayers_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics
	{
		struct HoudiniStaticMesh_eventSetStaticMaterial_Parms
		{
			uint32 InMaterialIndex;
			FStaticMaterial InStaticMaterial;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InMaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStaticMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStaticMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::NewProp_InMaterialIndex = { "InMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetStaticMaterial_Parms, InMaterialIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::NewProp_InStaticMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::NewProp_InStaticMaterial = { "InStaticMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetStaticMaterial_Parms, InStaticMaterial), Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::NewProp_InStaticMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::NewProp_InStaticMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::NewProp_InMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::NewProp_InStaticMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetStaticMaterial", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetStaticMaterial_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics
	{
		struct HoudiniStaticMesh_eventSetTriangleMaterialID_Parms
		{
			uint32 InTriangleIndex;
			int32 InMaterialID;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InTriangleIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaterialID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::NewProp_InTriangleIndex = { "InTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleMaterialID_Parms, InTriangleIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::NewProp_InMaterialID = { "InMaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleMaterialID_Parms, InMaterialID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::NewProp_InTriangleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::NewProp_InMaterialID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetTriangleMaterialID", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetTriangleMaterialID_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics
	{
		struct HoudiniStaticMesh_eventSetTriangleVertexColor_Parms
		{
			uint32 InTriangleIndex;
			uint8 InTriangleVertexIndex;
			FColor InColor;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InTriangleIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTriangleVertexIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::NewProp_InTriangleIndex = { "InTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexColor_Parms, InTriangleIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::NewProp_InTriangleVertexIndex = { "InTriangleVertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexColor_Parms, InTriangleVertexIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexColor_Parms, InColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::NewProp_InColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::NewProp_InColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::NewProp_InTriangleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::NewProp_InTriangleVertexIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetTriangleVertexColor", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetTriangleVertexColor_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics
	{
		struct HoudiniStaticMesh_eventSetTriangleVertexIndices_Parms
		{
			uint32 InTriangleIndex;
			FIntVector InTriangleVertexIndices;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InTriangleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTriangleVertexIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTriangleVertexIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::NewProp_InTriangleIndex = { "InTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexIndices_Parms, InTriangleIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::NewProp_InTriangleVertexIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::NewProp_InTriangleVertexIndices = { "InTriangleVertexIndices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexIndices_Parms, InTriangleVertexIndices), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::NewProp_InTriangleVertexIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::NewProp_InTriangleVertexIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::NewProp_InTriangleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::NewProp_InTriangleVertexIndices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetTriangleVertexIndices", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetTriangleVertexIndices_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics
	{
		struct HoudiniStaticMesh_eventSetTriangleVertexNormal_Parms
		{
			uint32 InTriangleIndex;
			uint8 InTriangleVertexIndex;
			FVector InNormal;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InTriangleIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTriangleVertexIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::NewProp_InTriangleIndex = { "InTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexNormal_Parms, InTriangleIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::NewProp_InTriangleVertexIndex = { "InTriangleVertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexNormal_Parms, InTriangleVertexIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::NewProp_InNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::NewProp_InNormal = { "InNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexNormal_Parms, InNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::NewProp_InNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::NewProp_InNormal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::NewProp_InTriangleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::NewProp_InTriangleVertexIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::NewProp_InNormal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetTriangleVertexNormal", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetTriangleVertexNormal_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics
	{
		struct HoudiniStaticMesh_eventSetTriangleVertexUTangent_Parms
		{
			uint32 InTriangleIndex;
			uint8 InTriangleVertexIndex;
			FVector InUTangent;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InTriangleIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTriangleVertexIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUTangent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::NewProp_InTriangleIndex = { "InTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexUTangent_Parms, InTriangleIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::NewProp_InTriangleVertexIndex = { "InTriangleVertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexUTangent_Parms, InTriangleVertexIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::NewProp_InUTangent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::NewProp_InUTangent = { "InUTangent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexUTangent_Parms, InUTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::NewProp_InUTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::NewProp_InUTangent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::NewProp_InTriangleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::NewProp_InTriangleVertexIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::NewProp_InUTangent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetTriangleVertexUTangent", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetTriangleVertexUTangent_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics
	{
		struct HoudiniStaticMesh_eventSetTriangleVertexUV_Parms
		{
			uint32 InTriangleIndex;
			uint8 InTriangleVertexIndex;
			uint8 InUVLayer;
			FVector2D InUV;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InTriangleIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTriangleVertexIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InUVLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InTriangleIndex = { "InTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexUV_Parms, InTriangleIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InTriangleVertexIndex = { "InTriangleVertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexUV_Parms, InTriangleVertexIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InUVLayer = { "InUVLayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexUV_Parms, InUVLayer), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InUV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InUV = { "InUV", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexUV_Parms, InUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InUV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InTriangleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InTriangleVertexIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InUVLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::NewProp_InUV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetTriangleVertexUV", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetTriangleVertexUV_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics
	{
		struct HoudiniStaticMesh_eventSetTriangleVertexVTangent_Parms
		{
			uint32 InTriangleIndex;
			uint8 InTriangleVertexIndex;
			FVector InVTangent;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InTriangleIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTriangleVertexIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVTangent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::NewProp_InTriangleIndex = { "InTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexVTangent_Parms, InTriangleIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::NewProp_InTriangleVertexIndex = { "InTriangleVertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexVTangent_Parms, InTriangleVertexIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::NewProp_InVTangent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::NewProp_InVTangent = { "InVTangent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetTriangleVertexVTangent_Parms, InVTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::NewProp_InVTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::NewProp_InVTangent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::NewProp_InTriangleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::NewProp_InTriangleVertexIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::NewProp_InVTangent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetTriangleVertexVTangent", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetTriangleVertexVTangent_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics
	{
		struct HoudiniStaticMesh_eventSetVertexPosition_Parms
		{
			uint32 InVertexIndex;
			FVector InPosition;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InVertexIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::NewProp_InVertexIndex = { "InVertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetVertexPosition_Parms, InVertexIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniStaticMesh_eventSetVertexPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::NewProp_InPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::NewProp_InVertexIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMesh, nullptr, "SetVertexPosition", nullptr, nullptr, sizeof(HoudiniStaticMesh_eventSetVertexPosition_Parms), Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniStaticMesh_NoRegister()
	{
		return UHoudiniStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNormals_MetaData[];
#endif
		static void NewProp_bHasNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasTangents_MetaData[];
#endif
		static void NewProp_bHasTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasColors_MetaData[];
#endif
		static void NewProp_bHasColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumUVLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumUVLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPerFaceMaterials_MetaData[];
#endif
		static void NewProp_bHasPerFaceMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPerFaceMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriangleIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriangleIndices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceNormals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceNormals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceNormals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceUTangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceUTangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceUTangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceVTangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceVTangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceVTangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceUVs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceUVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceUVs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIDsPerTriangle_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIDsPerTriangle_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialIDsPerTriangle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniStaticMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_AddStaticMaterial, "AddStaticMaterial" }, // 224584256
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_CalcBounds, "CalcBounds" }, // 1637754881
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_CalculateNormals, "CalculateNormals" }, // 968494643
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_CalculateTangents, "CalculateTangents" }, // 3506332377
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterial, "GetMaterial" }, // 574212908
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIDsPerTriangle, "GetMaterialIDsPerTriangle" }, // 3413792171
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetMaterialIndex, "GetMaterialIndex" }, // 1215835956
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetNumStaticMaterials, "GetNumStaticMaterials" }, // 148592952
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetNumTriangles, "GetNumTriangles" }, // 1021077601
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetNumUVLayers, "GetNumUVLayers" }, // 2425159231
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertexInstances, "GetNumVertexInstances" }, // 1955161781
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetNumVertices, "GetNumVertices" }, // 478286020
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetStaticMaterials, "GetStaticMaterials" }, // 276084116
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetTriangleIndices, "GetTriangleIndices" }, // 1261558639
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceColors, "GetVertexInstanceColors" }, // 151315064
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceNormals, "GetVertexInstanceNormals" }, // 1632050643
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUTangents, "GetVertexInstanceUTangents" }, // 640082779
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceUVs, "GetVertexInstanceUVs" }, // 1747933466
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexInstanceVTangents, "GetVertexInstanceVTangents" }, // 2974851662
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_GetVertexPositions, "GetVertexPositions" }, // 854204291
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_HasColors, "HasColors" }, // 799244709
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_HasNormals, "HasNormals" }, // 1054926639
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_HasPerFaceMaterials, "HasPerFaceMaterials" }, // 231885919
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_HasTangents, "HasTangents" }, // 1052568739
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_Initialize, "Initialize" }, // 3460373897
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_IsValid, "IsValid" }, // 1754241985
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_Optimize, "Optimize" }, // 3247012031
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetHasColors, "SetHasColors" }, // 1709882034
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetHasNormals, "SetHasNormals" }, // 3980313701
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetHasPerFaceMaterials, "SetHasPerFaceMaterials" }, // 2330891830
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetHasTangents, "SetHasTangents" }, // 3986887326
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetNumStaticMaterials, "SetNumStaticMaterials" }, // 3288596961
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetNumUVLayers, "SetNumUVLayers" }, // 2769950454
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetStaticMaterial, "SetStaticMaterial" }, // 1014010609
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleMaterialID, "SetTriangleMaterialID" }, // 1911609717
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexColor, "SetTriangleVertexColor" }, // 2322756409
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexIndices, "SetTriangleVertexIndices" }, // 973127099
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexNormal, "SetTriangleVertexNormal" }, // 1598378942
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUTangent, "SetTriangleVertexUTangent" }, // 354336716
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexUV, "SetTriangleVertexUV" }, // 2127874170
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetTriangleVertexVTangent, "SetTriangleVertexVTangent" }, // 3027245446
		{ &Z_Construct_UFunction_UHoudiniStaticMesh_SetVertexPosition, "SetVertexPosition" }, // 1465514704
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is a simple static mesh that is meant to be built in one go, without modifications afterwards.\n * The number of vertices and triangles must be known before hand.\n */" },
		{ "IncludePath", "HoudiniStaticMesh.h" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This is a simple static mesh that is meant to be built in one go, without modifications afterwards.\nThe number of vertices and triangles must be known before hand." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasNormals_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasNormals_SetBit(void* Obj)
	{
		((UHoudiniStaticMesh*)Obj)->bHasNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasNormals = { "bHasNormals", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniStaticMesh), &Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasTangents_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasTangents_SetBit(void* Obj)
	{
		((UHoudiniStaticMesh*)Obj)->bHasTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasTangents = { "bHasTangents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniStaticMesh), &Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasColors_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasColors_SetBit(void* Obj)
	{
		((UHoudiniStaticMesh*)Obj)->bHasColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasColors = { "bHasColors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniStaticMesh), &Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_NumUVLayers_MetaData[] = {
		{ "Comment", "/** The number of UV layers that the mesh has */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "The number of UV layers that the mesh has" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_NumUVLayers = { "NumUVLayers", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, NumUVLayers), METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_NumUVLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_NumUVLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasPerFaceMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasPerFaceMaterials_SetBit(void* Obj)
	{
		((UHoudiniStaticMesh*)Obj)->bHasPerFaceMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasPerFaceMaterials = { "bHasPerFaceMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniStaticMesh), &Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasPerFaceMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasPerFaceMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasPerFaceMaterials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexPositions_Inner = { "VertexPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexPositions_MetaData[] = {
		{ "Comment", "/** Vertex positions. The vertex id == vertex index => indexes into this array. */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Vertex positions. The vertex id == vertex index => indexes into this array." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexPositions = { "VertexPositions", nullptr, (EPropertyFlags)0x00a0080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, VertexPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_TriangleIndices_Inner = { "TriangleIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_TriangleIndices_MetaData[] = {
		{ "Comment", "/** Triangle vertices. Triangle id == triangle index => indexes into this array, which returns a FIntVector of\n\x09 * vertex ids/indices for VertexPositions.\n\x09 */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Triangle vertices. Triangle id == triangle index => indexes into this array, which returns a FIntVector of\nvertex ids/indices for VertexPositions." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_TriangleIndices = { "TriangleIndices", nullptr, (EPropertyFlags)0x00a0080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, TriangleIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_TriangleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_TriangleIndices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceColors_Inner = { "VertexInstanceColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceColors_MetaData[] = {
		{ "Comment", "/** Array of colors per vertex instance, in other words, a color per triangle-vertex. Index 3 * TriangleID + LocalTriangleVertexIndex. */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Array of colors per vertex instance, in other words, a color per triangle-vertex. Index 3 * TriangleID + LocalTriangleVertexIndex." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceColors = { "VertexInstanceColors", nullptr, (EPropertyFlags)0x00a0080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceNormals_Inner = { "VertexInstanceNormals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceNormals_MetaData[] = {
		{ "Comment", "/** Array of normals per vertex instance, in other words, a normal per triangle-vertex. Index 3 * TriangleID + LocalTriangleVertexIndex. */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Array of normals per vertex instance, in other words, a normal per triangle-vertex. Index 3 * TriangleID + LocalTriangleVertexIndex." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceNormals = { "VertexInstanceNormals", nullptr, (EPropertyFlags)0x00a0080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceNormals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceNormals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUTangents_Inner = { "VertexInstanceUTangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUTangents_MetaData[] = {
		{ "Comment", "/** Array of U tangents per vertex instance, in other words, a tangent per triangle-vertex. Index 3 * TriangleID + LocalTriangleVertexIndex. */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Array of U tangents per vertex instance, in other words, a tangent per triangle-vertex. Index 3 * TriangleID + LocalTriangleVertexIndex." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUTangents = { "VertexInstanceUTangents", nullptr, (EPropertyFlags)0x00a0080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceUTangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUTangents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceVTangents_Inner = { "VertexInstanceVTangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceVTangents_MetaData[] = {
		{ "Comment", "/** Array of V tangents per vertex instance, in other words, a tangent per triangle-vertex. Index 3 * TriangleID + LocalTriangleVertexIndex. */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Array of V tangents per vertex instance, in other words, a tangent per triangle-vertex. Index 3 * TriangleID + LocalTriangleVertexIndex." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceVTangents = { "VertexInstanceVTangents", nullptr, (EPropertyFlags)0x00a0080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceVTangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceVTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceVTangents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUVs_Inner = { "VertexInstanceUVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUVs_MetaData[] = {
		{ "Comment", "/** Array of UV layers to array of per triangle-vertex UVs. Index: UVLayerIndex * (NumVertexInstances) + 3 * TriangleID + LocalTriangleVertexIndex. */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Array of UV layers to array of per triangle-vertex UVs. Index: UVLayerIndex * (NumVertexInstances) + 3 * TriangleID + LocalTriangleVertexIndex." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUVs = { "VertexInstanceUVs", nullptr, (EPropertyFlags)0x00a0080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceUVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUVs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_MaterialIDsPerTriangle_Inner = { "MaterialIDsPerTriangle", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_MaterialIDsPerTriangle_MetaData[] = {
		{ "Comment", "/** Array of material ID per triangle. Indexed by Triangle ID/Index. */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "Array of material ID per triangle. Indexed by Triangle ID/Index." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_MaterialIDsPerTriangle = { "MaterialIDsPerTriangle", nullptr, (EPropertyFlags)0x00a0080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, MaterialIDsPerTriangle), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_MaterialIDsPerTriangle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_MaterialIDsPerTriangle_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_StaticMaterials_Inner = { "StaticMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_StaticMaterials_MetaData[] = {
		{ "Comment", "/** The materials of the mesh. Index by MaterialID (MaterialIndex). */" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMesh.h" },
		{ "ToolTip", "The materials of the mesh. Index by MaterialID (MaterialIndex)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_StaticMaterials = { "StaticMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniStaticMesh, StaticMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_StaticMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_StaticMaterials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_NumUVLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_bHasPerFaceMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_TriangleIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_TriangleIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceNormals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUTangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceVTangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceVTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_VertexInstanceUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_MaterialIDsPerTriangle_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_MaterialIDsPerTriangle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_StaticMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMesh_Statics::NewProp_StaticMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniStaticMesh_Statics::ClassParams = {
		&UHoudiniStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniStaticMesh, 2569456296);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniStaticMesh>()
	{
		return UHoudiniStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniStaticMesh(Z_Construct_UClass_UHoudiniStaticMesh, &UHoudiniStaticMesh::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniStaticMesh);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniStaticMesh)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
