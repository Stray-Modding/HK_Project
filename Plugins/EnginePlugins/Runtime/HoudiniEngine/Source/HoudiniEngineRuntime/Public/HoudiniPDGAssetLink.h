#pragma once
#include "CoreMinimal.h"
#include "AggregatedWorkItemTally.h"
#include "UObject/Object.h"
#include "EPDGLinkState.h"
#include "Engine/EngineTypes.h"
#include "HoudiniPDGAssetLink.generated.h"

class AActor;
class UTOPNetwork;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniPDGAssetLink : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient, NonTransactional)
    FString AssetName;
    
    UPROPERTY(DuplicateTransient, NonTransactional)
    FString AssetNodePath;
    
    UPROPERTY(DuplicateTransient, NonTransactional)
    int32 AssetId;
    
    UPROPERTY()
    TArray<UTOPNetwork*> AllTOPNetworks;
    
    UPROPERTY()
    int32 SelectedTOPNetworkIndex;
    
    UPROPERTY(NonTransactional, Transient)
    EPDGLinkState LinkState;
    
    UPROPERTY()
    bool bAutoCook;
    
    UPROPERTY()
    bool bUseTOPNodeFilter;
    
    UPROPERTY()
    bool bUseTOPOutputFilter;
    
    UPROPERTY()
    FString TOPNodeFilter;
    
    UPROPERTY()
    FString TOPOutputFilter;
    
    UPROPERTY(NonTransactional)
    int32 NumWorkitems;
    
    UPROPERTY(NonTransactional, Transient)
    FAggregatedWorkItemTally WorkItemTally;
    
    UPROPERTY()
    FString OutputCachePath;
    
    UPROPERTY(Transient)
    bool bNeedsUIRefresh;
    
    UPROPERTY(EditAnywhere)
    AActor* OutputParentActor;
    
    UPROPERTY()
    FDirectoryPath BakeFolder;
    
    UHoudiniPDGAssetLink();
};

