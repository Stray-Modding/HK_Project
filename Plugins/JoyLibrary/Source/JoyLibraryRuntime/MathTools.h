#pragma once

#include <CoreMinimal.h>
#include <Kismet/BlueprintFunctionLibrary.h>

#include "MathTools.generated.h"

#define R2D (180.f / PI)
#define D2R (PI / 180.f)

template<typename T>
JOYLIBRARYRUNTIME_API FORCEINLINE T Clamp01(T _value)
{
	return FMath::Clamp(_value, T(0), T(1));
}

template<typename T>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsNaN(T _value)
{
	FMath::IsNaN(_value);
}

template<>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsNaN(float _value)
{
	return FMath::IsNaN(_value);
}

template<>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsNaN(FQuat _value)
{
	return IsNaN(_value.X) || IsNaN(_value.Y) || IsNaN(_value.Z) || IsNaN(_value.W);
}

template<>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsNaN(FRotator _value)
{
	return IsNaN(_value.Pitch) || IsNaN(_value.Yaw) || IsNaN(_value.Roll);
}

template<>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsNaN(FVector _value)
{
	return IsNaN(_value.X) || IsNaN(_value.Y) || IsNaN(_value.Z);
}

template<>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsNaN(FPlane _value)
{
	return IsNaN(_value.X) || IsNaN(_value.Y) || IsNaN(_value.Z) || IsNaN(_value.W);
}

template<typename T>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsFinite(T _value)
{
	FMath::IsFinite(_value);
}

template<>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsFinite(float _value)
{
	return FMath::IsFinite(_value);
}

template<>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsFinite(FVector _value)
{
	return IsFinite(_value.X) && IsFinite(_value.Y) && IsFinite(_value.Z);
}

