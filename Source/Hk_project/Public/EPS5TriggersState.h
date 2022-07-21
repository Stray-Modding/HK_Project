#pragma once
#include "CoreMinimal.h"
#include "EPS5TriggersState.generated.h"

UENUM(BlueprintType)
enum class EPS5TriggersState : uint8 {
    PS5TriggersState_None,
    PS5TriggersState_Scratchable,
    PS5TriggersState_MAX UMETA(Hidden),
};

