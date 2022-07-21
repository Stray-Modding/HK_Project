#pragma once
#include "CoreMinimal.h"
#include "EStatEvent.generated.h"

UENUM(BlueprintType)
enum class EStatEvent : uint8 {
    StatEvent_OnMeowed,
    StatEvent_OnJumped,
    StatEvent_OnSleepTick,
    StatEvent_OnDunkedBasketball,
    StatEvent_OnZurgPursuitTouched,
    StatEvent_OnZurgPursuitCompleted,
    StatEvent_OnZurgPursuitCompletedWithoutTouch,
    StatEvent_OnSentinelPatternDetected,
    StatEvent_OnSentinelPatternCompletedWithoutDetection,
    StatEvent_OnDied,
    StatEvent_OnSewersZurgSpotlightKilled,
    StatEvent_OnSewersCompleted,
    StatEvent_OnSewersCompletedWithoutKill,
    StatEvent_OnInGameTick,
    StatEvent_OnFallenInsideCity,
    StatEvent_OnB12JoinedCat,
    StatEvent_OnB12TranslatedRobot,
    StatEvent_OnReachedMidTown,
    StatEvent_OnPutInJail,
    StatEvent_OnGameCompleted,
    StatEvent_OnGivenMusicToAAKing,
    StatEvent_OnPaperBagWorn,
    StatEvent_OnRubbedAgainstRobot,
    StatEvent_OnMemoryUnlocked,
    StatEvent_OnTVChannelFirstWatched,
    StatEvent_OnClubVinylScratched,
    StatEvent_OnBadgeCollected,
    StatEvent_OnChapterScratched,
    StatEvent_OnTriedToPlayMahjong,
    StatEvent_Count,
    StatEvent_MAX UMETA(Hidden),
};

