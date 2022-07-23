#pragma once
#include "CoreMinimal.h"
#include "JoyLibraryRuntime/Manager.h"
#include "EZoneLoadingType.h"
#include "ZoneManager.generated.h"

class UWorld;

UCLASS()
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
    
    UFUNCTION(BlueprintPure)
    bool IsZoneLoading() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoadZoneReadyForCommit() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentZone(TSoftObjectPtr<UWorld> _zone) const;
    
    UFUNCTION(BlueprintPure)
    FName GetLoadingZoneName() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentZoneName() const;
    
    UFUNCTION(BlueprintCallable)
    bool CommitLoadZone();
    
    UFUNCTION(BlueprintCallable)
    void CancelZoneLoading();
    
private:
    UFUNCTION()
    void _OnPostLoadZone();
    
};

