#include "Smoother.h"

class UCurveFloat;

FVector2D USmoother::UpdateNoiseSmootherVector2D(FNoiseSmootherVector2D& _noiseSmoother, float _dt, FVector2D _value) {
    return FVector2D{};
}

FVector USmoother::UpdateNoiseSmootherVector(FNoiseSmootherVector& _noiseSmoother, float _dt, FVector _value) {
    return FVector{};
}

FRotator USmoother::UpdateNoiseSmootherRotation(FNoiseSmootherRotation& _noiseSmoother, float _dt, FRotator _value) {
    return FRotator{};
}

float USmoother::UpdateNoiseSmootherFloat(FNoiseSmootherFloat& _noiseSmoother, float _dt, float _value) {
    return 0.0f;
}

FVector USmoother::SmoothVectorByComponent(FSmootherVectorByComponent& _smoother, FVector _target, float _deltaTime) {
    return FVector{};
}

FVector USmoother::SmoothVector(FSmootherVector& _smoother, FVector _target, float _deltaTime) {
    return FVector{};
}

FTransform USmoother::SmoothTransform(FSmootherTransform& _smoother, FTransform _target, float _deltaTime) {
    return FTransform{};
}

FRotator USmoother::SmoothRotation(FSmootherRotation& _smoother, FRotator _target, float _deltaTime) {
    return FRotator{};
}

float USmoother::SmoothFloat(FSmootherFloat& _smoother, float _target, float _deltaTime) {
    return 0.0f;
}

float USmoother::SmootherCurvedTick(FSmootherCurved& _smoother, float _target, float _dt) {
    return 0.0f;
}

void USmoother::SmootherCurvedSetValue(FSmootherCurved& _smoother, float _value) {
}

void USmoother::SmootherCurvedSetDecelerationCurve(FSmootherCurved& _smoother, UCurveFloat* _curve) {
}

void USmoother::SmootherCurvedSetAccelerationCurve(FSmootherCurved& _smoother, UCurveFloat* _curve) {
}

float USmoother::SmootherCurvedGetValue(const FSmootherCurved& _smoother) {
    return 0.0f;
}

void USmoother::SetTimeTo90PercentVectorByComponentZ(FSmootherVectorByComponent& _smoother, float _timeTo90PercentZ) {
}

void USmoother::SetTimeTo90PercentVectorByComponentY(FSmootherVectorByComponent& _smoother, float _timeTo90PercentY) {
}

void USmoother::SetTimeTo90PercentVectorByComponentX(FSmootherVectorByComponent& _smoother, float _timeTo90PercentX) {
}

void USmoother::SetTimeTo90PercentVector(FSmootherVector& _smoother, float _timeTo90Percent) {
}

void USmoother::SetTimeTo90PercentTransform(FSmootherTransform& _smoother, float _timeTo90Percent) {
}

void USmoother::SetTimeTo90PercentRotation(FSmootherRotation& _smoother, float _timeTo90Percent) {
}

void USmoother::SetTimeTo90PercentFloat(FSmootherFloat& _smoother, float _timeTo90Percent) {
}

void USmoother::ResetSmootherVectorByComponent(FSmootherVectorByComponent& _smoother, FVector _value) {
}

void USmoother::ResetSmootherVector(FSmootherVector& _smoother, FVector _value) {
}

void USmoother::ResetSmootherTransform(FSmootherTransform& _smoother, FTransform _value) {
}

void USmoother::ResetSmootherRotation(FSmootherRotation& _smoother, FRotator _value) {
}

void USmoother::ResetSmootherFloat(FSmootherFloat& _smoother, float _value) {
}

void USmoother::ResetNoiseSmootherVector2D(FNoiseSmootherVector2D& _noiseSmoother, FVector2D _value) {
}

void USmoother::ResetNoiseSmootherVector(FNoiseSmootherVector& _noiseSmoother, FVector _value) {
}

void USmoother::ResetNoiseSmootherRotation(FNoiseSmootherRotation& _noiseSmoother, FRotator _value) {
}

void USmoother::ResetNoiseSmootherFloat(FNoiseSmootherFloat& _noiseSmoother, float _value) {
}

FRotator USmoother::GetRotator(const FSmootherRotation& _smoother) {
    return FRotator{};
}

FVector USmoother::GetNoiseSmootherVectorValue(FNoiseSmootherVector& _noiseSmoother) {
    return FVector{};
}

FVector2D USmoother::GetNoiseSmootherVector2DValue(FNoiseSmootherVector2D& _noiseSmoother) {
    return FVector2D{};
}

FRotator USmoother::GetNoiseSmootherRotationValue(FNoiseSmootherRotation& _noiseSmoother) {
    return FRotator{};
}

float USmoother::GetNoiseSmootherFloatValue(FNoiseSmootherFloat& _noiseSmoother) {
    return 0.0f;
}

USmoother::USmoother() {
}

