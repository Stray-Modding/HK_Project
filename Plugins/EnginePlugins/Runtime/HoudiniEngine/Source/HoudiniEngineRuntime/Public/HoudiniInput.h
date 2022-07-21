#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHoudiniInputType.h"
#include "EHoudiniXformType.h"
#include "EHoudiniLandscapeExportType.h"
#include "HoudiniInput.generated.h"

class AActor;
class ULandscapeComponent;
class UHoudiniInputObject;
class UHoudiniInputHoudiniSplineComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInput : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString Label;
    
    UPROPERTY()
    EHoudiniInputType Type;
    
    UPROPERTY(DuplicateTransient, Transient)
    EHoudiniInputType PreviousType;
    
    UPROPERTY(DuplicateTransient, Transient)
    int32 AssetNodeId;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputNodeId;
    
    UPROPERTY()
    int32 InputIndex;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 ParmId;
    
    UPROPERTY()
    bool bIsObjectPathParameter;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    TArray<int32> CreatedDataNodeIds;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bHasChanged;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bNeedsToTriggerUpdate;
    
    UPROPERTY()
    FString Help;
    
    UPROPERTY()
    EHoudiniXformType KeepWorldTransform;
    
    UPROPERTY()
    bool bPackBeforeMerge;
    
    UPROPERTY()
    bool bImportAsReference;
    
    UPROPERTY()
    bool bImportAsReferenceRotScaleEnabled;
    
    UPROPERTY()
    bool bExportLODs;
    
    UPROPERTY()
    bool bExportSockets;
    
    UPROPERTY()
    bool bExportColliders;
    
    UPROPERTY()
    bool bCookOnCurveChanged;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> GeometryInputObjects;
    
    UPROPERTY()
    bool bStaticMeshChanged;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> AssetInputObjects;
    
    UPROPERTY()
    bool bInputAssetConnectedInHoudini;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> CurveInputObjects;
    
    UPROPERTY()
    float DefaultCurveOffset;
    
    UPROPERTY()
    bool bAddRotAndScaleAttributesOnCurves;
    
    UPROPERTY()
    bool bUseLegacyInputCurves;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> LandscapeInputObjects;
    
    UPROPERTY()
    bool bLandscapeHasExportTypeChanged;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> WorldInputObjects;
    
    UPROPERTY()
    TArray<AActor*> WorldInputBoundSelectorObjects;
    
    UPROPERTY()
    bool bIsWorldInputBoundSelector;
    
    UPROPERTY()
    bool bWorldInputBoundSelectorAutoUpdate;
    
    UPROPERTY()
    float UnrealSplineResolution;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> SkeletalInputObjects;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> GeometryCollectionInputObjects;
    
    UPROPERTY(Instanced)
    TSet<ULandscapeComponent*> LandscapeSelectedComponents;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    TSet<int32> InputNodesPendingDelete;
    
public:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    TArray<UHoudiniInputObject*> LastUndoDeletedInputs;
    
    UPROPERTY()
    bool bUpdateInputLandscape;
    
    UPROPERTY()
    EHoudiniLandscapeExportType LandscapeExportType;
    
    UPROPERTY()
    bool bLandscapeExportSelectionOnly;
    
    UPROPERTY()
    bool bLandscapeAutoSelectComponent;
    
    UPROPERTY()
    bool bLandscapeExportMaterials;
    
    UPROPERTY()
    bool bLandscapeExportLighting;
    
    UPROPERTY()
    bool bLandscapeExportNormalizedUVs;
    
    UPROPERTY()
    bool bLandscapeExportTileUVs;
    
    UPROPERTY()
    bool bCanDeleteHoudiniNodes;
    
    UHoudiniInput();
};

