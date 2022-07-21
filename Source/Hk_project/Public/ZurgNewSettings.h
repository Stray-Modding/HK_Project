#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ZurgNewSettings.generated.h"

class UBlendSpace;

UCLASS(BlueprintType)
class HK_PROJECT_API UZurgNewSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Life;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LifeRandomDelta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LifeRegenerationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LifeRegenerationCoolDownAfterDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LifeRegenerationPerTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ChasingMovementMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ChasingMovementAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ChasingMovementGroundFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ChasingMovementRandomRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AngryMovementMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AngryMovementAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AngryMovementGroundFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AngryMovementRandomRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AlertMovementMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AlertMovementAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AlertMovementGroundFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AlertMovementRandomRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RoutineMovementMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RoutineMovementAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RoutineMovementGroundFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RoutineMovementRandomRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace* CustomMovementBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D UnderLightMovementMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D UnderLightMovementAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D UnderLightMovementGroundFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Precision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinimumZurgCountCloseToTargetToAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimalSwarmAttackDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaximumJumpAttackDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaximumHeightAttackDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackFuzzyDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AttackJumpArc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float KamikazePercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageToApplyPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToKillCatInSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StruggleGaugeSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpeedModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AttachOnCatWhenHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceToAttachOnCat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VisionOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VisionUpperHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VisionLowerHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StatePropagationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngryToRoutineWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlertedToChasingWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlertedWhileSleepingToChasingWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProximityDetectionRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnderLightWakeUpTime;
    
    UZurgNewSettings();
};

