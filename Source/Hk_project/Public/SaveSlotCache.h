#pragma once
#include "CoreMinimal.h"
#include "SaveSlotCache.generated.h"

class UHKSaveGame;

USTRUCT(BlueprintType)
struct FSaveSlotCache {
    GENERATED_BODY()
public:
    UPROPERTY()
    UHKSaveGame* SaveGame;
    
    HK_PROJECT_API FSaveSlotCache();
};

