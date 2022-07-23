// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Assert.h"
#include "Log.h"
#include "MacroUtils.h"
#include "Misc/MessageDialog.h"
#include "Misc/Paths.h"

class UCurveFloat;
class UCanvas;

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include <Assert.h>

#include "Smoother.generated.h"

template<typename T>
JOYLIBRARYRUNTIME_API FORCEINLINE void DampSpring(T& _v0, const T& _target, T& _vel, float _time90, float _dt)
{
	if (_time90 <= SMALL_NUMBER)
	{
		_v0 = _target;
		_vel = T(0.0f);
		return;
	}

	const float c0 = _dt * 3.75f / _time90;

	if (c0 >= 1.0f)
	{
		// here, constant is too small, spring too stiff.  so go the whole way to prevent oscillation.
		_v0 = _target;
		_vel = T(0.0f);
		return;
	}

	const T delta = _target - _v0;
	const T force = delta - 2.0f * _vel;

	_v0 += _vel * c0;

	_vel += force * c0;
}

JOYLIBRARYRUNTIME_API void DampSpring(FQuat& _v0, const FQuat& _target, FQuat& _vel, float _time90, float _dt);


template <typename T>
T Average(const TArray<T>& _samples)
{
	JOY_ASSERT(_samples.Num() > 0);

	T average = _samples[0];
	for (int i = 1; i < _samples.Num(); ++i)
	{
		average += _samples[i];
	}
	average = average / float(_samples.Num());
	return average;
}

