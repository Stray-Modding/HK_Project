#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "CatPawnTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCatPawnTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnTickFunction();
};

