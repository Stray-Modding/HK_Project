// Fill out your copyright notice in the Description page of Project Settings.

#include "Smoother.h"

#include <Curves/CurveFloat.h>

#include <Assert.h>
#include "CurveTools.h"
#include "Draw.h"
#include "MathTools.h"

void DampSpring(FQuat& _v0, const FQuat& _target, FQuat& _vel, float _time90, float _dt)
{
	if (_time90 <= SMALL_NUMBER)
	{
		_v0 = _target;
		_vel = FQuat::Identity;
		return;
	}

	const float c0 = _dt * 3.75f / _time90;

	if (c0 >= 1.0f)
	{
		// here, constant is too small, spring too stiff.  so go the whole way to prevent oscillation.
		_v0 = _target;
		_vel = FQuat::Identity;
		return;
	}

	/*const T delta = _target - _v0;
	const T force = delta - 2.0f * _vel;

	_v0 += _vel * c0;

	_vel += force * c0;*/

	_v0.EnforceShortestArcWith(_target);

	FQuat target = _target; // NOTE(Remi|2018/12/21): Copying the reference to a local variable to avoid weird memory alignment crash in DebugGame.
	const FQuat delta = _v0.Inverse() * target;
	
	const FQuat force = (_vel * _vel).Inverse() * delta;

	_v0 *= FQuat::Slerp(FQuat::Identity, _vel, c0);
	_vel *= FQuat::Slerp(FQuat::Identity, force, c0);
}

FQuat Average(const TArray<FQuat>& _samples)
{
	JOY_ASSERT(_samples.Num() > 0);

	// NOTE(Remi|2019/12/11): Code adapted from routine found here: https://forum.unity.com/threads/average-quaternions.86898/
	FQuat average = FQuat(0.f, 0.f, 0.f, 0.f);
	float weight;
	for (int i = 1; i < _samples.Num(); i++)
	{
		weight = 1.0f / (float)(i + 1);
		average = FQuat::SlerpFullPath_NotNormalized(average, _samples[i], weight);
	}
	return average.GetNormalized();
}

void USmoother::ResetSmootherFloat(FSmootherFloat& _smoother, float _value /*= 0.f*/)
{
	_smoother.Value = _value;
	_smoother.Velocity = 0.f;
}

void USmoother::SetTimeTo90PercentFloat(UPARAM(ref) FSmootherFloat& _smoother, float _timeTo90Percent)
{
	_smoother.TimeTo90Percent = _timeTo90Percent;
}

float USmoother::SmoothFloat(FSmootherFloat& _smoother, float _target, float _deltaTime)
{
	JOY_ASSERT(!IsNaN(_target) && IsFinite(_target));
	DampSpring(_smoother.Value, _target, _smoother.Velocity, _smoother.TimeTo90Percent, _deltaTime);
	JOY_ASSERT(!IsNaN(_smoother.Value) && IsFinite(_smoother.Value));
	return _smoother.Value;
}

void USmoother::ResetSmootherVector(FSmootherVector& _smoother, FVector _value /*= FVector::ZeroVector*/)
{
	_smoother.Value = _value;
	_smoother.Velocity = FVector::ZeroVector;
}

void USmoother::SetTimeTo90PercentVector(UPARAM(ref) FSmootherVector& _smoother, float _timeTo90Percent)
{
	_smoother.TimeTo90Percent = _timeTo90Percent;
}

FVector USmoother::SmoothVector(FSmootherVector& _smoother, FVector _target, float _deltaTime)
{
	JOY_ASSERT(!IsNaN(_target) && IsFinite(_target));
	DampSpring(_smoother.Value, _target, _smoother.Velocity, _smoother.TimeTo90Percent, _deltaTime);
	JOY_ASSERT(!IsNaN(_smoother.Value) && IsFinite(_smoother.Value));
	return _smoother.Value;
}

void USmoother::ResetSmootherVectorByComponent(FSmootherVectorByComponent& _smoother, FVector _value /*= FVector::ZeroVector*/)
{
	_smoother.Value = _value;
	_smoother.Velocity = FVector::ZeroVector;
}

void USmoother::SetTimeTo90PercentVectorByComponentX(FSmootherVectorByComponent& _smoother, float _timeTo90PercentX)
{
	_smoother.TimeTo90PercentX = _timeTo90PercentX;
}

void USmoother::SetTimeTo90PercentVectorByComponentY(FSmootherVectorByComponent& _smoother, float _timeTo90PercentY)
{
	_smoother.TimeTo90PercentY = _timeTo90PercentY;
}

void USmoother::SetTimeTo90PercentVectorByComponentZ(FSmootherVectorByComponent& _smoother, float _timeTo90PercentZ)
{
	_smoother.TimeTo90PercentZ = _timeTo90PercentZ;
}

