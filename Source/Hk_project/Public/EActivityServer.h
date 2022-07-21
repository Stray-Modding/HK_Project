#pragma once
#include "CoreMinimal.h"
#include "EActivityServer.generated.h"

UENUM(BlueprintType)
enum class EActivityServer : uint8 {
    Idle,
    SendingReset,
    SendingAvailability,
    SendingStart,
    SendingEnd,
};

