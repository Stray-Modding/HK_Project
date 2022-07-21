#pragma once
#include "CoreMinimal.h"
#include "ECatBendInputMode.generated.h"

UENUM(BlueprintType)
enum ECatBendInputMode {
    CatBendInputMode_Input,
    CatBendInputMode_Rotation,
    CatBendInputMode_MAX UMETA(Hidden),
};

