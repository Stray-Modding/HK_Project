#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SentinelSettings.generated.h"

class ASentinelProjectile;

UCLASS(BlueprintType)
class HK_PROJECT_API USentinelSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Aggressive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumDistanceDetectionWhenTargetIsHiding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VisionLightRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardLocationPrediction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardDirectionPrediction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceFromTargetToStartBraking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReachAcceptanceDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationToMovementInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InactiveZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PatrolZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchingZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChasingZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZOffsetMovementTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PatrolMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchingMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChasingMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InactiveEyeRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PatrolEyeRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectionEyeRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchingEyeRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChasingEyeRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor InactiveStateColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PatrolStateColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SearchingStateColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DetectStateColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ChasingStateColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ASentinelProjectile> TazerProjectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerInterShootDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerReloadTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TazerMaxShootCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerMinimumShootingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerShootingDistanceHysteresis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerLoadingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerUnLoadingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D TazerTrackingTimeReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerInnerRadiusPrecision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerOutterRadiusPrecision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerPrecisionScaleUpTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TazerPrecisionScaleDownTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PatrolToSoundDetectionTimeInSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PatrolToVisionDetectionTimeInSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectSoundToSearchingTimeInSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectVisionToChasingTimeInSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectVisionToPatrolTimeInSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchingViewToChasingTimeInSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchingToPatrolWaitTimeInSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchingScanAngleInDegree;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchingScanCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChasingVisionLostTime;
    
    USentinelSettings();
};

