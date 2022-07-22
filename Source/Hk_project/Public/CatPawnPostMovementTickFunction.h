#pragma once
#include "CoreMinimal.h"
#include "CatPawnTickFunction.h"
#include "CatPawnPostMovementTickFunction.generated.h"

USTRUCT()
struct FCatPawnPostMovementTickFunction : public FCatPawnTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnPostMovementTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCatPawnPostMovementTickFunction> : public TStructOpsTypeTraitsBase2<FCatPawnPostMovementTickFunction>
{
    enum
    {
        WithCopy = false
    };
};