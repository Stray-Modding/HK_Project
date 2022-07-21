#pragma once
#include "CoreMinimal.h"
#include "EDrawMovementType.generated.h"

UENUM(BlueprintType)
enum EDrawMovementType {
    DrawMovementType_Line,
    DrawMovementType_Gizmo,
    DrawMovementType_MAX UMETA(Hidden),
};

