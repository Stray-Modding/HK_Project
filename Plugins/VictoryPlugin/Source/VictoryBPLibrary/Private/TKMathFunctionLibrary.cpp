#include "TKMathFunctionLibrary.h"

class UPrimitiveComponent;
class UObject;

FVector UTKMathFunctionLibrary::VectorRadiansToDegrees(FVector RadVector) {
    return FVector{};
}

FVector UTKMathFunctionLibrary::VectorDegreesToRadians(FVector DegVector) {
    return FVector{};
}

bool UTKMathFunctionLibrary::SphereBoxIntersection(FVector SphereOrigin, float SphereRadius, FVector BoxOrigin, FVector BoxExtent) {
    return false;
}

float UTKMathFunctionLibrary::SignedDistancePlanePoint(FVector PlaneNormal, FVector planePoint, FVector Point) {
    return 0.0f;
}

FVector UTKMathFunctionLibrary::SetVectorLength(FVector A, float Size) {
    return FVector{};
}

void UTKMathFunctionLibrary::SetCenterOfMassOffset(UPrimitiveComponent* Target, FVector Offset, FName BoneName) {
}

int32 UTKMathFunctionLibrary::RoundToUpperMultiple(int32 A, int32 Multiple, bool skipSelf) {
    return 0;
}

int32 UTKMathFunctionLibrary::RoundToNearestMultiple(int32 A, int32 Multiple) {
    return 0;
}

int32 UTKMathFunctionLibrary::RoundToLowerMultiple(int32 A, int32 Multiple, bool skipSelf) {
    return 0;
}

FVector UTKMathFunctionLibrary::ProjectPointOnLine(FVector LineOrigin, FVector LineDirection, FVector Point) {
    return FVector{};
}

int32 UTKMathFunctionLibrary::PointOnWhichSideOfLineSegment(FVector LinePoint1, FVector LinePoint2, FVector Point) {
    return 0;
}

FVector2D UTKMathFunctionLibrary::NegateVector2D(FVector2D A) {
    return FVector2D{};
}

int32 UTKMathFunctionLibrary::NegateInt(int32 A) {
    return 0;
}

float UTKMathFunctionLibrary::NegateFloat(float A) {
    return 0.0f;
}

bool UTKMathFunctionLibrary::LineToLineIntersection(FVector& IntersectionPoint, FVector LinePoint1, FVector LineDir1, FVector LinePoint2, FVector LineDir2) {
    return false;
}

bool UTKMathFunctionLibrary::LineExtentBoxIntersection(FBox InBox, FVector Start, FVector End, FVector Extent, FVector& HitLocation, FVector& HitNormal, float& HitTime) {
    return false;
}

bool UTKMathFunctionLibrary::IsPowerOfTwo(int32 X) {
    return false;
}

bool UTKMathFunctionLibrary::IsPointInsideBox(FVector Point, FVector BoxOrigin, FVector BoxExtent) {
    return false;
}

bool UTKMathFunctionLibrary::IsMultipleOf(int32 A, int32 Multiple) {
    return false;
}

bool UTKMathFunctionLibrary::IsLineInsideSphere(FVector LineStart, FVector LineDir, float LineLength, FVector SphereOrigin, float SphereRadius) {
    return false;
}

bool UTKMathFunctionLibrary::IsEvenNumber(float A) {
    return false;
}

FVector UTKMathFunctionLibrary::GridSnap(FVector A, float grid) {
    return FVector{};
}

FVector UTKMathFunctionLibrary::GetVelocityAtPoint(UPrimitiveComponent* Target, FVector Point, FName BoneName, bool DrawDebugInfo) {
    return FVector{};
}

int32 UTKMathFunctionLibrary::GetConsoleVariableInt(const FString& VariableName) {
    return 0;
}

float UTKMathFunctionLibrary::GetConsoleVariableFloat(const FString& VariableName) {
    return 0.0f;
}

float UTKMathFunctionLibrary::ConvertPhysicsLinearVelocity(FVector Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit) {
    return 0.0f;
}

void UTKMathFunctionLibrary::ConvertAnchorToAnchor(UObject* WorldContextObject, FAnchors CurrentAnchor, FMargin Offsets, FAnchors TargetAnchor, FMargin& ConvertedOffsets) {
}

bool UTKMathFunctionLibrary::ClosestPointsOnTwoLines(FVector& closestPointLine1, FVector& closestPointLine2, FVector LinePoint1, FVector lineVec1, FVector LinePoint2, FVector lineVec2) {
    return false;
}

void UTKMathFunctionLibrary::ClosestPointsOfLineSegments(FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End, FVector& LinePoint1, FVector& LinePoint2) {
}

FVector UTKMathFunctionLibrary::ClosestPointOnSphereToLine(FVector SphereOrigin, float SphereRadius, FVector LineOrigin, FVector LineDir) {
    return FVector{};
}

FVector UTKMathFunctionLibrary::ClosestPointOnLineSeqment(FVector Point, FVector LineStart, FVector LineEnd) {
    return FVector{};
}

bool UTKMathFunctionLibrary::AreLineSegmentsCrossing(FVector pointA1, FVector pointA2, FVector pointB1, FVector pointB2) {
    return false;
}

UTKMathFunctionLibrary::UTKMathFunctionLibrary() {
}

