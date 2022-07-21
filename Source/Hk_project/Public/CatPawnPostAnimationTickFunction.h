#pragma once
#include "CoreMinimal.h"
#include "CatPawnTickFunction.h"
#include "CatPawnPostAnimationTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCatPawnPostAnimationTickFunction : public FCatPawnTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnPostAnimationTickFunction();
};