template<>
JOYLIBRARYRUNTIME_API FORCEINLINE bool IsFinite(FQuat _value)
{
	return IsFinite(_value.X) && IsFinite(_value.Y) && IsFinite(_value.Z) && IsFinite(_value.W);
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector ProjectPointOnPlane(const FVector& _point, const FPlane& _plane)
{
	return _point - _plane.GetSafeNormal() * _plane.PlaneDot(_point);
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector ProjectVectorOnPlane(const FVector& _vector, const FPlane& _plane)
{
	FVector planeNormal = _plane.GetSafeNormal();
	return _vector - FVector::DotProduct(planeNormal, _vector) * planeNormal;
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector ProjectPointOnLine(const FVector& _point, const FVector& _lineA, const FVector& _lineB)
{
	FVector line = _lineB - _lineA;
	return _lineA + FVector::DotProduct(_point - _lineA, line) / FVector::DotProduct(line, line) * line;
}

JOYLIBRARYRUNTIME_API FORCEINLINE bool IsPointLeftFromLine(const FVector& _point, const FVector& _lineA, const FVector& _lineB, const FVector& _up = FVector::UpVector)
{
	return FVector::DotProduct(FVector::CrossProduct(_point - _lineA, _lineB - _lineA), _up) > 0.f;
}

/* In Radians */
JOYLIBRARYRUNTIME_API FORCEINLINE float AngleBetween(const FVector& _vectorA, const FVector& _vectorB)
{
	return FMath::Acos(FVector::DotProduct(_vectorA.GetSafeNormal(), _vectorB.GetSafeNormal()));
}

/* In Radians, Positive if B is right from A, negative if B is left A*/
JOYLIBRARYRUNTIME_API FORCEINLINE float SignedAngleBetween(const FVector& _vectorA, const FVector& _vectorB, const FVector& _up = FVector::UpVector)
{
	return AngleBetween(_vectorA, _vectorB) * (IsPointLeftFromLine(_vectorA, FVector::ZeroVector, _vectorB, _up) ? -1.f : 1.f);
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector GetYZ(const FVector& _vector)
{
	FVector v = _vector;
	v.X = 0.f;
	return v;
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector2D GetYZ2D(const FVector& _vector)
{
	return FVector2D(_vector.Y, _vector.Z);
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector GetXZ(const FVector& _vector)
{
	FVector v = _vector;
	v.Y = 0.f;
	return v;
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector2D GetXZ2D(const FVector& _vector)
{
	return FVector2D(_vector.X, _vector.Z);
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector GetXY(const FVector& _vector)
{
	FVector v = _vector;
	v.Z = 0.f;
	return v;
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector2D GetXY2D(const FVector& _vector)
{
	return FVector2D(_vector.X, _vector.Y);

}

template <typename T>
JOYLIBRARYRUNTIME_API FORCEINLINE T TimeIndependentLerp(T _base, T _target, float _ratio, float _dt)
{
	return FMath::Lerp(_base, _target, (1.f - FMath::Pow(_ratio, _dt)));
}

// NOTE(Remi|2019/05/30): See http://www.rorydriscoll.com/2016/03/07/frame-rate-independent-damping-using-lerp/
template <typename T>
JOYLIBRARYRUNTIME_API FORCEINLINE T TimeIndependentLerp2(T _base, T _target, float _timeTo90, float _dt)
{
	float lambda = -FMath::Loge(1.f - 0.9f) / _timeTo90;
	return FMath::Lerp(_base, _target, 1 - FMath::Exp(-lambda * _dt));
}

template <typename T>
JOYLIBRARYRUNTIME_API FORCEINLINE bool LineSphereIntersection(const T& _lineStart, const T& _lineEnd, const T& _sphereCenter, float _sphereRadius, float* _outT1 = nullptr, float* _outT2 = nullptr)
{
	T d = _lineEnd - _lineStart; // (Direction vector of ray, from start to end)
	T f = _lineStart - _sphereCenter; // (Vector from center sphere to ray start)

	float a = T::DotProduct(d, d);
	float b = 2 * T::DotProduct(f, d);
	float c = T::DotProduct(f, f) - _sphereRadius * _sphereRadius;

	float discriminant = b * b - 4 * a*c;
	if (discriminant < 0)
	{
		return false;
	}
	else
	{
		// ray didn't totally miss sphere,
		// so there is a solution to
		// the equation.

		discriminant = FMath::Sqrt(discriminant);

		// either solution may be on or off the ray so need to test both
		// t1 is always the smaller value, because BOTH discriminant and
		// a are nonnegative.
		float t1 = (-b - discriminant) / (2 * a);
		float t2 = (-b + discriminant) / (2 * a);

		if (_outT1) *_outT1 = t1;
		if (_outT2) *_outT2 = t2;

		return true;
	}
}

template <typename T>
JOYLIBRARYRUNTIME_API FORCEINLINE bool SegmentSphereIntersection(const T& _segmentStart, const T& _segmentEnd, const T& _sphereCenter, float _sphereRadius, float* _outT1 = nullptr, float* _outT2 = nullptr)
{
	float t1;
	float t2;
	if (!LineSphereIntersection(_segmentStart, _segmentEnd, _sphereCenter, _sphereRadius, &t1, &t2))
		return false;

	if (_outT1) *_outT1 = t1;
	if (_outT2) *_outT2 = t2;
	// 3x HIT cases:
		//          -o->             --|-->  |            |  --|->
		// Impale(t1 hit,t2 hit), Poke(t1 hit,t2>1), ExitWound(t1<0, t2 hit), 

		// 3x MISS cases:
		//       ->  o                     o ->              | -> |
		// FallShort (t1>1,t2>1), Past (t1<0,t2<0), CompletelyInside(t1<0, t2>1)

	if (t1 >= 0 && t1 <= 1)
	{
		// t1 is the intersection, and it's closer than t2
		// (since t1 uses -b - discriminant)
		// Impale, Poke
		return true;
	}

	// here t1 didn't intersect so we are either started
	// inside the sphere or completely past it
	if (t2 >= 0 && t2 <= 1)
	{
		// ExitWound
		return true;
	}

	// no intn: FallShort, Past, CompletelyInside
	return false;
}

JOYLIBRARYRUNTIME_API FORCEINLINE FVector FindClosestPointOnSegment(const FVector& _point, const FVector& _segmentStart, const FVector& _segmentEnd)
{
	FVector ab = _segmentEnd - _segmentStart;
	FVector av = _point - _segmentStart;

	float d1 = FVector::DotProduct(av, ab);
	if (d1 <= 0.0) // Point is lagging behind start of the segment, so perpendicular distance is not viable.
		return _segmentStart;

	FVector bv = _point - _segmentEnd;

	if (FVector::DotProduct(bv, ab) >= 0.0) // Point is advanced past the end of the segment, so perpendicular distance is not viable.
		return _segmentEnd;

	return _segmentStart + d1 / FVector::DotProduct(ab, ab) * ab;
}

JOYLIBRARYRUNTIME_API FORCEINLINE bool SegmentIntersectionOnPlaneSpace(const FVector& _A1, const FVector& _A2, const FVector& _B1, const FVector& _B2, const FPlane& _plane, FVector& _outIntersection)
{
	FTransform mat = FTransform(FRotationMatrix::MakeFromZ(_plane).ToQuat(), _plane * _plane.W, FVector::OneVector);
	FTransform invMat = mat.Inverse();

	FVector a1 = invMat.TransformPosition(_A1);
	FVector a2 = invMat.TransformPosition(_A2);
	FVector b1 = invMat.TransformPosition(_B1);
	FVector b2 = invMat.TransformPosition(_B2);

	if (!FMath::SegmentIntersection2D(a1, a2, b1, b2, _outIntersection))
		return false;

	_outIntersection = mat.TransformPosition(_outIntersection);
	return true;
}

JOYLIBRARYRUNTIME_API FORCEINLINE bool LinePlaneIntersection(const FVector& _lineStart, const FVector& _lineEnd, const FPlane& _plane, FVector* _outIntersection = nullptr, float* _outT = nullptr)
{
	// NOTE(Remi|2020/04/16): Would love to use UKismetMathLibrary::LinePlaneIntersection instead of writing my own function, but it is actually a SegmentPlaneIntersection function
	// Otherwise the code of this functions is almost just a copy paste of it
	FVector rayDir = _lineEnd - _lineStart;

	// Check ray is not parallel to plane
	if ((rayDir | _plane) == 0.0f)
	{
		return false;
	}

	float t = ((_plane.W - (_lineStart | _plane)) / (rayDir | _plane));

	if (_outIntersection) *_outIntersection = _lineStart + rayDir * t;
	if (_outT) *_outT = t;

	return true;
}

JOYLIBRARYRUNTIME_API bool PlanePlaneIntersection(const FPlane& _planeA, const FPlane& _planeB, const FVector* _referencePoint = nullptr, FVector* _outIntersectionLinePointA = nullptr, FVector* _outIntersectionLinePointB = nullptr);

/**
   Calculate the line segment resultA > resultB that is the shortest route between
   two lines A and B. Calculate also the values of ARatio and BRatio where
	  resultA = A1 + ARatio (A2 - A1)
	  resultB = B1 + BRatio (B2 - B1)
   Return false if no solution exists.
*/
JOYLIBRARYRUNTIME_API bool LineLineShortestRoute(const FVector& _lineA1, const FVector& _lineA2, const FVector& _lineB1, const FVector& _lineB2, FVector* _resultA = nullptr, FVector* _resultB = nullptr, float* _ARatio = nullptr, float* _BRatio = nullptr);

JOYLIBRARYRUNTIME_API bool IsPointInSphere(const FVector _sphereCenter, const float _sphereRadius, const FVector _pointToTest);

JOYLIBRARYRUNTIME_API bool IsPointInCone(const FVector _origin, const FVector _direction, const float _angleInDegree, const float _distance, const FVector _pointToTest);

JOYLIBRARYRUNTIME_API void GetBoxVertices(FBox _box, FVector *_result);

JOYLIBRARYRUNTIME_API FVector GetRandomPointAroundLocationInTorus(FVector _location, FVector _direction, float _innerRadius, float _outterRadius);

JOYLIBRARYRUNTIME_API FVector GetPredictedShootLocation(FVector _fromLocation, FVector _targetLocation, FVector _targetVelocity, float _projectileSpeed);

JOYLIBRARYRUNTIME_API FPlane TransformPlane(const FTransform& _transform, const FPlane& _plane);

JOYLIBRARYRUNTIME_API FTransform TransformRelativeToMovement(const FTransform& _transform, const FTransform& _previousMovingTransform, const FTransform& _currentMovingTransform);
JOYLIBRARYRUNTIME_API FVector TransformRelativeToMovement(const FVector& _point, const FTransform& _previousMovingTransform, const FTransform& _currentMovingTransform);
JOYLIBRARYRUNTIME_API FQuat TransformRelativeToMovement(const FQuat& _rotation, const FTransform& _previousMovingTransform, const FTransform& _currentMovingTransform);
JOYLIBRARYRUNTIME_API FPlane TransformRelativeToMovement(const FPlane& _plane, const FTransform& _previousMovingTransform, const FTransform& _currentMovingTransform);

/**
 *
 */
UCLASS()
class JOYLIBRARYRUNTIME_API UMathTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FRotator QuatToRotator(const FQuat& _quat);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FQuat RotatorToQuat(const FRotator& _rotator);

	UFUNCTION(BlueprintPure, Category = "Joy|Math") static float TimeIndependentLerpFloat(float _base, float _target, float _timeTo90, float _dt);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FVector TimeIndependentLerpVector(const FVector& _base, const FVector& _target, float _timeTo90, float _dt);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FVector2D TimeIndependentLerpVector2D(const FVector2D& _base, const FVector2D& _target, float _timeTo90, float _dt);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FRotator TimeIndependentLerpRotator(const FRotator& _base, const FRotator& _target, float _timeTo90, float _dt);

	UFUNCTION(BlueprintPure, Category = "Joy|Math") static bool IsNearlyZero(float _value, float _tolerance = 0.00001f);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static bool LineSphereIntersection(const FVector& _lineStart, const FVector& _lineEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static bool SegmentSphereIntersection(const FVector& _segmentStart, const FVector& _segmentEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static bool LineSphereIntersection2D(const FVector2D& _lineStart, const FVector2D& _lineEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static bool SegmentSphereIntersection2D(const FVector2D& _segmentStart, const FVector2D& _segmentEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);

	/**
	   Calculate the line segment resultA > resultB that is the shortest route between
	   two lines A and B. Calculate also the values of ARatio and BRatio where
		  resultA = A1 + ARatio (A2 - A1)
		  resultB = B1 + BRatio (B2 - B1)
	   Return false if no solution exists.
	*/
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static bool LineLineShortestRoute(const FVector& _lineA1, const FVector& _lineA2, const FVector& _lineB1, const FVector& _lineB2, FVector& _resultA, FVector& _resultB, float& _ARatio, float& _BRatio);

	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FVector GetClosestPointToBox(const FBox& _box, const FVector& _point);

	UFUNCTION(BlueprintPure, Category = "Joy|Math|Rotator", meta = (ToolTip = "Return the shortest angle between two rotators (in degrees)")) static float GetAngleBetweenRotators(const FRotator& _A, const FRotator& _B);
	UFUNCTION(BlueprintPure, Category = "Joy|Math|Rotator", meta = (ToolTip = "Return the shortest signed angle between two rotators (in degrees)")) static float GetSignedAngleBetweenRotators(const FRotator& _A, const FRotator& _B);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FVector GetXY(const FVector& _vector);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FVector2D GetXY2D(const FVector& _vector);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FVector GetXZ(const FVector& _vector);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FVector2D GetXZ2D(const FVector& _vector);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FVector GetYZ(const FVector& _vector);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static FVector2D GetYZ2D(const FVector& _vector);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static float ComputeSquaredDistanceToPoint(const FBox2D& _box, const FVector2D& _point);
	UFUNCTION(BlueprintPure, Category = "Joy|Math") static float AngleBetween(const FVector& _A, const FVector& _B);
	UFUNCTION(BlueprintPure, Category = "Joy|Math", meta = (AdvancedDisplay = 2)) static float SignedAngleBetween(const FVector& _A, const FVector& _B, FVector _UpVector = FVector::UpVector);
	UFUNCTION(BlueprintPure, Category = "Joy|Math", meta = (ToolTip = "Return Random Location Around Target Location")) static FVector GetRandomPointAroundLocationInTorus(FVector _location, FVector _direction, float _innerRadius, float _outterRadius);
	UFUNCTION(BlueprintPure, Category = "Joy|Math", meta = (ToolTip = "Return Predicted Location Where To Shoot"))  static FVector GetPredictedShootLocation(FVector _fromLocation, FVector _targetLocation, FVector _targetVelocity, float _projectileSpeed);
};


