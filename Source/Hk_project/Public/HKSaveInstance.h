#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "SaveSlotCache.h"
#include "UObject/NoExportTypes.h"
#include "HKSaveInstance.generated.h"

class UHKSaveInstance;
class UHKGlobalSaveGame;
class UHKPersistentSaveData;
class UHKSessionSaveData;
class UHKSaveGame;

UCLASS(Blueprintable)
class HK_PROJECT_API UHKSaveInstance : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHKSaveInstanceDelegate, UHKSaveInstance*, _saveInstance);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHKPersistentSaveDelegate, UHKPersistentSaveData*, _persistentSaveData);
    
    UPROPERTY(BlueprintAssignable)
    FHKPersistentSaveDelegate UnlockedMemoriesChanged;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHKPersistentSaveData> m_persistentDataClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHKSessionSaveData> m_sessionDataClass;
    
    UPROPERTY()
    UHKSaveGame* m_saveData;
    
    UPROPERTY()
    UHKPersistentSaveData* m_persistentSaveData;
    
    UPROPERTY()
    UHKGlobalSaveGame* m_globalSaveData;
    
    UPROPERTY()
    UHKSessionSaveData* m_sessionSaveData;
    
    UPROPERTY()
    TArray<FSaveSlotCache> m_fixedSlotsCache;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_fixedSlotsCount;
    
public:
    UHKSaveInstance();
    UFUNCTION(BlueprintCallable)
    void SavePersistentDataToDisk();
    
    UFUNCTION(BlueprintPure)
    bool IsSaving() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsSaveEnabled() const;
    
    UFUNCTION(BlueprintPure)
    UHKSessionSaveData* GetSessionSaveData() const;
    
    UFUNCTION(BlueprintPure)
    UHKPersistentSaveData* GetPersistentSaveData() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SaveDataToDisk(bool _overridePlayerTransform, const FTransform& _playerTransform);
    
};

