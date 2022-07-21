#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "InputSettingsWidget.generated.h"

class UCheckBoxWidget;
class USliderBoxWidget;
class UHKTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UInputSettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCheckBoxWidget* InvertLookXCheckBox;
    
    UPROPERTY(Instanced)
    UCheckBoxWidget* InvertLookYCheckBox;
    
    UPROPERTY(Instanced)
    USliderBoxWidget* LookSensitivitySliderBox;
    
    UPROPERTY(Instanced)
    UHKButton* RebindButton;
    
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
    float m_minLookSensitivity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_maxLookSensitivity;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
public:
    UInputSettingsWidget();
};

