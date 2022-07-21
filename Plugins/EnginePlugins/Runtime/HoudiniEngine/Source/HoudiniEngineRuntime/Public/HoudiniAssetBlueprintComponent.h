#pragma once
#include "CoreMinimal.h"
#include "HoudiniAssetComponent.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniAssetBlueprintComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool FauxBPProperty;
    
    UPROPERTY()
    bool bHoudiniAssetChanged;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bUpdatedFromTemplate;
    
    UPROPERTY()
    bool bIsInBlueprintEditor;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bCanDeleteHoudiniNodes;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bHasRegisteredComponentTemplate;
    
    UPROPERTY()
    TMap<FHoudiniOutputObjectIdentifier, FGuid> CachedOutputNodes;
    
    UPROPERTY()
    TMap<FGuid, FGuid> CachedInputNodes;
    
public:
    UHoudiniAssetBlueprintComponent();
    UFUNCTION(BlueprintCallable)
    void SetToggleValueAt(const FString& Name, bool Value, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(const FString& Name, float Value, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool HasParameter(const FString& Name);
    
};

