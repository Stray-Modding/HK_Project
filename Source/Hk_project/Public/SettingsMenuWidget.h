#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SettingsMenuWidget.generated.h"

class UInputSettingsWidget;
class UGraphicsSettingsWidget;
class UTabButtonWidget;
class UAudioSettingsWidget;
class UGameplaySettingsWidget;

UCLASS(EditInlineNew)
class HK_PROJECT_API USettingsMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTabButtonWidget* AudioButton;
    
    UPROPERTY(Instanced)
    UTabButtonWidget* GraphicsButton;
    
    UPROPERTY(Instanced)
    UTabButtonWidget* InputButton;
    
    UPROPERTY(Instanced)
    UTabButtonWidget* GameplayButton;
    
    UPROPERTY(Instanced)
    UAudioSettingsWidget* AudioSettings;
    
    UPROPERTY(Instanced)
    UGraphicsSettingsWidget* GraphicsSettings;
    
    UPROPERTY(Instanced)
    UInputSettingsWidget* InputSettings;
    
    UPROPERTY(Instanced)
    UGameplaySettingsWidget* GameplaySettings;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_applySettingsDialogText;
    
public:
    USettingsMenuWidget();
};

