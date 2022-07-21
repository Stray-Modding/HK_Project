#pragma once
#include "CoreMinimal.h"
#include "EZurgBehavior.generated.h"

UENUM(BlueprintType)
enum class EZurgBehavior : uint8 {
    ZurgBehavior_None,
    ZurgBehavior_Escaping,
    ZurgBehavior_MAX UMETA(Hidden),
};

