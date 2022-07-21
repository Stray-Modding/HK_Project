#pragma once
#include "CoreMinimal.h"
#include "CatPawnTickFunction.h"
#include "CatPawnPreAnimationTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCatPawnPreAnimationTickFunction : public FCatPawnTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnPreAnimationTickFunction();
};

