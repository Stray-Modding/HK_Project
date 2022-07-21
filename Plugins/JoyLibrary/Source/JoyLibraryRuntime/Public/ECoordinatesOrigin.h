#pragma once
#include "CoreMinimal.h"
#include "ECoordinatesOrigin.generated.h"

UENUM(BlueprintType)
enum ECoordinatesOrigin {
    CoordinatesOrigin_TopLeft,
    CoordinatesOrigin_Top,
    CoordinatesOrigin_TopRight,
    CoordinatesOrigin_Right,
    CoordinatesOrigin_BottomRight,
    CoordinatesOrigin_Bottom,
    CoordinatesOrigin_BottomLeft,
    CoordinatesOrigin_Left,
    CoordinatesOrigin_MAX UMETA(Hidden),
};

