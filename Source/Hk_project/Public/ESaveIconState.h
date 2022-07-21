#pragma once
#include "CoreMinimal.h"
#include "ESaveIconState.generated.h"

UENUM(BlueprintType)
enum class ESaveIconState : uint8 {
    SaveIconState_Idle,
    SaveIconState_Flashing,
    SaveIconState_MAX UMETA(Hidden),
};

