// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStaticMaterial;
struct FBox;
class UMaterialInterface;
struct FIntVector;
struct FColor;
struct FVector;
struct FVector2D;
#ifdef HOUDINIENGINERUNTIME_HoudiniStaticMesh_generated_h
#error "HoudiniStaticMesh.generated.h already included, missing '#pragma once' in HoudiniStaticMesh.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniStaticMesh_generated_h

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_SPARSE_DATA
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddStaticMaterial); \
	DECLARE_FUNCTION(execCalcBounds); \
	DECLARE_FUNCTION(execCalculateNormals); \
	DECLARE_FUNCTION(execCalculateTangents); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMaterialIDsPerTriangle); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execGetNumStaticMaterials); \
	DECLARE_FUNCTION(execGetNumTriangles); \
	DECLARE_FUNCTION(execGetNumUVLayers); \
	DECLARE_FUNCTION(execGetNumVertexInstances); \
	DECLARE_FUNCTION(execGetNumVertices); \
	DECLARE_FUNCTION(execGetStaticMaterials); \
	DECLARE_FUNCTION(execGetTriangleIndices); \
	DECLARE_FUNCTION(execGetVertexInstanceColors); \
	DECLARE_FUNCTION(execGetVertexInstanceNormals); \
	DECLARE_FUNCTION(execGetVertexInstanceUTangents); \
	DECLARE_FUNCTION(execGetVertexInstanceUVs); \
	DECLARE_FUNCTION(execGetVertexInstanceVTangents); \
	DECLARE_FUNCTION(execGetVertexPositions); \
	DECLARE_FUNCTION(execHasColors); \
	DECLARE_FUNCTION(execHasNormals); \
	DECLARE_FUNCTION(execHasPerFaceMaterials); \
	DECLARE_FUNCTION(execHasTangents); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execOptimize); \
	DECLARE_FUNCTION(execSetHasColors); \
	DECLARE_FUNCTION(execSetHasNormals); \
	DECLARE_FUNCTION(execSetHasPerFaceMaterials); \
	DECLARE_FUNCTION(execSetHasTangents); \
	DECLARE_FUNCTION(execSetNumStaticMaterials); \
	DECLARE_FUNCTION(execSetNumUVLayers); \
	DECLARE_FUNCTION(execSetStaticMaterial); \
	DECLARE_FUNCTION(execSetTriangleMaterialID); \
	DECLARE_FUNCTION(execSetTriangleVertexColor); \
	DECLARE_FUNCTION(execSetTriangleVertexIndices); \
	DECLARE_FUNCTION(execSetTriangleVertexNormal); \
	DECLARE_FUNCTION(execSetTriangleVertexUTangent); \
	DECLARE_FUNCTION(execSetTriangleVertexUV); \
	DECLARE_FUNCTION(execSetTriangleVertexVTangent); \
	DECLARE_FUNCTION(execSetVertexPosition);


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddStaticMaterial); \
	DECLARE_FUNCTION(execCalcBounds); \
	DECLARE_FUNCTION(execCalculateNormals); \
	DECLARE_FUNCTION(execCalculateTangents); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMaterialIDsPerTriangle); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execGetNumStaticMaterials); \
	DECLARE_FUNCTION(execGetNumTriangles); \
	DECLARE_FUNCTION(execGetNumUVLayers); \
	DECLARE_FUNCTION(execGetNumVertexInstances); \
	DECLARE_FUNCTION(execGetNumVertices); \
	DECLARE_FUNCTION(execGetStaticMaterials); \
	DECLARE_FUNCTION(execGetTriangleIndices); \
	DECLARE_FUNCTION(execGetVertexInstanceColors); \
	DECLARE_FUNCTION(execGetVertexInstanceNormals); \
	DECLARE_FUNCTION(execGetVertexInstanceUTangents); \
	DECLARE_FUNCTION(execGetVertexInstanceUVs); \
	DECLARE_FUNCTION(execGetVertexInstanceVTangents); \
	DECLARE_FUNCTION(execGetVertexPositions); \
	DECLARE_FUNCTION(execHasColors); \
	DECLARE_FUNCTION(execHasNormals); \
	DECLARE_FUNCTION(execHasPerFaceMaterials); \
	DECLARE_FUNCTION(execHasTangents); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execOptimize); \
	DECLARE_FUNCTION(execSetHasColors); \
	DECLARE_FUNCTION(execSetHasNormals); \
	DECLARE_FUNCTION(execSetHasPerFaceMaterials); \
	DECLARE_FUNCTION(execSetHasTangents); \
	DECLARE_FUNCTION(execSetNumStaticMaterials); \
	DECLARE_FUNCTION(execSetNumUVLayers); \
	DECLARE_FUNCTION(execSetStaticMaterial); \
	DECLARE_FUNCTION(execSetTriangleMaterialID); \
	DECLARE_FUNCTION(execSetTriangleVertexColor); \
	DECLARE_FUNCTION(execSetTriangleVertexIndices); \
	DECLARE_FUNCTION(execSetTriangleVertexNormal); \
	DECLARE_FUNCTION(execSetTriangleVertexUTangent); \
	DECLARE_FUNCTION(execSetTriangleVertexUV); \
	DECLARE_FUNCTION(execSetTriangleVertexVTangent); \
	DECLARE_FUNCTION(execSetVertexPosition);


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniStaticMesh(); \
	friend struct Z_Construct_UClass_UHoudiniStaticMesh_Statics; \
