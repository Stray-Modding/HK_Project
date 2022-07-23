#include "SplineTools.h"

#include <Components/SplineComponent.h>


float FindDistanceAlongSplineClosestToWorldLocation(const USplineComponent* _spline, const FVector& _worldLocation, int32 _distanceSolverIterations)
{
	QUICK_SCOPE_CYCLE_COUNTER(STAT_FindDistanceAlongSplineClosestToWorldLocation);

	const float ClosestInputKey = _spline->FindInputKeyClosestToWorldLocation(_worldLocation);
	const int32 PreviousPoint = FMath::TruncToInt(ClosestInputKey);

	// Lerp between the previous and the next spline points
	float Distance = _spline->GetDistanceAlongSplineAtSplinePoint(PreviousPoint);
	Distance += (ClosestInputKey - PreviousPoint) * (_spline->GetDistanceAlongSplineAtSplinePoint(PreviousPoint + 1) - Distance);

	// The linear approximation is not enough. So here is a kinda numerical approximation.
	for (int32 i = 0; i < _distanceSolverIterations; ++i)
	{
		const float InputKeyAtDistance = _spline->SplineCurves.ReparamTable.Eval(Distance, 0.0f);
		// The euclidean distance between the current calculated distance and the real closest point
		const float Delta = (_spline->GetLocationAtSplineInputKey(InputKeyAtDistance, ESplineCoordinateSpace::World) - _spline->GetLocationAtSplineInputKey(ClosestInputKey, ESplineCoordinateSpace::World)).Size();
		if (InputKeyAtDistance < ClosestInputKey)
		{
			Distance += Delta;
		}
		else if (InputKeyAtDistance > ClosestInputKey)
		{
			Distance -= Delta;
		}
		else
		{
			break;
		}
	}
	return FMath::Clamp(Distance, 0.0f, _spline->GetSplineLength());
}

float FindDistanceFromLocationOnSplineToEndOfSpline(const USplineComponent* _spline, const FVector& _location)
{  
	return _spline->GetSplineLength() - (FindDistanceAlongSplineClosestToWorldLocation(_spline, _location));
}

FVector FindLocationAheadOnSpline(const USplineComponent* _spline, const FVector& _location, const float _distance, ESplineCoordinateSpace::Type _splineCoordinateSpace /*= ESplineCoordinateSpace::World*/)
{
	return _spline->GetLocationAtDistanceAlongSpline(FindDistanceAlongSplineClosestToWorldLocation(_spline, _location) + _distance, _splineCoordinateSpace);
}


// BlueprintFunctionLibrary
float USplineTool::FindDistanceAlongSplineClosestToWorldLocation(const USplineComponent* _spline, const FVector& _worldLocation, int32 _distanceSolverIterations/* = 3*/)
{
	return ::FindDistanceAlongSplineClosestToWorldLocation(_spline, _worldLocation, _distanceSolverIterations);
}

float USplineTool::FindDistanceFromLocationOnSplineToEndOfSpline(const USplineComponent* _spline, const FVector& _location)
{
	return ::FindDistanceFromLocationOnSplineToEndOfSpline(_spline, _location);
}

FVector USplineTool::FindLocationAheadOnSpline(const USplineComponent* _spline, const FVector& _location, const float _distance, ESplineCoordinateSpace::Type _splineCoordinateSpace/* = ESplineCoordinateSpace::World*/)
{
	return ::FindLocationAheadOnSpline(_spline, _location, _distance, _splineCoordinateSpace);
}


