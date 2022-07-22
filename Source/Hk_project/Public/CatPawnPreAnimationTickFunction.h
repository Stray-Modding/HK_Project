#pragma once
#include "CoreMinimal.h"
#include "CatPawnTickFunction.h"
#include "CatPawnPreAnimationTickFunction.generated.h"

USTRUCT()
struct FCatPawnPreAnimationTickFunction : public FCatPawnTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnPreAnimationTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCatPawnPreAnimationTickFunction> : public TStructOpsTypeTraitsBase2<FCatPawnPreAnimationTickFunction>
{
    enum
    {
        WithCopy = false
    };
};