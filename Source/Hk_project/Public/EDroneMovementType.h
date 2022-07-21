#pragma once
#include "CoreMinimal.h"
#include "EDroneMovementType.generated.h"

UENUM(BlueprintType)
enum EDroneMovementType {
    DroneMovementType_None,
    DroneMovementType_Spring,
    DroneMovementType_MoveTo,
    DroneMovementType_MAX UMETA(Hidden),
};

