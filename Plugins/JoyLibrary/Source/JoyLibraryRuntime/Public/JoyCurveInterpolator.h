#pragma once
#include "CoreMinimal.h"
#include "JoyInterpolator.h"
#include "JoyCurveInterpolator.generated.h"

class UJoyCurveInterpolator;
class UObject;
class UJoyEasingInterpolator;
class UCurveFloat;

UCLASS()
class JOYLIBRARYRUNTIME_API UJoyCurveInterpolator : public UJoyInterpolator {
    GENERATED_BODY()
public:
    UJoyCurveInterpolator();
    UFUNCTION(BlueprintCallable)
    static UJoyCurveInterpolator* StartCurveInterpolator(UObject* WorldContextObject, UJoyEasingInterpolator*& _interpolatorObject, UCurveFloat* _curveAsset, float _playRate);
    
};

