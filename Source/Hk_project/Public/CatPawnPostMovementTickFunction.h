#pragma once
#include "CoreMinimal.h"
#include "CatPawnTickFunction.h"
#include "CatPawnPostMovementTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCatPawnPostMovementTickFunction : public FCatPawnTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnPostMovementTickFunction();
};

