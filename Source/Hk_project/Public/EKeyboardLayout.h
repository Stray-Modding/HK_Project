#pragma once
#include "CoreMinimal.h"
#include "EKeyboardLayout.generated.h"

UENUM(BlueprintType)
enum class EKeyboardLayout : uint8 {
    KeyboardLayout_QWERTY,
    KeyboardLayout_AZERTY,
    KeyboardLayout_QWERTZ,
    KeyboardLayout_MAX UMETA(Hidden),
};

