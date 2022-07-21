#include "PrefabToolSettings.h"

UPrefabToolSettings::UPrefabToolSettings() {
    this->bReplaceActorsWithCreatedPrefab = true;
    this->bAutoIncludeAttachedActorsWhenCreateNewPrefab = true;
    this->bNestedPrefabSupport = true;
    this->bRestorePrefabActorCollapseStatusAfterPIE = true;
    this->bCollapseAllPrefabActorsAfterMapOpened = true;
    this->bMoveActorsInWorldAfterSetPrefabPivot = true;
    this->bDuplicateNoRevertWithOffset = true;
    this->NewPrefabNamePattern = TEXT("Prefab_{Actor}");
    this->UITheme = EPTUITheme::Dark;
    this->bUpdateAllPrefabActorsWhenOpenMap = true;
    this->bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap = true;
    this->bUpdateAllPrefabActorsWhenApply = true;
    this->bApplyToNestedPrefab = false;
    this->bEnableApplyFromDisconnectedPrefabActor = false;
    this->bTryQuickApplyFirstWhenApply = false;
    this->bAutoAddRemoveVariantActorPrefix = false;
    this->VariantActorPrefix = TEXT("(Variant) ");
    this->bEnablePrefabComponentVisualizer = true;
    this->PrefabComponentVisualizerType = EPrefabVisualizerType::WireBox;
    this->bDisplayPrefabComponentVisualizerEvenNotSelected = false;
    this->bShadedPrefabViewVisualizer = true;
    this->bLockPrefabSelectionByDefault = true;
    this->bDisableLockPrefabSelectionFeature = false;
    this->bForceApplyPerInstanceVertexColor = false;
    this->bHideChildActorsInPIEIfHiddenInEditor = false;
    this->bCanToggleChildActorVisibilityInPIE = false;
    this->bIgnoreLayersInPrefab = false;
    this->bSupportGenerateBlueprint = true;
    this->bHarvestComponentsWhenGeneratingBlueprint = true;
    this->bUseActorNameAsVariableNameWhenGeneratingBlueprint = true;
    this->bForceMobilityToMovableWhenGeneratingBlueprint = true;
    this->bFlashPrefabWindowForTargetPrefabActor = true;
    this->bEnablePrefabTextEditor = false;
    this->bDebugMode = false;
    this->bDisableThumbnailRender = false;
    this->bShowPrefabInstanceTagInPrefabToolWindow = false;
    this->bSkipActorReferenceReplacement = false;
}

