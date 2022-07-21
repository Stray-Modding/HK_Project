#pragma once
#include "CoreMinimal.h"
#include "ECatAttitude.generated.h"

UENUM(BlueprintType)
enum ECatAttitude {
    CatAttitude_Normal,
    CatAttitude_Stealthy,
    CatAttitude_Hurt,
    CatAttitude_BackpackFirstTime,
    CatAttitude_MAX UMETA(Hidden),
};

