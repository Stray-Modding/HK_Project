// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "PID.generated.h"

// Tips for tuning PID controller correctly
// https://robotics.stackexchange.com/questions/167/what-are-good-strategies-for-tuning-pid-loops
// https://en.wikipedia.org/wiki/PID_controller#Loop_tuning

template <typename T>
T ProcessPIDController(T _current, T _target, float _dt, float _kP, float _kI, float _kD, T& _error, T& _integral, T& _derivative)
{
	// https://en.wikipedia.org/wiki/PID_controller#Pseudocode
	T lastError = _error;
	_error = _target - _current;
	_integral = _integral + _error * _dt;
	_derivative = (_error - lastError) / _dt;

	return _kP * _error + _kI * _integral + _kD * _derivative;
}

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FFloatPIDController
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float P = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float I = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float D = 1.f;

	float Update(float _current, float _target, float _dt);
	void Reset();

private:
	float m_error = 0.f;
	float m_integral = 0.f;
	float m_derivative = 0.f;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FVectorPIDController
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float P = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float I = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float D = 1.f;

	FVector Update(FVector _current, FVector _target, float _dt);
	void Reset();

private:
	FVector m_error = FVector::ZeroVector;
	FVector m_integral = FVector::ZeroVector;
	FVector m_derivative = FVector::ZeroVector;
};

/**
 * 
 */
UCLASS()
class JOYLIBRARYRUNTIME_API UPIDTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Joy|PID") static float UpdateFloatPIDController(UPARAM(ref) FFloatPIDController& _PID, float _current, float _target, float _dt);
	UFUNCTION(BlueprintCallable, Category = "Joy|PID") static void ResetFloatPIDController(UPARAM(ref) FFloatPIDController& _PID);
	UFUNCTION(BlueprintCallable, Category = "Joy|PID") static FVector UpdateVectorPIDController(UPARAM(ref) FVectorPIDController& _PID, FVector _current, FVector _target, float _dt);
	UFUNCTION(BlueprintCallable, Category = "Joy|PID") static void ResetVectorPIDController(UPARAM(ref) FVectorPIDController& _PID);
	
};
