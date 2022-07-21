#pragma once
#include "CoreMinimal.h"
#include "EEasingFunction.generated.h"

UENUM(BlueprintType)
enum EEasingFunction {
    EF_Linear,
    EF_QuadIn,
    EF_QuadOut,
    EF_QuadInOut,
    EF_CubeIn,
    EF_CubeOut,
    EF_CubeInOut,
    EF_QuartIn,
    EF_QuartOut,
    EF_QuartInOut,
    EF_QuintIn,
    EF_QuintOut,
    EF_QuintInOut,
    EF_SineIn,
    EF_SineOut,
    EF_SineInOut,
    EF_BounceIn,
    EF_BounceOut,
    EF_BounceInOut,
    EF_CircIn,
    EF_CircOut,
    EF_CircInOut,
    EF_ExpoIn,
    EF_ExpoOut,
    EF_ExpoInOut,
    EF_BackIn,
    EF_BackOut,
    EF_BackInOut,
    EF_MAX UMETA(Hidden),
};

