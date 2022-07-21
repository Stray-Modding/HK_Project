#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "CustomKeyMapping.h"
#include "HKGameUserSettings.generated.h"

UCLASS()
class HK_PROJECT_API UHKGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    int32 MeshQuality;
    
    UPROPERTY(Config)
    float MasterVolume;
    
    UPROPERTY(Config)
    float MusicVolume;
    
    UPROPERTY(Config)
    float EffectsVolume;
    
    UPROPERTY(Config)
    float Gamma;
    
    UPROPERTY(Config)
    float MotionBlurAmount;
    
    UPROPERTY(Config)
    float LookSensitivity;
    
    UPROPERTY(Config)
    float Sharpness;
    
    UPROPERTY(Config)
    bool PadVibrationEnabled;
    
    UPROPERTY(Config)
    bool InvertLookXEnabled;
    
    UPROPERTY(Config)
    bool InvertLookYEnabled;
    
    UPROPERTY(Config)
    bool ReticuleEnabled;
    
    UPROPERTY(Config)
    TArray<FCustomKeyMapping> CustomKeyMappings;
    
    UPROPERTY(Config)
    bool AutoPauseEnabled;
    
    UPROPERTY(Config)
    bool JumpPromptEnabled;
    
    UPROPERTY(Config)
    bool HUDEnabled;
    
    UPROPERTY(Config)
    bool AutoCameraEnabled;
    
    UPROPERTY(Config)
    bool FirstLaunch;
    
    UPROPERTY(Config)
    uint32 ScreenPercentage;
    
    UPROPERTY(Config)
    uint32 SteamDeckScreenPercentage;
    
    UPROPERTY(Config)
    int32 SteamDeckEffectsQuality;
    
    UPROPERTY(Config)
    int32 SteamDeckMeshQuality;
    
    UPROPERTY(Config)
    int32 SteamDeckTextureQuality;
    
    UPROPERTY(Config)
    int32 SteamDeckShadowQuality;
    
public:
    UHKGameUserSettings();
};

