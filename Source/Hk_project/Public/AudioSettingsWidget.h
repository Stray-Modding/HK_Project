#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "AudioSettingsWidget.generated.h"

class USliderBoxWidget;
class UHKTextBlock;
class UHKButton;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UAudioSettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USliderBoxWidget* MasterVolumeSliderBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USliderBoxWidget* MusicVolumeSliderBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USliderBoxWidget* EffectsVolumeSliderBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHKButton* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHKButton* DefaultsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHKButton* TabLeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHKButton* TabRightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHKTextBlock* SwitchTabTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_resetToDefaultsDialogText;
    
public:
    UAudioSettingsWidget();
};

