#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
#include "LoadingScreenSettings.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class HK_PROJECT_API ULoadingScreenSettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeWithoutLoadingBeforeEndingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LoadingScreenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingScreenSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingScreenSoundFadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingScreenSoundFadeOutDuration;
    
    ULoadingScreenSettings();
};

