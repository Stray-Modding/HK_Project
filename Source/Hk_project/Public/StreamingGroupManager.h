#pragma once
#include "CoreMinimal.h"
#include "Manager.h"
#include "StreamingGroupSavedState.h"
#include "EStreamingState.h"
#include "StreamingGroupManager.generated.h"

class USaveComponent;
class UStreamingGroupPersistent;
class UStreamingGroup;
class UStreamingGroupDynamic;

UCLASS(Blueprintable)
class HK_PROJECT_API AStreamingGroupManager : public AManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStreamingGroupSaveLoadedDelegate, UStreamingGroup*, StreamingGroup);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamingGroupSaveLoadedDelegate OnStreamingGroupSaveLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStreamingGroupDynamic*> m_streamingGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStreamingGroupPersistent* m_persistentGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveComponent* m_saveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStreamingGroupSavedState> m_savedGroupsStates;
    
public:
    AStreamingGroupManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersistentGroupLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroupLoaded(const FName _name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable)
    void _OnPreLoadZone(const FString& _previousMapName, const FString& _nextMapName);
    
    UFUNCTION(BlueprintCallable)
    void _OnPostLoadZone();
    
    UFUNCTION(BlueprintCallable)
    void _BeforeSaved(USaveComponent* _saveComponent);
    
    UFUNCTION(BlueprintCallable)
    void _AfterLoaded(USaveComponent* _saveComponent);
    
};

