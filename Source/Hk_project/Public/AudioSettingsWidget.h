#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "AudioSettingsWidget.generated.h"

class USliderBoxWidget;
class UHKTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UAudioSettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USliderBoxWidget* MasterVolumeSliderBox;
    
    UPROPERTY(Instanced)
    USliderBoxWidget* MusicVolumeSliderBox;
    
    UPROPERTY(Instanced)
    USliderBoxWidget* EffectsVolumeSliderBox;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
    UPROPERTY(Instanced)
    UHKButton* DefaultsButton;
    
    UPROPERTY(Instanced)
    UHKButton* TabLeftButton;
    
    UPROPERTY(Instanced)
    UHKButton* TabRightButton;
    
    UPROPERTY(Instanced)
    UHKTextBlock* SwitchTabTextBlock;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
public:
    UAudioSettingsWidget();
};

