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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHKPersistentSaveDelegate UnlockedMemoriesChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHKPersistentSaveData> m_persistentDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHKSessionSaveData> m_sessionDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKSaveGame* m_saveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKPersistentSaveData* m_persistentSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKGlobalSaveGame* m_globalSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKSessionSaveData* m_sessionSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveSlotCache> m_fixedSlotsCache;
    
    UPROPERTY(EditAnywhere)
    uint8 m_fixedSlotsCount;
    
public:
    UHKSaveInstance();
    UFUNCTION(BlueprintCallable)
    void SavePersistentDataToDisk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSaveEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHKSessionSaveData* GetSessionSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHKPersistentSaveData* GetPersistentSaveData() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SaveDataToDisk(bool _overridePlayerTransform, const FTransform& _playerTransform);
    
};

