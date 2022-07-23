#include "MathTools.h"

#include <Kismet/KismetMathLibrary.h>

JOYLIBRARYRUNTIME_API bool PlanePlaneIntersection(const FPlane& _planeA, const FPlane& _planeB, const FVector* _referencePoint, FVector* _outIntersectionLinePointA, FVector* _outIntersectionLinePointB)
{
	if (FMath::IsNearlyEqual(FVector::DotProduct(_planeA, _planeB), 1.f, KINDA_SMALL_NUMBER))
		return false;

	FVector planeAOrigin;
	FVector planeBOrigin;
	if (_referencePoint)
	{
		planeAOrigin = ProjectPointOnPlane(*_referencePoint, _planeA);
		planeBOrigin = ProjectPointOnPlane(*_referencePoint, _planeB);
	}
	else
	{
		planeAOrigin = _planeA * _planeA.W;
		planeBOrigin = _planeB * _planeB.W;
	}

	FVector baseDirection = ProjectVectorOnPlane(planeBOrigin - planeAOrigin, _planeA).GetSafeNormal();
	if (baseDirection.IsNearlyZero())
		return false;

	FVector firstIntersection;
	if (!LinePlaneIntersection(planeAOrigin, planeAOrigin + baseDirection, _planeB, &firstIntersection))
		return false;

	FVector rotatedDirection = baseDirection.RotateAngleAxis(10.f, _planeA);
	FVector secondIntersection;
	if (!LinePlaneIntersection(planeAOrigin, planeAOrigin + rotatedDirection, _planeB, &secondIntersection))
		return false;

	if (_outIntersectionLinePointA) *_outIntersectionLinePointA = firstIntersection;
	if (_outIntersectionLinePointB) *_outIntersectionLinePointB = secondIntersection;

	return true;
}

bool LineLineShortestRoute(const FVector& _lineA1, const FVector& _lineA2, const FVector& _lineB1, const FVector& _lineB2, FVector* _resultA /*= nullptr*/, FVector* _resultB /*= nullptr*/, float* _ARatio /*= nullptr*/, float* _BRatio /*= nullptr*/)
{
	// NOTE(Remi|2020/01/10): Algorithm found here: http://paulbourke.net/geometry/pointlineplane/
	FVector p13 = _lineA1 - _lineB1;
	FVector p43 = _lineB2 - _lineB1;
	if (p43.IsNearlyZero())
		return false;
	FVector p21 = _lineA2 - _lineA1;
	if (p21.IsNearlyZero())
		return false;

	float d1343 = p13.X * p43.X + p13.Y * p43.Y + p13.Z * p43.Z;
	float d4321 = p43.X * p21.X + p43.Y * p21.Y + p43.Z * p21.Z;
	float d1321 = p13.X * p21.X + p13.Y * p21.Y + p13.Z * p21.Z;
	float d4343 = p43.X * p43.X + p43.Y * p43.Y + p43.Z * p43.Z;
	float d2121 = p21.X * p21.X + p21.Y * p21.Y + p21.Z * p21.Z;

	float denom = d2121 * d4343 - d4321 * d4321;
	if (FMath::IsNearlyZero(denom))
		return false;
	float numer = d1343 * d4321 - d1321 * d4343;

	float ARatio = numer / denom;
	float BRatio = (d1343 + d4321 * (ARatio)) / d4343;

	if (_ARatio) *_ARatio = ARatio;
	if (_BRatio) *_BRatio = BRatio;

	if (_resultA) *_resultA = _lineA1 + p21 * ARatio;
	if (_resultB) *_resultB = _lineB1 + p43 * BRatio;

	return true;
}

bool IsPointInSphere(const FVector _sphereCenter, const float _sphereRadius, const FVector _pointToTest)
{
	return (FVector(_sphereCenter - _pointToTest).SizeSquared() <= FMath::Square<float>(_sphereRadius));
}

bool IsPointInCone(const FVector _origin, const FVector _direction, const float _angleInDegree, const float _distance, const FVector _pointToTest)
{
	if (IsPointInSphere(_origin, _distance, _pointToTest))
	{
		float angle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(UKismetMathLibrary::GetDirectionUnitVector(_origin,_pointToTest),_direction)));

		if (angle <= _angleInDegree)
			return (true);
	}

	return (false);
}

