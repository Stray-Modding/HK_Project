#pragma once
#include "CoreMinimal.h"
#include "ECatMovementMode.generated.h"

UENUM(BlueprintType)
enum ECatMovementMode {
    CatMovementMode_Normal,
    CatMovementMode_SplineRail,
    CatMovementMode_InputDriven,
    CatMovementMode_MAX UMETA(Hidden),
};

