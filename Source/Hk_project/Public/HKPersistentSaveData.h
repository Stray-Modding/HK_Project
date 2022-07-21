#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActivitiesState.h"
#include "HKPersistentSaveData.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKPersistentSaveData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    TSet<FName> UnlockedMemories;
    
    UPROPERTY(SaveGame)
    TMap<FName, uint64> StatCounts;
    
    UPROPERTY(SaveGame)
    TSet<FName> ScratchedChapters;
    
    UPROPERTY(SaveGame)
    FName MaxUnlockedChapterName;
    
    UPROPERTY(SaveGame)
    FActivitiesState ActivitiesState;
    
public:
    UHKPersistentSaveData();
    UFUNCTION(BlueprintCallable)
    void UnlockMemory(FName _memoryId);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockedMemories(const TSet<FName>& _memories);
    
    UFUNCTION(BlueprintCallable)
    void LockMemory(FName _memoryId);
    
    UFUNCTION(BlueprintPure)
    bool IsMemoryUnlocked(FName _memoryId) const;
    
    UFUNCTION()
    void Init();
    
    UFUNCTION(BlueprintPure)
    TSet<FName> GetUnlockedMemories() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString BlueprintToString() const;
    
};

