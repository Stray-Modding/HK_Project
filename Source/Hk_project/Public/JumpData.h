#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GroundProbeData.h"
#include "UObject/NoExportTypes.h"
#include "JumpData.generated.h"

class USplineRailComponent;

USTRUCT(BlueprintType)
struct FJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector startVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGroundProbeData beginProbe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector jumpMotionBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat jumpMotionBeginRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector jumpBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat jumpBeginRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector jumpEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat jumpEndRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector jumpEndFirstValidLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat jumpEndFirstValidRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector jumpMotionEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float stopVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGroundProbeData jumpEndProbe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USplineRailComponent* beginRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USplineRailComponent* endRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool hasGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float gapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCrossing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isSlowJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isFailedJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector jumpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat jumpSearchRotation;
    
    HK_PROJECT_API FJumpData();
};

