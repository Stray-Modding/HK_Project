#pragma once

class USplineComponent;

// Unreal includes
#include <CoreMinimal.h>
#include <Components/SplineComponent.h>

// Plugins include

// Game includes
#include "SplineTools.generated.h"

JOYLIBRARYRUNTIME_API float FindDistanceAlongSplineClosestToWorldLocation(const USplineComponent* _spline, const FVector& _worldLocation, int32 _distanceSolverIterations = 3);
JOYLIBRARYRUNTIME_API float FindDistanceFromLocationOnSplineToEndOfSpline(const USplineComponent* _spline, const FVector& _location);
JOYLIBRARYRUNTIME_API FVector FindLocationAheadOnSpline(const USplineComponent* _spline, const FVector& _location, const float _distance, ESplineCoordinateSpace::Type _splineCoordinateSpace = ESplineCoordinateSpace::World);

UCLASS()
class JOYLIBRARYRUNTIME_API USplineTool : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Joy|Spline") static float FindDistanceAlongSplineClosestToWorldLocation(const USplineComponent* _spline, const FVector& _worldLocation, int32 _distanceSolverIterations = 3);
	
	/** Find the distance on the spline closest from your world location on spline to the end of the spline */
	UFUNCTION(BlueprintPure, Category = "Joy|Spline") static float FindDistanceFromLocationOnSplineToEndOfSpline(const USplineComponent* _spline, const FVector& _location);
	
	/** Find the location on the spline from the closest location on spline from your location to the spline location ahead */
	UFUNCTION(BlueprintPure, Category = "Joy|Spline") static FVector FindLocationAheadOnSpline(const USplineComponent* _spline, const FVector& _location, const float _distance, ESplineCoordinateSpace::Type _splineCoordinateSpace = ESplineCoordinateSpace::World);
};



