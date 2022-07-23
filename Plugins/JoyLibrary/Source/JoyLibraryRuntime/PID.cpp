// Fill out your copyright notice in the Description page of Project Settings.

#include "PID.h"

float FFloatPIDController::Update(float _current, float _target, float _dt)
{
	return ProcessPIDController(_current, _target, _dt, P, I, D, m_error, m_integral, m_derivative);
}

void FFloatPIDController::Reset()
{
	m_error = 0.f;
	m_integral = 0.f;
	m_derivative = 0.f;
}

FVector FVectorPIDController::Update(FVector _current, FVector _target, float _dt)
{
	return ProcessPIDController(_current, _target, _dt, P, I, D, m_error, m_integral, m_derivative);
}

void FVectorPIDController::Reset()
{
	m_error = FVector::ZeroVector;
	m_integral = FVector::ZeroVector;
	m_derivative = FVector::ZeroVector;
}

float UPIDTools::UpdateFloatPIDController(FFloatPIDController& _PID, float _current, float _target, float _dt)
{
	return _PID.Update(_current, _target, _dt);
}

void UPIDTools::ResetFloatPIDController(FFloatPIDController& _PID)
{
	_PID.Reset();
}

FVector UPIDTools::UpdateVectorPIDController(FVectorPIDController& _PID, FVector _current, FVector _target, float _dt)
{
	return _PID.Update(_current, _target, _dt);
}

void UPIDTools::ResetVectorPIDController(FVectorPIDController& _PID)
{
	_PID.Reset();
}
