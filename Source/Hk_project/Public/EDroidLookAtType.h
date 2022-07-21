#pragma once
#include "CoreMinimal.h"
#include "EDroidLookAtType.generated.h"

UENUM(BlueprintType)
enum class EDroidLookAtType : uint8 {
    DroidLookAt_HeadOnly,
    DroidLookAt_SpineHeadOnly,
    DroidLookAt_SpineHeadAndHandIK,
    DroidLookAt_MAX UMETA(Hidden),
};

