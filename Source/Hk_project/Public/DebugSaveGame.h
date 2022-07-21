#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DebugProfile.h"
#include "DebugSaveGame.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UDebugSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugProfileEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugProfile DebugProfile;
    
    UDebugSaveGame();
};

