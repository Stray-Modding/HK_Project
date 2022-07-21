#pragma once
#include "CoreMinimal.h"
#include "NoiseSmootherVector2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NoiseSmootherVector.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NoiseSmootherFloat.h"
#include "UObject/NoExportTypes.h"
#include "NoiseSmootherRotation.h"
#include "SmootherVectorByComponent.h"
#include "SmootherVector.h"
#include "UObject/NoExportTypes.h"
#include "SmootherTransform.h"
#include "SmootherRotation.h"
#include "SmootherCurved.h"
#include "SmootherFloat.h"
#include "Smoother.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API USmoother : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USmoother();
    UFUNCTION(BlueprintCallable)
    static FVector2D UpdateNoiseSmootherVector2D(UPARAM(Ref) FNoiseSmootherVector2D& _noiseSmoother, float _dt, FVector2D _value);
    
    UFUNCTION(BlueprintCallable)
    static FVector UpdateNoiseSmootherVector(UPARAM(Ref) FNoiseSmootherVector& _noiseSmoother, float _dt, FVector _value);
    
    UFUNCTION(BlueprintCallable)
    static FRotator UpdateNoiseSmootherRotation(UPARAM(Ref) FNoiseSmootherRotation& _noiseSmoother, float _dt, FRotator _value);
    
    UFUNCTION(BlueprintCallable)
    static float UpdateNoiseSmootherFloat(UPARAM(Ref) FNoiseSmootherFloat& _noiseSmoother, float _dt, float _value);
    
    UFUNCTION(BlueprintCallable)
    static FVector SmoothVectorByComponent(UPARAM(Ref) FSmootherVectorByComponent& _smoother, FVector _target, float _deltaTime);
    
    UFUNCTION(BlueprintCallable)
    static FVector SmoothVector(UPARAM(Ref) FSmootherVector& _smoother, FVector _target, float _deltaTime);
    
    UFUNCTION(BlueprintCallable)
    static FTransform SmoothTransform(UPARAM(Ref) FSmootherTransform& _smoother, FTransform _target, float _deltaTime);
    
    UFUNCTION(BlueprintCallable)
    static FRotator SmoothRotation(UPARAM(Ref) FSmootherRotation& _smoother, FRotator _target, float _deltaTime);
    
    UFUNCTION(BlueprintCallable)
    static float SmoothFloat(UPARAM(Ref) FSmootherFloat& _smoother, float _target, float _deltaTime);
    
    UFUNCTION(BlueprintCallable)
    static float SmootherCurvedTick(UPARAM(Ref) FSmootherCurved& _smoother, float _target, float _dt);
    
    UFUNCTION(BlueprintCallable)
    static void SmootherCurvedSetValue(UPARAM(Ref) FSmootherCurved& _smoother, float _value);
    
    UFUNCTION(BlueprintCallable)
    static void SmootherCurvedSetDecelerationCurve(UPARAM(Ref) FSmootherCurved& _smoother, UCurveFloat* _curve);
    
    UFUNCTION(BlueprintCallable)
    static void SmootherCurvedSetAccelerationCurve(UPARAM(Ref) FSmootherCurved& _smoother, UCurveFloat* _curve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SmootherCurvedGetValue(const FSmootherCurved& _smoother);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTo90PercentVectorByComponentZ(UPARAM(Ref) FSmootherVectorByComponent& _smoother, float _timeTo90PercentZ);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTo90PercentVectorByComponentY(UPARAM(Ref) FSmootherVectorByComponent& _smoother, float _timeTo90PercentY);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTo90PercentVectorByComponentX(UPARAM(Ref) FSmootherVectorByComponent& _smoother, float _timeTo90PercentX);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTo90PercentVector(UPARAM(Ref) FSmootherVector& _smoother, float _timeTo90Percent);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTo90PercentTransform(UPARAM(Ref) FSmootherTransform& _smoother, float _timeTo90Percent);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTo90PercentRotation(UPARAM(Ref) FSmootherRotation& _smoother, float _timeTo90Percent);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTo90PercentFloat(UPARAM(Ref) FSmootherFloat& _smoother, float _timeTo90Percent);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSmootherVectorByComponent(UPARAM(Ref) FSmootherVectorByComponent& _smoother, FVector _value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSmootherVector(UPARAM(Ref) FSmootherVector& _smoother, FVector _value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSmootherTransform(UPARAM(Ref) FSmootherTransform& _smoother, FTransform _value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSmootherRotation(UPARAM(Ref) FSmootherRotation& _smoother, FRotator _value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSmootherFloat(UPARAM(Ref) FSmootherFloat& _smoother, float _value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetNoiseSmootherVector2D(UPARAM(Ref) FNoiseSmootherVector2D& _noiseSmoother, FVector2D _value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetNoiseSmootherVector(UPARAM(Ref) FNoiseSmootherVector& _noiseSmoother, FVector _value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetNoiseSmootherRotation(UPARAM(Ref) FNoiseSmootherRotation& _noiseSmoother, FRotator _value);
    
    UFUNCTION(BlueprintCallable)
    static void ResetNoiseSmootherFloat(UPARAM(Ref) FNoiseSmootherFloat& _noiseSmoother, float _value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRotator(const FSmootherRotation& _smoother);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetNoiseSmootherVectorValue(UPARAM(Ref) FNoiseSmootherVector& _noiseSmoother);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetNoiseSmootherVector2DValue(UPARAM(Ref) FNoiseSmootherVector2D& _noiseSmoother);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetNoiseSmootherRotationValue(UPARAM(Ref) FNoiseSmootherRotation& _noiseSmoother);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNoiseSmootherFloatValue(UPARAM(Ref) FNoiseSmootherFloat& _noiseSmoother);
    
};

