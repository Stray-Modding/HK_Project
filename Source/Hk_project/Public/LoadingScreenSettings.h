#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
#include "LoadingScreenSettings.generated.h"

class USoundBase;

UCLASS()
class HK_PROJECT_API ULoadingScreenSettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float TimeWithoutLoadingBeforeEndingScreen;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* LoadingScreenSound;
    
    UPROPERTY(EditDefaultsOnly)
    float LoadingScreenSoundVolume;
    
    UPROPERTY(EditDefaultsOnly)
    float LoadingScreenSoundFadeInDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float LoadingScreenSoundFadeOutDuration;
    
    ULoadingScreenSettings();
};

