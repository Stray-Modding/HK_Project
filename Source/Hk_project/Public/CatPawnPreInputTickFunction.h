#pragma once
#include "CoreMinimal.h"
#include "CatPawnTickFunction.h"
#include "CatPawnPreInputTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCatPawnPreInputTickFunction : public FCatPawnTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnPreInputTickFunction();
};