void GetBoxVertices(FBox _box, FVector *_result)
{
	// Get Box Min Max Point
	FVector minBox = _box.GetExtrema(0);
	FVector maxBox = _box.GetExtrema(1);

	// Lower Points
	_result[0] = FVector(maxBox.X, maxBox.Y, minBox.Z);
	_result[1] = FVector(maxBox.X, minBox.Y, minBox.Z);

	_result[2] = FVector(minBox.X, maxBox.Y, minBox.Z);
	_result[3] = FVector(minBox.X, minBox.Y, minBox.Z);

	// Upper Points
	_result[4] = FVector(maxBox.X, maxBox.Y, maxBox.Z);
	_result[5] = FVector(maxBox.X, minBox.Y, maxBox.Z);

	_result[6] = FVector(minBox.X, maxBox.Y, maxBox.Z);
	_result[7] = FVector(minBox.X, minBox.Y, maxBox.Z);
}

FVector GetRandomPointAroundLocationInTorus(FVector _location, FVector _direction, float _innerRadius, float _outterRadius)
{
	return (FVector::CrossProduct(UKismetMathLibrary::RandomUnitVector(), _direction) * _outterRadius).GetClampedToSize(_innerRadius, _outterRadius) + _location;
}

FVector GetPredictedShootLocation(FVector _fromLocation, FVector _targetLocation, FVector _targetVelocity, float _projectileSpeed)
{
	return (_targetVelocity * ((_fromLocation - _targetLocation).Size() / _projectileSpeed)) + _targetLocation;
}

FPlane TransformPlane(const FTransform& _transform, const FPlane& _plane)
{
	FVector origin = FVector(_plane.X * _plane.W, _plane.Y * _plane.W, _plane.Z * _plane.W);
	FVector normal = FVector(_plane.X, _plane.Y, _plane.Z);

	origin = _transform.TransformPosition(origin);
	normal = _transform.GetRotation().RotateVector(normal);

	return FPlane(origin, normal);
}

FTransform TransformRelativeToMovement(const FTransform& _transform, const FTransform& _previousMovingTransform, const FTransform& _currentMovingTransform)
{
	FTransform _previousTransformToPoint = _transform.GetRelativeTransform(_previousMovingTransform);
	return _previousTransformToPoint * _currentMovingTransform;
}

FVector TransformRelativeToMovement(const FVector& _point, const FTransform& _previousMovingTransform, const FTransform& _currentMovingTransform)
{
	return TransformRelativeToMovement(FTransform(_point), _previousMovingTransform, _currentMovingTransform).GetLocation();
}

FQuat TransformRelativeToMovement(const FQuat& _rotation, const FTransform& _previousMovingTransform, const FTransform& _currentMovingTransform)
{
	return TransformRelativeToMovement(FTransform(_rotation), _previousMovingTransform, _currentMovingTransform).GetRotation();
}

FPlane TransformRelativeToMovement(const FPlane& _plane, const FTransform& _previousMovingTransform, const FTransform& _currentMovingTransform)
{
	FTransform t = FTransform(FRotationMatrix::MakeFromX(_plane).ToQuat(), FVector(_plane) * _plane.W, FVector::OneVector);
	FTransform t2 = TransformRelativeToMovement(t, _previousMovingTransform, _currentMovingTransform);
	return FPlane(t2.GetLocation(), t2.GetRotation().GetForwardVector());
}

FRotator UMathTools::QuatToRotator(const FQuat& _quat)
{
	return _quat.Rotator();
}

FQuat UMathTools::RotatorToQuat(const FRotator& _rotator)
{
	return _rotator.Quaternion();
}

float UMathTools::TimeIndependentLerpFloat(float _base, float _target, float _timeTo90, float _dt)
{
	return TimeIndependentLerp2(_base, _target, _timeTo90, _dt);
}

FVector UMathTools::TimeIndependentLerpVector(const FVector& _base, const FVector& _target, float _timeTo90, float _dt)
{
	return TimeIndependentLerp2(_base, _target, _timeTo90, _dt);
}

FVector2D UMathTools::TimeIndependentLerpVector2D(const FVector2D& _base, const FVector2D& _target, float _timeTo90, float _dt)
{
	return TimeIndependentLerp2(_base, _target, _timeTo90, _dt);
}

FRotator UMathTools::TimeIndependentLerpRotator(const FRotator& _base, const FRotator& _target, float _timeTo90, float _dt)
{
	return TimeIndependentLerp2(_base, _target, _timeTo90, _dt);
}

