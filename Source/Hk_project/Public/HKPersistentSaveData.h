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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<FName> UnlockedMemories;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TMap<FName, uint64> StatCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<FName> ScratchedChapters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName MaxUnlockedChapterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FActivitiesState ActivitiesState;
    
public:
    UHKPersistentSaveData();
    UFUNCTION(BlueprintCallable)
    void UnlockMemory(FName _memoryId);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockedMemories(const TSet<FName>& _memories);
    
    UFUNCTION(BlueprintCallable)
    void LockMemory(FName _memoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMemoryUnlocked(FName _memoryId) const;
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FName> GetUnlockedMemories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString BlueprintToString() const;
    
};

