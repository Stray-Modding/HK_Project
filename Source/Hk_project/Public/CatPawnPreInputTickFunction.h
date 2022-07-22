#pragma once
#include "CoreMinimal.h"
#include "CatPawnTickFunction.h"
#include "CatPawnPreInputTickFunction.generated.h"

USTRUCT()
struct FCatPawnPreInputTickFunction : public FCatPawnTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnPreInputTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCatPawnPreInputTickFunction> : public TStructOpsTypeTraitsBase2<FCatPawnPreInputTickFunction>
{
    enum
    {
        WithCopy = false
    };
};