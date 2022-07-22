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

template<>
struct TStructOpsTypeTraits<FCatPawnTickFunction> : public TStructOpsTypeTraitsBase2<FCatPawnTickFunction>
{
    enum
    {
        WithCopy = false
    };
};