FQuat Average(const TArray<FQuat>& _samples);

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherFloat
{
	GENERATED_BODY()

	FSmootherFloat(float _timeTo90Percent = 0.f) : TimeTo90Percent(_timeTo90Percent) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeTo90Percent = 0.f;
	UPROPERTY(BlueprintReadWrite) float Value = 0.f;
	UPROPERTY(BlueprintReadWrite) float Velocity = 0.f;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherVector
{
	GENERATED_BODY()

	FSmootherVector(float _timeTo90Percent = 0.f) : TimeTo90Percent(_timeTo90Percent) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeTo90Percent = 0.f;
	UPROPERTY(BlueprintReadWrite) FVector Value = FVector::ZeroVector;
	UPROPERTY(BlueprintReadWrite) FVector Velocity = FVector::ZeroVector;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherVectorByComponent
{
	GENERATED_BODY()

	FSmootherVectorByComponent(float _timeTo90PercentX = 0.f, float _timeTo90PercentY = 0.f, float _timeTo90PercentZ = 0.f)
		: TimeTo90PercentX(_timeTo90PercentX)
		, TimeTo90PercentY(_timeTo90PercentY)
		, TimeTo90PercentZ(_timeTo90PercentZ)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeTo90PercentX = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeTo90PercentY = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeTo90PercentZ = 0.f;
	UPROPERTY(BlueprintReadWrite) FVector Value = FVector::ZeroVector;
	UPROPERTY(BlueprintReadWrite) FVector Velocity = FVector::ZeroVector;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherRotation
{
	GENERATED_BODY()

	FSmootherRotation(float _timeTo90Percent = 0.f) : TimeTo90Percent(_timeTo90Percent) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeTo90Percent = 0.f;
	UPROPERTY(BlueprintReadWrite) FQuat Value = FQuat::Identity;
	UPROPERTY(BlueprintReadWrite) FQuat Velocity = FQuat::Identity;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherTransform
{
	GENERATED_BODY()

	FSmootherTransform(float _timeTo90Percent = 0.f) : TimeTo90Percent(_timeTo90Percent) {}

	friend class USmoother;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeTo90Percent = 0.f;

	FTransform GetValue() const
	{
		return FTransform(RotationSmoother.Value, LocationSmoother.Value, ScaleSmoother.Value);
	}

	FSmootherVector LocationSmoother;
	FSmootherRotation RotationSmoother;
	FSmootherVector ScaleSmoother;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherCurved
{
	GENERATED_BODY()

	enum EAccelerationState
	{
		AS_Stable,
		AS_Accelerating,
		AS_Decelerating
	};

public:
	float Update(float _target, float _dt);
	void SetAccelerationCurve(UCurveFloat* _curve);
	void SetDecelerationCurve(UCurveFloat* _curve);

	float GetValue() const { return m_value; }
	void SetValue(float _value);

	void DisplayDebug(UCanvas* _canvas, const FBox2D& _location);

private:
	UPROPERTY(EditAnywhere, Category = "Gameplay") UCurveFloat* m_accelerationCurve = nullptr;
	UPROPERTY(EditAnywhere, Category = "Gameplay") UCurveFloat* m_decelerationCurve = nullptr;

	UPROPERTY(EditAnywhere, Category = "Internal") float m_velocityChangeThreshold = 0.001f;

	EAccelerationState m_accelerationState = AS_Stable;
	UCurveFloat* m_currentCurve = nullptr;
	float m_currentTimeOnCurve = 0.f;
	float m_value = 0.f;
};

template <typename T>
struct FNoiseSmootherT
{
	void Reset(T _value)
	{
		m_time = 0.0;
		m_rawSamples.Empty();
		m_value = _value;
	}

	T Update(float _dt, T _value, float _samplingTime, int _sampleCount)
	{
		JOY_ASSERT(_sampleCount >= 1);

		// To avoid loosing precision on m_time we simplify all updates with a delta time superior to the sampling time
		if (_dt > _samplingTime)
		{
			m_rawSamples.Empty();

			FSample sample;
			sample.Time = m_time;
			sample.Value = _value;
			m_rawSamples.Add(sample);

			m_value = _value;

			return m_value;
		}

		m_time += _dt;

		if (m_rawSamples.Num() > 0 && m_rawSamples.Last().Time == m_time)
		{
			m_rawSamples.Last().Value = _value;
		} 
		else
		{
			FSample sample;
			sample.Time = m_time;
			sample.Value = _value;
			m_rawSamples.Add(sample);
		}

		int sampleCount = m_rawSamples.Num();
		
		m_samples.Empty();
		m_samples.Reserve(_sampleCount);

		JOY_ASSERT(m_rawSamples.Num());
		float samplingStep = _samplingTime / float(_sampleCount);
		int currentRawSample = m_rawSamples.Num() - 1;
		for (int i = 0u; i < _sampleCount; ++i)
		{
			double t = m_time - float(i) * samplingStep;
			T sampleValue;
			for (int j = currentRawSample; j >= 0; --j)
			{
				if (j > 0)
				{
					if (t <= m_rawSamples[j].Time && t > m_rawSamples[j - 1].Time)
					{
						currentRawSample = j;
						double ratio = (t - m_rawSamples[j].Time) / (m_rawSamples[j - 1].Time - m_rawSamples[j].Time);
						sampleValue = FMath::Lerp(m_rawSamples[j].Value, m_rawSamples[j-1].Value, ratio);
						break;
					}
				}
				else
				{
					currentRawSample = j;
					sampleValue = m_rawSamples[j].Value;
				}
			}

			m_samples.Add(sampleValue);
		}

		if (currentRawSample > 0)
		{
			m_rawSamples.RemoveAt(0, currentRawSample - 1);
		}

		m_value = Average(m_samples);
		return m_value;
	}

	T GetValue() const
	{
		return m_value;
	}

private:

	struct FSample
	{
		T Value;
		double Time = 0.0;
	};

	double m_time = 0.0;
	TArray<FSample> m_rawSamples;
	TArray<T> m_samples;
	T m_value;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherFloat
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float SamplingTime = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int SampleCount = 5;

	void Reset(float _value) { m_smoother.Reset(_value); }
	float Update(float _dt, float _value) { return m_smoother.Update(_dt, _value, SamplingTime, SampleCount); }
	float GetValue() const { return m_smoother.GetValue(); }

private:
	FNoiseSmootherT<float> m_smoother;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherDouble
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float SamplingTime = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int SampleCount = 5;

	void Reset(double _value) { m_smoother.Reset(_value); }
	double Update(float _dt, double _value) { return m_smoother.Update(_dt, _value, SamplingTime, SampleCount); }
	double GetValue() const { return m_smoother.GetValue(); }

private:
	FNoiseSmootherT<double> m_smoother;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherVector
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float SamplingTime = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int SampleCount = 5;

	void Reset(FVector _value) { m_smoother.Reset(_value); }
	FVector Update(float _dt, FVector _value) { return m_smoother.Update(_dt, _value, SamplingTime, SampleCount); }
	FVector GetValue() const { return m_smoother.GetValue(); }

private:
	FNoiseSmootherT<FVector> m_smoother;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherVector2D
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float SamplingTime = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int SampleCount = 5;

	void Reset(FVector2D _value) { m_smoother.Reset(_value); }
	FVector2D Update(float _dt, FVector2D _value) { return m_smoother.Update(_dt, _value, SamplingTime, SampleCount); }
	FVector2D GetValue() const { return m_smoother.GetValue(); }

private:
	FNoiseSmootherT<FVector2D> m_smoother;
};

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FNoiseSmootherRotation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float SamplingTime = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int SampleCount = 5;

	void Reset(FQuat _value) { m_smoother.Reset(_value); }
	FQuat Update(float _dt, FQuat _value) { return m_smoother.Update(_dt, _value, SamplingTime, SampleCount); }
	FQuat GetValue() const { return m_smoother.GetValue(); }

private:
	FNoiseSmootherT<FQuat> m_smoother;
};


/**
 * 
 */
UCLASS()
class JOYLIBRARYRUNTIME_API USmoother : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void ResetSmootherFloat(UPARAM(ref) FSmootherFloat& _smoother, float _value = 0.f);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SetTimeTo90PercentFloat(UPARAM(ref) FSmootherFloat& _smoother, float _timeTo90Percent);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static float SmoothFloat(UPARAM(ref) FSmootherFloat& _smoother, float _target, float _deltaTime);
	
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void ResetSmootherVector(UPARAM(ref) FSmootherVector& _smoother, FVector _value = FVector::ZeroVector);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SetTimeTo90PercentVector(UPARAM(ref) FSmootherVector& _smoother, float _timeTo90Percent);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static FVector SmoothVector(UPARAM(ref) FSmootherVector& _smoother, FVector _target, float _deltaTime);

	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void ResetSmootherVectorByComponent(UPARAM(ref) FSmootherVectorByComponent& _smoother, FVector _value = FVector::ZeroVector);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SetTimeTo90PercentVectorByComponentX(UPARAM(ref) FSmootherVectorByComponent& _smoother, float _timeTo90PercentX);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SetTimeTo90PercentVectorByComponentY(UPARAM(ref) FSmootherVectorByComponent& _smoother, float _timeTo90PercentY);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SetTimeTo90PercentVectorByComponentZ(UPARAM(ref) FSmootherVectorByComponent& _smoother, float _timeTo90PercentZ);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static FVector SmoothVectorByComponent(UPARAM(ref) FSmootherVectorByComponent& _smoother, FVector _target, float _deltaTime);

	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void ResetSmootherRotation(UPARAM(ref) FSmootherRotation& _smoother, FRotator _value = FRotator::ZeroRotator);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SetTimeTo90PercentRotation(UPARAM(ref) FSmootherRotation& _smoother, float _timeTo90Percent);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static FRotator SmoothRotation(UPARAM(ref) FSmootherRotation& _smoother, FRotator _target, float _deltaTime);
	UFUNCTION(BlueprintPure, Category = "Joy|Smoother") static FRotator GetRotator(const FSmootherRotation& _smoother);
	static void ResetSmootherRotation(UPARAM(ref) FSmootherRotation& _smoother, FQuat _value = FQuat::Identity);
	static FQuat SmoothRotation(UPARAM(ref) FSmootherRotation& _smoother, FQuat _target, float _deltaTime);

	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void ResetSmootherTransform(UPARAM(ref) FSmootherTransform& _smoother, FTransform _value);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SetTimeTo90PercentTransform(UPARAM(ref) FSmootherTransform& _smoother, float _timeTo90Percent);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static FTransform SmoothTransform(UPARAM(ref) FSmootherTransform& _smoother, FTransform _target, float _deltaTime);

	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static float SmootherCurvedTick(UPARAM(ref) FSmootherCurved& _smoother, float _target, float _dt);
	UFUNCTION(BlueprintPure, Category = "Joy|Smoother") static float SmootherCurvedGetValue(const FSmootherCurved& _smoother);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SmootherCurvedSetValue(UPARAM(ref) FSmootherCurved& _smoother, float _value);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SmootherCurvedSetAccelerationCurve(UPARAM(ref) FSmootherCurved& _smoother, UCurveFloat* _curve);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void SmootherCurvedSetDecelerationCurve(UPARAM(ref) FSmootherCurved& _smoother, UCurveFloat* _curve);

	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void ResetNoiseSmootherFloat(UPARAM(ref) FNoiseSmootherFloat& _noiseSmoother, float _value);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static float UpdateNoiseSmootherFloat(UPARAM(ref) FNoiseSmootherFloat& _noiseSmoother, float _dt, float _value);
	UFUNCTION(BlueprintPure, Category = "Joy|Smoother") static float GetNoiseSmootherFloatValue(UPARAM(ref) FNoiseSmootherFloat& _noiseSmoother);

	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void ResetNoiseSmootherVector(UPARAM(ref) FNoiseSmootherVector& _noiseSmoother, FVector _value);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static FVector UpdateNoiseSmootherVector(UPARAM(ref) FNoiseSmootherVector& _noiseSmoother, float _dt, FVector _value);
	UFUNCTION(BlueprintPure, Category = "Joy|Smoother") static FVector GetNoiseSmootherVectorValue(UPARAM(ref) FNoiseSmootherVector& _noiseSmoother);

	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void ResetNoiseSmootherVector2D(UPARAM(ref) FNoiseSmootherVector2D& _noiseSmoother, FVector2D _value);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static FVector2D UpdateNoiseSmootherVector2D(UPARAM(ref) FNoiseSmootherVector2D& _noiseSmoother, float _dt, FVector2D _value);
	UFUNCTION(BlueprintPure, Category = "Joy|Smoother") static FVector2D GetNoiseSmootherVector2DValue(UPARAM(ref) FNoiseSmootherVector2D& _noiseSmoother);

	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static void ResetNoiseSmootherRotation(UPARAM(ref) FNoiseSmootherRotation& _noiseSmoother, FRotator _value);
	UFUNCTION(BlueprintCallable, Category = "Joy|Smoother") static FRotator UpdateNoiseSmootherRotation(UPARAM(ref) FNoiseSmootherRotation& _noiseSmoother, float _dt, FRotator _value);
	UFUNCTION(BlueprintPure, Category = "Joy|Smoother") static FRotator GetNoiseSmootherRotationValue(UPARAM(ref) FNoiseSmootherRotation& _noiseSmoother);
};
