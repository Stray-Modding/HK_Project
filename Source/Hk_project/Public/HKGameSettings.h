#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "HKGameSettings.generated.h"

class UTexture2D;
class UWorld;
class UKeyIconSetData;
class UFont;

UCLASS(DefaultConfig, Config=Game)
class HK_PROJECT_API UHKGameSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool DisplayActorLinksOnlyWhileSelected;
    
    UPROPERTY(Config, EditAnywhere)
    FName SessionSaveName;
    
    UPROPERTY(Config, EditAnywhere)
    bool IsAudioLogEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> GameplaySoundTraceChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> MovementObstacleProbeChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> WalkableProbeChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> InteractCollisionChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> VisibilityCollisionChannel;
    
    UPROPERTY(Config, EditAnywhere)
    bool LoadingNotificationEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool FadeToBlackDuringWaitForStreamingAndLoading;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseBaseMapMode;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UWorld> BaseMap;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> BaseMapModeZones;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UKeyIconSetData> KeyIconSetData;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UTexture2D> LoadingScreenPawTexture;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFont> LoadingScreenFont;
    
private:
    UPROPERTY(Config, EditDefaultsOnly)
    TSoftObjectPtr<UWorld> MainMenuMap;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float GUIInputDeadZone;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float GUIFadeOutDuration;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float GUIAutoFireDelay;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float GUIAutoFireInterval;
    
public:
    UHKGameSettings();
};

