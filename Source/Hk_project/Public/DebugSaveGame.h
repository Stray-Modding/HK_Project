#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DebugProfile.h"
#include "DebugSaveGame.generated.h"

UCLASS()
class HK_PROJECT_API UDebugSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bDebugProfileEnabled;
    
    UPROPERTY()
    FDebugProfile DebugProfile;
    
    UDebugSaveGame();
};