FVector USmoother::SmoothVectorByComponent(FSmootherVectorByComponent& _smoother, FVector _target, float _deltaTime)
{
	JOY_ASSERT(!IsNaN(_target) && IsFinite(_target));

	DampSpring(_smoother.Value.X, _target.X, _smoother.Velocity.X, _smoother.TimeTo90PercentX, _deltaTime);
	DampSpring(_smoother.Value.Y, _target.Y, _smoother.Velocity.Y, _smoother.TimeTo90PercentY, _deltaTime);
	DampSpring(_smoother.Value.Z, _target.Z, _smoother.Velocity.Z, _smoother.TimeTo90PercentZ, _deltaTime);
;
	JOY_ASSERT(!IsNaN(_smoother.Value) && IsFinite(_smoother.Value));
	return _smoother.Value;
}

FRotator USmoother::GetRotator(const FSmootherRotation& _smoother)
{
	return _smoother.Value.Rotator();
}

void USmoother::ResetSmootherRotation(FSmootherRotation& _smoother, FQuat _value /*= FQuat::Identity*/)
{
	_smoother.Value = _value;
	_smoother.Velocity = FQuat::Identity;
}

FQuat USmoother::SmoothRotation(FSmootherRotation& _smoother, FQuat _target, float _deltaTime)
{
	JOY_ASSERT(!IsNaN(_target) && IsFinite(_target));
	DampSpring(_smoother.Value, _target, _smoother.Velocity, _smoother.TimeTo90Percent, _deltaTime);
	JOY_ASSERT(!IsNaN(_smoother.Value) && IsFinite(_smoother.Value));
	return _smoother.Value;
}

void USmoother::ResetSmootherRotation(FSmootherRotation& _smoother, FRotator _value /*= FRotator::ZeroRotator*/)
{
	ResetSmootherRotation(_smoother, _value.Quaternion());
}

FRotator USmoother::SmoothRotation(FSmootherRotation& _smoother, FRotator _target, float _deltaTime)
{
	return SmoothRotation(_smoother, _target.Quaternion(), _deltaTime).Rotator();
}

void USmoother::SetTimeTo90PercentRotation(FSmootherRotation& _smoother, float _timeTo90Percent)
{
	_smoother.TimeTo90Percent = _timeTo90Percent;
}

void USmoother::ResetSmootherTransform(FSmootherTransform& _smoother, FTransform _value)
{
	ResetSmootherVector(_smoother.LocationSmoother, _value.GetLocation());
	ResetSmootherRotation(_smoother.RotationSmoother, _value.GetRotation());
	ResetSmootherVector(_smoother.ScaleSmoother, _value.GetScale3D());
}

void USmoother::SetTimeTo90PercentTransform(FSmootherTransform& _smoother, float _timeTo90Percent)
{
	_smoother.TimeTo90Percent = _timeTo90Percent;
}

FTransform USmoother::SmoothTransform(FSmootherTransform& _smoother, FTransform _target, float _deltaTime)
{
	_smoother.LocationSmoother.TimeTo90Percent = _smoother.TimeTo90Percent;
	_smoother.RotationSmoother.TimeTo90Percent = _smoother.TimeTo90Percent;
	_smoother.ScaleSmoother.TimeTo90Percent = _smoother.TimeTo90Percent;

	SmoothVector(_smoother.LocationSmoother, _target.GetLocation(), _deltaTime);
	SmoothRotation(_smoother.RotationSmoother, _target.GetRotation(), _deltaTime);
	SmoothVector(_smoother.ScaleSmoother, _target.GetScale3D(), _deltaTime);

	return _smoother.GetValue();
}

float FSmootherCurved::Update(float _target, float _dt)
{
	_target = FMath::Clamp(_target, 0.f, 1.f);

	// STATE CHANGE
	float velocityDiff = _target - m_value;
	if (FMath::IsNearlyZero(velocityDiff, m_velocityChangeThreshold))
	{
		m_accelerationState = AS_Stable;
	}
	else
	{
		if (velocityDiff < -m_velocityChangeThreshold)
		{
			m_currentCurve = m_decelerationCurve;
			m_accelerationState = AS_Decelerating;
		}
		else
		{
			m_currentCurve = m_accelerationCurve;
			m_accelerationState = AS_Accelerating;
		}

		if (m_currentCurve)
		{
			bool result = FindTimeOnCurveForValue(m_currentCurve, m_value, &m_currentTimeOnCurve);
			JOY_ASSERT(result);
		}
		else
		{
			m_currentTimeOnCurve = 0.f;
		}
	}

	// PROCESS
	if (m_accelerationState != AS_Stable)
	{
		m_currentTimeOnCurve += _dt;

		if (m_currentCurve)
		{
			m_value = m_currentCurve->GetFloatValue(m_currentTimeOnCurve);

			if ((m_accelerationState == AS_Accelerating && m_value > _target) || (m_accelerationState == AS_Decelerating && m_value < _target))
			{
				bool result = FindTimeOnCurveForValue(m_currentCurve, m_value, &m_currentTimeOnCurve);
				JOY_ASSERT(result);
			}
		}
		else
		{
			m_value = _target;
		}
	}
	else
	{
		m_value = _target;
	}

	return m_value;
}

