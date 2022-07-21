#pragma once
#include "CoreMinimal.h"
#include "EGameControllerType.generated.h"

UENUM(BlueprintType)
enum class EGameControllerType : uint8 {
    GameControllerType_Unknown,
    GameControllerType_XBOX,
    GameControllerType_PS4,
    GameControllerType_PS5,
    GameControllerType_SwitchPro,
    GameControllerType_KeyboardMouse,
    GameControllerType_MAX UMETA(Hidden),
};

