#pragma once
#include "CoreMinimal.h"
#include "ECatMoveToUsableState.generated.h"

UENUM(BlueprintType)
enum ECatMoveToUsableState {
    CatMoveToUsableState_None,
    CatMoveToUsableState_MovingTo,
    CatMoveToUsableState_Using,
    CatMoveToUsableState_MAX UMETA(Hidden),
};

