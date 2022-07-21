#pragma once
#include "CoreMinimal.h"
#include "EInputTransitionMode.generated.h"

UENUM(BlueprintType)
enum class EInputTransitionMode : uint8 {
    InputTransitionMode_None,
    InputTransitionMode_KeepPreviousInput,
    InputTransitionMode_Blend,
    InputTransitionMode_BlendIfDirectionChanges,
    InputTransitionMode_MAX UMETA(Hidden),
};

