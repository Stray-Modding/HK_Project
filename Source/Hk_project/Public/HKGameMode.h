#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "HKGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class HK_PROJECT_API AHKGameMode : public AGameMode {
    GENERATED_BODY()
public:
    AHKGameMode();
};

