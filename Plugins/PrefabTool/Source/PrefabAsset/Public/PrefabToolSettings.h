#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EPrefabVisualizerType.h"
#include "EPTUITheme.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PrefabToolSettings.generated.h"

class AActor;

UCLASS(DefaultConfig, Config=Editor)
class PREFABASSET_API UPrefabToolSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bReplaceActorsWithCreatedPrefab;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoIncludeAttachedActorsWhenCreateNewPrefab;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNestedPrefabSupport;
    
    UPROPERTY(Config, EditAnywhere)
    bool bRestorePrefabActorCollapseStatusAfterPIE;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCollapseAllPrefabActorsAfterMapOpened;
    
    UPROPERTY(Config, EditAnywhere)
    bool bMoveActorsInWorldAfterSetPrefabPivot;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDuplicateNoRevertWithOffset;
    
    UPROPERTY(Config, EditAnywhere)
    FString NewPrefabNamePattern;
    
    UPROPERTY(Config, EditAnywhere)
    EPTUITheme UITheme;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUpdateAllPrefabActorsWhenOpenMap;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUpdateAllPrefabActorsWhenApply;
    
    UPROPERTY(Config, EditAnywhere)
    bool bApplyToNestedPrefab;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableApplyFromDisconnectedPrefabActor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTryQuickApplyFirstWhenApply;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoAddRemoveVariantActorPrefix;
    
    UPROPERTY(Config, EditAnywhere)
    FString VariantActorPrefix;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnablePrefabComponentVisualizer;
    
    UPROPERTY(Config, EditAnywhere)
    EPrefabVisualizerType PrefabComponentVisualizerType;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisplayPrefabComponentVisualizerEvenNotSelected;
    
    UPROPERTY(Config, EditAnywhere)
    FColor PrefabViewVisualizerColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor TargetActorColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor UnLockedConnectedColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor LockedConnectedColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor UnLockedDisConnectedColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor LockedDisConnectedColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor UnLockedNoPrefabAssignedColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor LockedNoPrefabAssignedColor;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath PrefabMaterialPath;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShadedPrefabViewVisualizer;
    
    UPROPERTY(Config, EditAnywhere)
    bool bLockPrefabSelectionByDefault;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableLockPrefabSelectionFeature;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceApplyPerInstanceVertexColor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bHideChildActorsInPIEIfHiddenInEditor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCanToggleChildActorVisibilityInPIE;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIgnoreLayersInPrefab;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSupportGenerateBlueprint;
    
    UPROPERTY(Config, EditAnywhere)
    bool bHarvestComponentsWhenGeneratingBlueprint;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseActorNameAsVariableNameWhenGeneratingBlueprint;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceMobilityToMovableWhenGeneratingBlueprint;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSubclassOf<AActor>> IgnoreActorClassesWhenGeneratingBlueprint;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FName> IgnoreActorTagsWhenGeneratingBlueprint;
    
    UPROPERTY(Config, EditAnywhere)
    bool bFlashPrefabWindowForTargetPrefabActor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnablePrefabTextEditor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDebugMode;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableThumbnailRender;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowPrefabInstanceTagInPrefabToolWindow;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSkipActorReferenceReplacement;
    
    UPrefabToolSettings();
};

