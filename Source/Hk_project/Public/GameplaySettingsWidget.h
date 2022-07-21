#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "GameplaySettingsWidget.generated.h"

class UCheckBoxWidget;
class UListBoxWidget;
class UHKTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UGameplaySettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UListBoxWidget* LanguageListBox;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* VibrationCheckBox;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* ReticuleCheckBox;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* AutoPauseCheckBox;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* HUDCheckBox;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* JumpPromptCheckBox;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* AutoCameraCheckBox;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
    UPROPERTY(Instanced)
    UHKButton* DefaultsButton;
    
    UPROPERTY(Instanced)
    UHKTextBlock* SwitchTabTextBlock;
    
    UPROPERTY(Instanced)
    UHKButton* TabLeftButton;
    
    UPROPERTY(Instanced)
    UHKButton* TabRightButton;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
public:
    UGameplaySettingsWidget();
};

