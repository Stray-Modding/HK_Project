#include "SplineTool.h"

class USplineComponent;

FVector USplineTool::FindLocationAheadOnSpline(const USplineComponent* _spline, const FVector& _location, const float _distance, TEnumAsByte<ESplineCoordinateSpace::Type> _splineCoordinateSpace) {
    return FVector{};
}

float USplineTool::FindDistanceFromLocationOnSplineToEndOfSpline(const USplineComponent* _spline, const FVector& _location) {
    return 0.0f;
}

float USplineTool::FindDistanceAlongSplineClosestToWorldLocation(const USplineComponent* _spline, const FVector& _worldLocation, int32 _distanceSolverIterations) {
    return 0.0f;
}

void USplineTool::DrawSplineComponent(const USplineComponent* _spline, float _thickness, FColor _color, bool _persistentLines, float _lifeTime) {
}

USplineTool::USplineTool() {
}

