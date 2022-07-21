#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "GraphicsSettingsWidget.generated.h"

class UCheckBoxWidget;
class UHorizontalBox;
class UScrollBox;
class UTextBlock;
class USliderBoxWidget;
class UListBoxWidget;
class UHKButton;
class UHKTextBlock;

UCLASS(EditInlineNew)
class HK_PROJECT_API UGraphicsSettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UScrollBox* ScrollBox;
    
    UPROPERTY(Instanced)
    USliderBoxWidget* MotionBlurSliderBox;
    
    UPROPERTY(Instanced)
    USliderBoxWidget* SharpnessSliderBox;
    
    UPROPERTY(Instanced)
    UListBoxWidget* ResolutionListBox;
    
    UPROPERTY(Instanced)
    UListBoxWidget* FrameRateListBox;
    
    UPROPERTY(Instanced)
    UHorizontalBox* GraphicsMemoryBox;
    
    UPROPERTY(Instanced)
    UTextBlock* GraphicsMemoryText;
    
    UPROPERTY(Instanced)
    UListBoxWidget* ScreenPercentageListBox;
    
    UPROPERTY(Instanced)
    UListBoxWidget* EffectsQualityListBox;
    
    UPROPERTY(Instanced)
    UListBoxWidget* ShadowQualityListBox;
    
    UPROPERTY(Instanced)
    UListBoxWidget* TextureQualityListBox;
    
    UPROPERTY(Instanced)
    UListBoxWidget* MeshQualityListBox;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* FullscreenCheckBox;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* VSyncCheckBox;
    
    UPROPERTY(Instanced)
    UHKButton* GammaButton;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
    UPROPERTY(Instanced)
    UHKButton* DefaultsButton;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_memoryGigabytesText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_memoryUnavailableText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_frameRateUncappedText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityLowText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityMediumText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityHighText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityVeryHighText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_qualityFullText;
    
    UPROPERTY(Instanced)
    UHKTextBlock* SwitchTabTextBlock;
    
    UPROPERTY(Instanced)
    UHKButton* TabLeftButton;
    
    UPROPERTY(Instanced)
    UHKButton* TabRightButton;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<FIntPoint> m_resolutions;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<uint32> m_screenPercentages;
    
public:
    UGraphicsSettingsWidget();
};

