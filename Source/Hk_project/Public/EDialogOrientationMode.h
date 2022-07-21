#pragma once
#include "CoreMinimal.h"
#include "EDialogOrientationMode.generated.h"

UENUM(BlueprintType)
enum EDialogOrientationMode {
    DialogOrientationMode_None,
    DialogOrientationMode_Cat,
    DialogOrientationMode_Actor,
    DialogOrientationMode_MAX UMETA(Hidden),
};