public: \
	DECLARE_CLASS(UHoudiniStaticMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniStaticMesh)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniStaticMesh(); \
	friend struct Z_Construct_UClass_UHoudiniStaticMesh_Statics; \
public: \
	DECLARE_CLASS(UHoudiniStaticMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniStaticMesh)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniStaticMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniStaticMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniStaticMesh(UHoudiniStaticMesh&&); \
	NO_API UHoudiniStaticMesh(const UHoudiniStaticMesh&); \
public:


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniStaticMesh(UHoudiniStaticMesh&&); \
	NO_API UHoudiniStaticMesh(const UHoudiniStaticMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniStaticMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniStaticMesh)


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHasNormals() { return STRUCT_OFFSET(UHoudiniStaticMesh, bHasNormals); } \
	FORCEINLINE static uint32 __PPO__bHasTangents() { return STRUCT_OFFSET(UHoudiniStaticMesh, bHasTangents); } \
	FORCEINLINE static uint32 __PPO__bHasColors() { return STRUCT_OFFSET(UHoudiniStaticMesh, bHasColors); } \
	FORCEINLINE static uint32 __PPO__NumUVLayers() { return STRUCT_OFFSET(UHoudiniStaticMesh, NumUVLayers); } \
	FORCEINLINE static uint32 __PPO__bHasPerFaceMaterials() { return STRUCT_OFFSET(UHoudiniStaticMesh, bHasPerFaceMaterials); } \
	FORCEINLINE static uint32 __PPO__VertexPositions() { return STRUCT_OFFSET(UHoudiniStaticMesh, VertexPositions); } \
	FORCEINLINE static uint32 __PPO__TriangleIndices() { return STRUCT_OFFSET(UHoudiniStaticMesh, TriangleIndices); } \
	FORCEINLINE static uint32 __PPO__VertexInstanceColors() { return STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceColors); } \
	FORCEINLINE static uint32 __PPO__VertexInstanceNormals() { return STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceNormals); } \
	FORCEINLINE static uint32 __PPO__VertexInstanceUTangents() { return STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceUTangents); } \
	FORCEINLINE static uint32 __PPO__VertexInstanceVTangents() { return STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceVTangents); } \
	FORCEINLINE static uint32 __PPO__VertexInstanceUVs() { return STRUCT_OFFSET(UHoudiniStaticMesh, VertexInstanceUVs); } \
	FORCEINLINE static uint32 __PPO__MaterialIDsPerTriangle() { return STRUCT_OFFSET(UHoudiniStaticMesh, MaterialIDsPerTriangle); } \
	FORCEINLINE static uint32 __PPO__StaticMaterials() { return STRUCT_OFFSET(UHoudiniStaticMesh, StaticMaterials); }


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_14_PROLOG
#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_SPARSE_DATA \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_RPC_WRAPPERS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_INCLASS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_SPARSE_DATA \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_INCLASS_NO_PURE_DECLS \
	Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniStaticMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
