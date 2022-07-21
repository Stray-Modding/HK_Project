#pragma once
#include "CoreMinimal.h"
#include "ECameraInputMode.generated.h"

UENUM(BlueprintType)
enum class ECameraInputMode : uint8 {
    CameraInputMode_GamePad,
    CameraInputMode_Mouse,
    CameraInputMode_GamePadAndMouse,
    CameraInputMode_MAX UMETA(Hidden),
};