void FSmootherCurved::SetAccelerationCurve(UCurveFloat* _curve)
{
	if (_curve == m_accelerationCurve)
		return;

	m_accelerationCurve = _curve;
	if (m_accelerationState == AS_Accelerating && m_accelerationCurve)
	{
		bool result = FindTimeOnCurveForValue(m_accelerationCurve, m_value, &m_currentTimeOnCurve);
		JOY_ASSERT(result);
	}
}

void FSmootherCurved::SetDecelerationCurve(UCurveFloat* _curve)
{
	if (_curve == m_decelerationCurve)
		return;

	m_decelerationCurve = _curve;
	if (m_accelerationState == AS_Decelerating && m_decelerationCurve)
	{
		bool result = FindTimeOnCurveForValue(m_decelerationCurve, m_value, &m_currentTimeOnCurve);
		JOY_ASSERT(result);
	}
}

void FSmootherCurved::SetValue(float _value)
{
	m_value = _value;
	m_accelerationState = AS_Stable;
	m_currentTimeOnCurve = 0.f;
	m_currentCurve = nullptr;
}

void FSmootherCurved::DisplayDebug(UCanvas* _canvas, const FBox2D& _location)
{
	if (m_currentCurve)
	{
		float firstKeyTime = 0.f;
		float lastKeyTime = 0.f;
		m_currentCurve->GetCurves()[0].CurveToEdit->GetTimeRange(firstKeyTime, lastKeyTime);
		float time = m_currentTimeOnCurve;
		FindTimeOnCurveForValue(m_currentCurve, m_value, &time);
		DrawDebugCanvasCurve(_canvas, m_currentCurve, _location, firstKeyTime, lastKeyTime, time, m_currentCurve->GetName());
	}
}

float USmoother::SmootherCurvedTick(FSmootherCurved& _smoother, float _target, float _dt)
{
	return _smoother.Update(_target, _dt);
}

float USmoother::SmootherCurvedGetValue(const FSmootherCurved& _smoother)
{
	return _smoother.GetValue();
}

void USmoother::SmootherCurvedSetValue(FSmootherCurved& _smoother, float _value)
{
	_smoother.SetValue(_value);
}

void USmoother::SmootherCurvedSetAccelerationCurve(FSmootherCurved& _smoother, UCurveFloat* _curve)
{
	_smoother.SetAccelerationCurve(_curve);
}

void USmoother::SmootherCurvedSetDecelerationCurve(FSmootherCurved& _smoother, UCurveFloat* _curve)
{
	_smoother.SetDecelerationCurve(_curve);
}

void USmoother::ResetNoiseSmootherFloat(FNoiseSmootherFloat& _noiseSmoother, float _value)
{
	_noiseSmoother.Reset(_value);
}

float USmoother::UpdateNoiseSmootherFloat(FNoiseSmootherFloat& _noiseSmoother, float _dt, float _value)
{
	return _noiseSmoother.Update(_dt, _value);
}

float USmoother::GetNoiseSmootherFloatValue(FNoiseSmootherFloat& _noiseSmoother)
{
	return _noiseSmoother.GetValue();
}

void USmoother::ResetNoiseSmootherVector(FNoiseSmootherVector& _noiseSmoother, FVector _value)
{
	_noiseSmoother.Reset(_value);
}

FVector USmoother::UpdateNoiseSmootherVector(FNoiseSmootherVector& _noiseSmoother, float _dt, FVector _value)
{
	return _noiseSmoother.Update(_dt, _value);
}

FVector USmoother::GetNoiseSmootherVectorValue(FNoiseSmootherVector& _noiseSmoother)
{
	return _noiseSmoother.GetValue();
}

void USmoother::ResetNoiseSmootherVector2D(FNoiseSmootherVector2D& _noiseSmoother, FVector2D _value)
{
	_noiseSmoother.Reset(_value);
}

FVector2D USmoother::UpdateNoiseSmootherVector2D(FNoiseSmootherVector2D& _noiseSmoother, float _dt, FVector2D _value)
{
	return _noiseSmoother.Update(_dt, _value);
}

FVector2D USmoother::GetNoiseSmootherVector2DValue(FNoiseSmootherVector2D& _noiseSmoother)
{
	return _noiseSmoother.GetValue();
}

void USmoother::ResetNoiseSmootherRotation(FNoiseSmootherRotation& _noiseSmoother, FRotator _value)
{
	_noiseSmoother.Reset(_value.Quaternion());
}

FRotator USmoother::UpdateNoiseSmootherRotation(FNoiseSmootherRotation& _noiseSmoother, float _dt, FRotator _value)
{
	return _noiseSmoother.Update(_dt, _value.Quaternion()).Rotator();
}

FRotator USmoother::GetNoiseSmootherRotationValue(FNoiseSmootherRotation& _noiseSmoother)
{
	return _noiseSmoother.GetValue().Rotator();
}
