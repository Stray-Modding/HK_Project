#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Curves/CurveFloat.h"
#include "CurveTools.generated.h"

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UCurveTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCurveTools();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatValue(const FRuntimeFloatCurve& _curve, float _time);
    
};

