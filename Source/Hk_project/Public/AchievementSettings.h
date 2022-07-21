#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
#include "AchievementSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class UAchievementSettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 MeowTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 jumpTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 SleepTargetMinutes;
    
    UPROPERTY(EditAnywhere)
    uint32 BasketballsDunkedTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 ZurgPursuitCompletedWithoutTouchTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 SentinelPatternCompletedWithoutDetectionTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 DeathTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 ClubVinylScratchedTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 SewersCompletedWithoutKillTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 GameCompleteTargetMinutes;
    
    UPROPERTY(EditAnywhere)
    uint32 AAKingMusicSheetsTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 PaperBagWornTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 TriedToPlayMahjongTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 RobotsRubbedAgainstTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 TVChannelsWatchedTarget;
    
    UPROPERTY(EditAnywhere)
    uint32 CollectedBadgesTarget;
    
    UAchievementSettings();
};

