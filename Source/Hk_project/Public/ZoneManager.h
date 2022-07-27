#pragma once
#include "CoreMinimal.h"
#include "EZoneLoadingType.h"
#include "JoyLibraryRuntime/Manager.h"
#include "ZoneManager.generated.h"

class UWorld;

UCLASS(Blueprintable)
class HK_PROJECT_API AZoneManager : public AManager {
    GENERATED_BODY()
public:
    AZoneManager();
    UFUNCTION(BlueprintCallable)
    bool PrepareLoadZone(TSoftObjectPtr<UWorld> _zone, TArray<FName> _transitionGroups, const TArray<TSoftObjectPtr<UWorld>>& _preloadedLevels, TEnumAsByte<EZoneLoadingType> _loadingType);
    
    UFUNCTION(BlueprintCallable)
    bool OpenZoneByPath(FName _zonePath, bool _saveBeforeOpenZone);
    
    UFUNCTION(BlueprintCallable)
    bool OpenZone(TSoftObjectPtr<UWorld> _zone, bool _saveBeforeOpenZone);
    
    UFUNCTION(BlueprintCallable)
    bool LoadZone(TSoftObjectPtr<UWorld> _zone, TArray<FName> _transitionGroups, const TArray<TSoftObjectPtr<UWorld>>& _preloadedLevels, TEnumAsByte<EZoneLoadingType> _loadingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadZoneReadyForCommit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentZone(TSoftObjectPtr<UWorld> _zone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLoadingZoneName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentZoneName() const;
    
    UFUNCTION(BlueprintCallable)
    bool CommitLoadZone();
    
    UFUNCTION(BlueprintCallable)
    void CancelZoneLoading();
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnPostLoadZone();
    
};

