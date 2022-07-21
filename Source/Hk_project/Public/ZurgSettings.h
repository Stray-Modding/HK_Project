#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ZurgSettings.generated.h"

UCLASS(BlueprintType)
class HK_PROJECT_API UZurgSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NormalSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinAttackSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAttackSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinAttackSpeedDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAttackSpeedDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpAnticipationRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayBeforeJump;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayBeforeJumpRandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayBetweenJumps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpArcRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpArrivalRandomZoneRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EjectDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EjectDistanceRandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EjectStunTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SightRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VisionConeAngleInDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SureVisionConeAngleInDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinRatioToLoseSight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpPerceptionHeightLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloseEncounterRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StruggleGaugeSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LifeDecayPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpeedModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlertsSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlertsGrowingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AlertsSustainTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDistanceBetweenAlerts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToBeSure;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToBeSureRandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SureIntroductionStateDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SureIntroductionStateDurationRandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchDurationRandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenDirectionChange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenDirectionChangeRandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PlayIntroductionOnRedetect;
    
    UZurgSettings();
};

