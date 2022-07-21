#pragma once
#include "CoreMinimal.h"
#include "EDroidMovementSplineMode.generated.h"

UENUM(BlueprintType)
enum class EDroidMovementSplineMode : uint8 {
    DroidMovementSplineMode_NavMesh,
    DroidMovementSplineMode_Manual,
    DroidMovementSplineMode_None,
    DroidMovementSplineMode_MAX UMETA(Hidden),
};

