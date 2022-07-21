#pragma once
#include "CoreMinimal.h"
#include "HKLevelSaveData.h"
#include "GameFramework/SaveGame.h"
#include "UObject/NoExportTypes.h"
#include "PlayerSaveData.h"
#include "HKSaveGame.generated.h"

UCLASS()
class HK_PROJECT_API UHKSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDateTime Timestamp;
    
    UPROPERTY()
    FName ZoneName;
    
    UPROPERTY()
    FPlayerSaveData PlayerData;
    
    UPROPERTY()
    TMap<FName, FHKLevelSaveData> LevelsData;
    
    UPROPERTY()
    TArray<uint8> PersistentData;
    
    UPROPERTY()
    TArray<uint8> SessionData;
    
private:
    UPROPERTY()
    FName ChapterName;
    
    UPROPERTY()
    uint32 Version;
    
public:
    UHKSaveGame();
};

