#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "HKPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class HK_PROJECT_API UHKPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    UHKPlayerInput();
};

