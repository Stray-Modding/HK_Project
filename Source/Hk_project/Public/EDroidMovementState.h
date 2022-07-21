#pragma once
#include "CoreMinimal.h"
#include "EDroidMovementState.generated.h"

UENUM(BlueprintType)
enum class EDroidMovementState : uint8 {
    DroidMovement_Waiting,
    DroidMovement_Starting,
    DroidMovement_Walking,
    DroidMovement_Stopping,
    DroidMovement_Turning,
    DroidMovement_Stepping,
    DroidMovement_None,
    DroidMovement_MAX UMETA(Hidden),
};

