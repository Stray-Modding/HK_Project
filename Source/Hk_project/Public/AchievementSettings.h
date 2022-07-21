#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
#include "AchievementSettings.generated.h"

UCLASS(Abstract)
class UAchievementSettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint32 MeowTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 jumpTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 SleepTargetMinutes;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 BasketballsDunkedTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 ZurgPursuitCompletedWithoutTouchTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 SentinelPatternCompletedWithoutDetectionTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 DeathTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 ClubVinylScratchedTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 SewersCompletedWithoutKillTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 GameCompleteTargetMinutes;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 AAKingMusicSheetsTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 PaperBagWornTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 TriedToPlayMahjongTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 RobotsRubbedAgainstTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 TVChannelsWatchedTarget;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 CollectedBadgesTarget;
    
    UAchievementSettings();
};

