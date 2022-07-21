#pragma once
#include "CoreMinimal.h"
#include "EDroneGUIAllowInputMode.generated.h"

UENUM(BlueprintType)
enum EDroneGUIAllowInputMode {
    DroneGUIAllowInputMode_NoInput,
    DroneGUIAllowInputMode_Buttons,
    DroneGUIAllowInputMode_ButtonsExceptJump,
    DroneGUIAllowInputMode_AllInput,
    DroneGUIAllowInputMode_MAX UMETA(Hidden),
};

