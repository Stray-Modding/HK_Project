#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EEasingFunction.h"
#include "EasingTools.generated.h"

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UEasingTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEasingTools();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SineOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SineInOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SineIn(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float QuintOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float QuintInOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float QuintIn(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float QuartOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float QuartInOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float QuartIn(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float QuadOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float QuadInOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float QuadIn(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ExpoOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ExpoInOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ExpoIn(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintPure)
    static float Ease(TEnumAsByte<EEasingFunction> _function, float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CubeOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CubeInOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CubeIn(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CircOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CircInOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CircIn(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BounceOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BounceInOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BounceIn(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BackOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BackInOut(float _a, float _b, float _t);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BackIn(float _a, float _b, float _t);
    
};

