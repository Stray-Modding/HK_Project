#pragma once
#include "CoreMinimal.h"
#include "CatPawnTickFunction.h"
#include "CatPawnPostAnimationTickFunction.generated.h"

USTRUCT()
struct FCatPawnPostAnimationTickFunction : public FCatPawnTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnPostAnimationTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCatPawnPostAnimationTickFunction> : public TStructOpsTypeTraitsBase2<FCatPawnPostAnimationTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

