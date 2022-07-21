#pragma once
#include "CoreMinimal.h"
#include "Manager.h"
#include "StreamingGroupSavedState.h"
#include "EStreamingState.h"
#include "StreamingGroupManager.generated.h"

class UStreamingGroup;
class USaveComponent;
class UStreamingGroupDynamic;
class UStreamingGroupPersistent;

UCLASS()
class HK_PROJECT_API AStreamingGroupManager : public AManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStreamingGroupSaveLoadedDelegate, UStreamingGroup*, StreamingGroup);
    
    UPROPERTY()
    FStreamingGroupSaveLoadedDelegate OnStreamingGroupSaveLoaded;
    
private:
    UPROPERTY(Transient)
    TArray<UStreamingGroupDynamic*> m_streamingGroups;
    
    UPROPERTY(Transient)
    UStreamingGroupPersistent* m_persistentGroup;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    USaveComponent* m_saveComponent;
    
    UPROPERTY(SaveGame)
    TArray<FStreamingGroupSavedState> m_savedGroupsStates;
    
public:
    AStreamingGroupManager();
    UFUNCTION(BlueprintPure)
    bool IsStreamingInProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPersistentGroupLoaded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGroupLoaded(const FName _name) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGroupActive(const FName _name) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EStreamingState> GetPersistentGroupState();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EStreamingState> GetGroupState(const FName _name);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateGroup(const FName _name);
    
    UFUNCTION(BlueprintCallable)
    void ActivateGroup(const FName _name);
    
private:
    UFUNCTION()
    void _OnPreLoadZone(const FString& _previousMapName, const FString& _nextMapName);
    
    UFUNCTION()
    void _OnPostLoadZone();
    
    UFUNCTION()
    void _BeforeSaved(USaveComponent* _saveComponent);
    
    UFUNCTION()
    void _AfterLoaded(USaveComponent* _saveComponent);
    
};

