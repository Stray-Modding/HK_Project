#pragma once
#include "CoreMinimal.h"
#include "EToyoPointMeshType.h"
#include "ToyoSplinePointData.generated.h"

USTRUCT(BlueprintType)
struct TOYOTOOLRUNTIME_API FToyoSplinePointData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EToyoPointMeshType MeshType;
    
    UPROPERTY()
    int32 ToyoMeshIndex;
    
    UPROPERTY()
    int32 JointMeshIndex;
    
    UPROPERTY()
    int32 ToyoMaterialIndex;
    
    UPROPERTY()
    int32 JointMaterialIndex;
    
    UPROPERTY()
    bool bToyoCollisionEnabled;
    
    UPROPERTY()
    bool bJointCollisionEnabled;
    
    UPROPERTY()
    bool bShowToyoMesh;
    
    UPROPERTY()
    bool bShowJointMesh;
    
    UPROPERTY()
    bool bEnableSnapping;
    
    FToyoSplinePointData();
};

