#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "HKGlobalSaveGame.generated.h"

UCLASS()
class HK_PROJECT_API UHKGlobalSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LastUsedSlot;
    
    UPROPERTY()
    TArray<uint8> GameUserSettingsData;
    
    UPROPERTY()
    FString Culture;
    
    UHKGlobalSaveGame();
};

