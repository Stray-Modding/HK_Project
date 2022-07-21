#include "MathTools.h"

FVector2D UMathTools::TimeIndependentLerpVector2D(const FVector2D& _base, const FVector2D& _target, float _timeTo90, float _dt) {
    return FVector2D{};
}

FVector UMathTools::TimeIndependentLerpVector(const FVector& _base, const FVector& _target, float _timeTo90, float _dt) {
    return FVector{};
}

FRotator UMathTools::TimeIndependentLerpRotator(const FRotator& _base, const FRotator& _target, float _timeTo90, float _dt) {
    return FRotator{};
}

float UMathTools::TimeIndependentLerpFloat(float _base, float _target, float _timeTo90, float _dt) {
    return 0.0f;
}

float UMathTools::SignedAngleBetween(const FVector& _a, const FVector& _b, FVector _UpVector) {
    return 0.0f;
}

bool UMathTools::SegmentSphereIntersection2D(const FVector2D& _segmentStart, const FVector2D& _segmentEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2) {
    return false;
}

bool UMathTools::SegmentSphereIntersection(const FVector& _segmentStart, const FVector& _segmentEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2) {
    return false;
}

FQuat UMathTools::RotatorToQuat(const FRotator& _rotator) {
    return FQuat{};
}

FRotator UMathTools::QuatToRotator(const FQuat& _quat) {
    return FRotator{};
}

bool UMathTools::LineSphereIntersection2D(const FVector2D& _lineStart, const FVector2D& _lineEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2) {
    return false;
}

bool UMathTools::LineSphereIntersection(const FVector& _lineStart, const FVector& _lineEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2) {
    return false;
}

bool UMathTools::LineLineShortestRoute(const FVector& _lineA1, const FVector& _lineA2, const FVector& _lineB1, const FVector& _lineB2, FVector& _resultA, FVector& _resultB, float& _ARatio, float& _BRatio) {
    return false;
}

bool UMathTools::IsNearlyZero(float _value, float _tolerance) {
    return false;
}

FVector2D UMathTools::GetYZ2D(const FVector& _vector) {
    return FVector2D{};
}

FVector UMathTools::GetYZ(const FVector& _vector) {
    return FVector{};
}

FVector2D UMathTools::GetXZ2D(const FVector& _vector) {
    return FVector2D{};
}

FVector UMathTools::GetXZ(const FVector& _vector) {
    return FVector{};
}

FVector2D UMathTools::GetXY2D(const FVector& _vector) {
    return FVector2D{};
}

FVector UMathTools::GetXY(const FVector& _vector) {
    return FVector{};
}

float UMathTools::GetSignedAngleBetweenRotators(const FRotator& _a, const FRotator& _b) {
    return 0.0f;
}

FVector UMathTools::GetRandomPointAroundLocationInTorus(FVector _location, FVector _direction, float _innerRadius, float _outterRadius) {
    return FVector{};
}

float UMathTools::GetProjectileTimeOfFlight(FVector _projectileVelocity) {
    return 0.0f;
}

FVector UMathTools::GetPredictedShootLocation(FVector _fromLocation, FVector _targetLocation, FVector _targetVelocity, float _projectileSpeed) {
    return FVector{};
}

FVector UMathTools::GetClosestPointToBox(const FBox& _box, const FVector& _point) {
    return FVector{};
}

float UMathTools::GetAngleBetweenRotators(const FRotator& _a, const FRotator& _b) {
    return 0.0f;
}

float UMathTools::ComputeSquaredDistanceToPoint(const FBox2D& _box, const FVector2D& _point) {
    return 0.0f;
}

void UMathTools::ComputeBarycentricCoordinates(const FVector& _point, const FVector& _a, const FVector& _b, const FVector& _C, float& _outU, float& _outV, float& _outW) {
}

FVector UMathTools::ClampVectorAngle(const FVector& _vector, const FVector& _forward, float _minAngleDeg, float _maxAngleDeg, const FVector& _up) {
    return FVector{};
}

float UMathTools::AngleBetween(const FVector& _a, const FVector& _b) {
    return 0.0f;
}

UMathTools::UMathTools() {
}

