#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MathTools.generated.h"

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UMathTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathTools();
    UFUNCTION(BlueprintPure)
    static FVector2D TimeIndependentLerpVector2D(const FVector2D& _base, const FVector2D& _target, float _timeTo90, float _dt);
    
    UFUNCTION(BlueprintPure)
    static FVector TimeIndependentLerpVector(const FVector& _base, const FVector& _target, float _timeTo90, float _dt);
    
    UFUNCTION(BlueprintPure)
    static FRotator TimeIndependentLerpRotator(const FRotator& _base, const FRotator& _target, float _timeTo90, float _dt);
    
    UFUNCTION(BlueprintPure)
    static float TimeIndependentLerpFloat(float _base, float _target, float _timeTo90, float _dt);
    
    UFUNCTION(BlueprintPure)
    static float SignedAngleBetween(const FVector& _a, const FVector& _b, FVector _UpVector);
    
    UFUNCTION(BlueprintPure)
    static bool SegmentSphereIntersection2D(const FVector2D& _segmentStart, const FVector2D& _segmentEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    
    UFUNCTION(BlueprintPure)
    static bool SegmentSphereIntersection(const FVector& _segmentStart, const FVector& _segmentEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    
    UFUNCTION(BlueprintPure)
    static FQuat RotatorToQuat(const FRotator& _rotator);
    
    UFUNCTION(BlueprintPure)
    static FRotator QuatToRotator(const FQuat& _quat);
    
    UFUNCTION(BlueprintPure)
    static bool LineSphereIntersection2D(const FVector2D& _lineStart, const FVector2D& _lineEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    
    UFUNCTION(BlueprintPure)
    static bool LineSphereIntersection(const FVector& _lineStart, const FVector& _lineEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    
    UFUNCTION(BlueprintPure)
    static bool LineLineShortestRoute(const FVector& _lineA1, const FVector& _lineA2, const FVector& _lineB1, const FVector& _lineB2, FVector& _resultA, FVector& _resultB, float& _ARatio, float& _BRatio);
    
    UFUNCTION(BlueprintPure)
    static bool IsNearlyZero(float _value, float _tolerance);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetYZ2D(const FVector& _vector);
    
    UFUNCTION(BlueprintPure)
    static FVector GetYZ(const FVector& _vector);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetXZ2D(const FVector& _vector);
    
    UFUNCTION(BlueprintPure)
    static FVector GetXZ(const FVector& _vector);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetXY2D(const FVector& _vector);
    
    UFUNCTION(BlueprintPure)
    static FVector GetXY(const FVector& _vector);
    
    UFUNCTION(BlueprintPure)
    static float GetSignedAngleBetweenRotators(const FRotator& _a, const FRotator& _b);
    
    UFUNCTION(BlueprintPure)
    static FVector GetRandomPointAroundLocationInTorus(FVector _location, FVector _direction, float _innerRadius, float _outterRadius);
    
    UFUNCTION(BlueprintPure)
    static float GetProjectileTimeOfFlight(FVector _projectileVelocity);
    
    UFUNCTION(BlueprintPure)
    static FVector GetPredictedShootLocation(FVector _fromLocation, FVector _targetLocation, FVector _targetVelocity, float _projectileSpeed);
    
    UFUNCTION(BlueprintPure)
    static FVector GetClosestPointToBox(const FBox& _box, const FVector& _point);
    
    UFUNCTION(BlueprintPure)
    static float GetAngleBetweenRotators(const FRotator& _a, const FRotator& _b);
    
    UFUNCTION(BlueprintPure)
    static float ComputeSquaredDistanceToPoint(const FBox2D& _box, const FVector2D& _point);
    
    UFUNCTION(BlueprintPure)
    static void ComputeBarycentricCoordinates(const FVector& _point, const FVector& _a, const FVector& _b, const FVector& _C, float& _outU, float& _outV, float& _outW);
    
    UFUNCTION(BlueprintPure)
    static FVector ClampVectorAngle(const FVector& _vector, const FVector& _forward, float _minAngleDeg, float _maxAngleDeg, const FVector& _up);
    
    UFUNCTION(BlueprintPure)
    static float AngleBetween(const FVector& _a, const FVector& _b);
    
};

