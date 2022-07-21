#pragma once
#include "CoreMinimal.h"
#include "JoyInterpolator.h"
#include "EEasingFunction.h"
#include "JoyEasingInterpolator.generated.h"

class UJoyEasingInterpolator;
class UObject;

UCLASS()
class JOYLIBRARYRUNTIME_API UJoyEasingInterpolator : public UJoyInterpolator {
    GENERATED_BODY()
public:
    UJoyEasingInterpolator();
    UFUNCTION(BlueprintCallable)
    static UJoyEasingInterpolator* StartEasingInterpolator(UObject* WorldContextObject, TEnumAsByte<EEasingFunction> _easingFunction, float _time, UJoyEasingInterpolator*& _interpolatorObject);
    
};

