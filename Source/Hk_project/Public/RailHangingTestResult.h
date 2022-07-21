#pragma once
#include "CoreMinimal.h"
#include "EHangingTestResult.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RailHangingTestResult.generated.h"

USTRUCT(BlueprintType)
struct FRailHangingTestResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EHangingTestResult> Result;
    
    UPROPERTY(BlueprintReadWrite)
    FVector BaseLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FQuat BaseRotation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector HangingLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FQuat HangingRotation;
    
    UPROPERTY(BlueprintReadWrite)
    FPlane HangingPlane;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentQuadrantId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 IdealQuadrantId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TargetQuadrantId;
    
    UPROPERTY(BlueprintReadWrite)
    float WallRatio;
    
    UPROPERTY(BlueprintReadWrite)
    bool isWall;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsPointHanging;
    
    HK_PROJECT_API FRailHangingTestResult();
};