bool UMathTools::IsNearlyZero(float _value, float _tolerance /*= SMALL_NUMBER*/)
{
	return FMath::IsNearlyZero(_value, _tolerance);
}

bool UMathTools::LineSphereIntersection(const FVector& _lineStart, const FVector& _lineEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2)
{
	return ::LineSphereIntersection(_lineStart, _lineEnd, _sphereCenter, _sphereRadius, &_outT1, &_outT2);
}

bool UMathTools::SegmentSphereIntersection(const FVector& _segmentStart, const FVector& _segmentEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1 /*= nullptr*/, float& _outT2 /*= nullptr*/)
{
	return ::SegmentSphereIntersection(_segmentStart, _segmentEnd, _sphereCenter, _sphereRadius, &_outT1, &_outT2);
}

bool UMathTools::LineSphereIntersection2D(const FVector2D& _lineStart, const FVector2D& _lineEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2)
{
	return ::LineSphereIntersection(_lineStart, _lineEnd, _sphereCenter, _sphereRadius, &_outT1, &_outT2);
}

bool UMathTools::SegmentSphereIntersection2D(const FVector2D& _segmentStart, const FVector2D& _segmentEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2)
{
	return ::SegmentSphereIntersection(_segmentStart, _segmentEnd, _sphereCenter, _sphereRadius, &_outT1, &_outT2);
}

bool UMathTools::LineLineShortestRoute(const FVector& _lineA1, const FVector& _lineA2, const FVector& _lineB1, const FVector& _lineB2, FVector& _resultA, FVector& _resultB, float& _ARatio, float& _BRatio)
{
	return ::LineLineShortestRoute(_lineA1, _lineA2, _lineB1, _lineB2, &_resultA, &_resultB, &_ARatio, &_BRatio);
}

FVector UMathTools::GetClosestPointToBox(const FBox& _box, const FVector& _point)
{
	return _box.GetClosestPointTo(_point);
}

float UMathTools::GetAngleBetweenRotators(const FRotator& _A, const FRotator& _B)
{
	return FMath::RadiansToDegrees(_A.Quaternion().AngularDistance(_B.Quaternion()));
}

float UMathTools::GetSignedAngleBetweenRotators(const FRotator& _A, const FRotator& _B)
{
	return FMath::RadiansToDegrees(SignedAngleBetween(_A.Quaternion().GetForwardVector(), _B.Quaternion().GetForwardVector(), _A.Quaternion().GetUpVector()));
}

FVector UMathTools::GetXY(const FVector& _vector)
{
	return ::GetXY(_vector);
}

FVector2D UMathTools::GetXY2D(const FVector& _vector)
{
	return ::GetXY2D(_vector);
}

FVector UMathTools::GetXZ(const FVector& _vector)
{
	return ::GetXZ(_vector);
}

FVector2D UMathTools::GetXZ2D(const FVector& _vector)
{
	return ::GetXZ2D(_vector);
}

FVector UMathTools::GetYZ(const FVector& _vector)
{
	return ::GetYZ(_vector);
}

FVector2D UMathTools::GetYZ2D(const FVector& _vector)
{
	return ::GetYZ2D(_vector);
}

float UMathTools::ComputeSquaredDistanceToPoint(const FBox2D& _box, const FVector2D& _point)
{
	return _box.ComputeSquaredDistanceToPoint(_point);
}

float UMathTools::AngleBetween(const FVector& _A, const FVector& _B)
{
	return FMath::RadiansToDegrees(::AngleBetween(_A, _B));
}

float UMathTools::SignedAngleBetween(const FVector& _A, const FVector& _B, FVector _UpVector/* = FVector::UpVector*/)
{
	return FMath::RadiansToDegrees(::SignedAngleBetween(_A, _B, _UpVector));
}

FVector UMathTools::GetRandomPointAroundLocationInTorus(FVector _location, FVector _direction, float _innerRadius, float _outterRadius)
{
	return (::GetRandomPointAroundLocationInTorus(_location, _direction, _innerRadius, _outterRadius));
}

FVector UMathTools::GetPredictedShootLocation(FVector _fromLocation, FVector _targetLocation, FVector _targetVelocity, float _projectileSpeed)
{
	return (::GetPredictedShootLocation(_fromLocation, _targetLocation, _targetVelocity, _projectileSpeed));
}
