#pragma once
#include "CoreMinimal.h"
#include "ELookAtType.generated.h"

UENUM(BlueprintType)
enum ELookAtType {
    LookAtType_None,
    LookAtType_RelativeTarget,
    LookAtType_Target,
    LookAtType_Actor,
    LookAtType_Component,
    LookAtType_MAX UMETA(Hidden),
};

