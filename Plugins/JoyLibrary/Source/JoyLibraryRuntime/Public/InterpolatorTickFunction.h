#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "InterpolatorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FInterpolatorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    JOYLIBRARYRUNTIME_API FInterpolatorTickFunction();
};

