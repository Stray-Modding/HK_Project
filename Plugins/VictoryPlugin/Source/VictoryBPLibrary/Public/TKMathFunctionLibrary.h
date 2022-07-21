#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Widgets/Layout/Anchors.h"
#include "ESpeedUnit.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "TKMathFunctionLibrary.generated.h"

class UPrimitiveComponent;
class UObject;

UCLASS(Blueprintable)
class VICTORYBPLIBRARY_API UTKMathFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTKMathFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VectorRadiansToDegrees(FVector RadVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VectorDegreesToRadians(FVector DegVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SphereBoxIntersection(FVector SphereOrigin, float SphereRadius, FVector BoxOrigin, FVector BoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SignedDistancePlanePoint(FVector PlaneNormal, FVector planePoint, FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SetVectorLength(FVector A, float Size);
    
    UFUNCTION(BlueprintCallable)
    static void SetCenterOfMassOffset(UPrimitiveComponent* Target, FVector Offset, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RoundToUpperMultiple(int32 A, int32 Multiple, bool skipSelf);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RoundToNearestMultiple(int32 A, int32 Multiple);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RoundToLowerMultiple(int32 A, int32 Multiple, bool skipSelf);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectPointOnLine(FVector LineOrigin, FVector LineDirection, FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 PointOnWhichSideOfLineSegment(FVector LinePoint1, FVector LinePoint2, FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D NegateVector2D(FVector2D A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 NegateInt(int32 A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float NegateFloat(float A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineToLineIntersection(FVector& IntersectionPoint, FVector LinePoint1, FVector LineDir1, FVector LinePoint2, FVector LineDir2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineExtentBoxIntersection(FBox InBox, FVector Start, FVector End, FVector Extent, FVector& HitLocation, FVector& HitNormal, float& HitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPowerOfTwo(int32 X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInsideBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMultipleOf(int32 A, int32 Multiple);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLineInsideSphere(FVector LineStart, FVector LineDir, float LineLength, FVector SphereOrigin, float SphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEvenNumber(float A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GridSnap(FVector A, float grid);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVelocityAtPoint(UPrimitiveComponent* Target, FVector Point, FName BoneName, bool DrawDebugInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetConsoleVariableInt(const FString& VariableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetConsoleVariableFloat(const FString& VariableName);
    
    UFUNCTION(BlueprintPure)
    static float ConvertPhysicsLinearVelocity(FVector Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertAnchorToAnchor(UObject* WorldContextObject, FAnchors CurrentAnchor, FMargin Offsets, FAnchors TargetAnchor, FMargin& ConvertedOffsets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ClosestPointsOnTwoLines(FVector& closestPointLine1, FVector& closestPointLine2, FVector LinePoint1, FVector lineVec1, FVector LinePoint2, FVector lineVec2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ClosestPointsOfLineSegments(FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End, FVector& LinePoint1, FVector& LinePoint2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClosestPointOnSphereToLine(FVector SphereOrigin, float SphereRadius, FVector LineOrigin, FVector LineDir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClosestPointOnLineSeqment(FVector Point, FVector LineStart, FVector LineEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreLineSegmentsCrossing(FVector pointA1, FVector pointA2, FVector pointB1, FVector pointB2);
    
};

