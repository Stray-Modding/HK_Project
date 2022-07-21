#pragma once
#include "CoreMinimal.h"
#include "ComponentInstanceDataCache.h"
#include "EHoudiniAssetState.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniAssetBlueprintOutput.h"
#include "HoudiniAssetBlueprintInstanceData.generated.h"

class UHoudiniAsset;
class UHoudiniInput;

USTRUCT()
struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UHoudiniAsset* HoudiniAsset;
    
    UPROPERTY()
    int32 AssetId;
    
    UPROPERTY()
    EHoudiniAssetState AssetState;
    
    UPROPERTY()
    uint32 SubAssetIndex;
    
    UPROPERTY()
    uint32 AssetCookCount;
    
    UPROPERTY()
    bool bHasBeenLoaded;
    
    UPROPERTY()
    bool bHasBeenDuplicated;
    
    UPROPERTY()
    bool bPendingDelete;
    
    UPROPERTY()
    bool bRecookRequested;
    
    UPROPERTY()
    bool bRebuildRequested;
    
    UPROPERTY()
    bool bEnableCooking;
    
    UPROPERTY()
    bool bForceNeedUpdate;
    
    UPROPERTY()
    bool bLastCookSuccess;
    
    UPROPERTY()
    FGuid ComponentGUID;
    
    UPROPERTY()
    FGuid HapiGUID;
    
    UPROPERTY()
    bool bRegisteredComponentTemplate;
    
    UPROPERTY()
    FString SourceName;
    
    UPROPERTY()
    TMap<FHoudiniOutputObjectIdentifier, FHoudiniAssetBlueprintOutput> Outputs;
    
    UPROPERTY()
    TArray<UHoudiniInput*> Inputs;
    
    HOUDINIENGINERUNTIME_API FHoudiniAssetBlueprintInstanceData();
};

