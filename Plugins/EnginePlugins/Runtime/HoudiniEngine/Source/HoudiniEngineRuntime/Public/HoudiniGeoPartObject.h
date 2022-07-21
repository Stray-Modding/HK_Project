#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniInstancerType.h"
#include "EHoudiniPartType.h"
#include "HoudiniMeshSocket.h"
#include "HoudiniGeoPartObject.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniGeoPartObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 AssetId;
    
    UPROPERTY()
    FString AssetName;
    
    UPROPERTY()
    int32 ObjectId;
    
    UPROPERTY()
    FString ObjectName;
    
    UPROPERTY()
    int32 GeoId;
    
    UPROPERTY()
    int32 PartId;
    
    UPROPERTY()
    FString PartName;
    
    UPROPERTY()
    bool bHasCustomPartName;
    
    UPROPERTY()
    TArray<FString> SplitGroups;
    
    UPROPERTY()
    FTransform TransformMatrix;
    
    UPROPERTY()
    FString NodePath;
    
    UPROPERTY()
    EHoudiniPartType Type;
    
    UPROPERTY()
    EHoudiniInstancerType InstancerType;
    
    UPROPERTY()
    FString VolumeName;
    
    UPROPERTY()
    bool bHasEditLayers;
    
    UPROPERTY()
    FString VolumeLayerName;
    
    UPROPERTY()
    int32 VolumeTileIndex;
    
    UPROPERTY()
    bool bIsVisible;
    
    UPROPERTY()
    bool bIsEditable;
    
    UPROPERTY()
    bool bIsTemplated;
    
    UPROPERTY()
    bool bIsInstanced;
    
    UPROPERTY()
    bool bHasGeoChanged;
    
    UPROPERTY()
    bool bHasPartChanged;
    
    UPROPERTY()
    bool bHasTransformChanged;
    
    UPROPERTY()
    bool bHasMaterialsChanged;
    
    UPROPERTY()
    TArray<FHoudiniMeshSocket> AllMeshSockets;
    
    FHoudiniGeoPartObject();
};

