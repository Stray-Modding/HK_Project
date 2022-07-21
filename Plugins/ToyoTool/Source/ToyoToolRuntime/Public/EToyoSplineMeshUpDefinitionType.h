#pragma once
#include "CoreMinimal.h"
#include "EToyoSplineMeshUpDefinitionType.generated.h"

UENUM(BlueprintType)
enum class EToyoSplineMeshUpDefinitionType : uint8 {
    SplineUpAverage,
    DefaultValue,
    OldToyoToolMethod,
    Custom,
};

