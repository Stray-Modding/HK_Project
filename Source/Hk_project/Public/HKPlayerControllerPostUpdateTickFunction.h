#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "HKPlayerControllerPostUpdateTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FHKPlayerControllerPostUpdateTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FHKPlayerControllerPostUpdateTickFunction();
};

template<>
struct TStructOpsTypeTraits<FHKPlayerControllerPostUpdateTickFunction> : public TStructOpsTypeTraitsBase2<FHKPlayerControllerPostUpdateTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

