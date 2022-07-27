#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SettingsMenuWidget.generated.h"

class UTabButtonWidget;
class UAudioSettingsWidget;
class UInputSettingsWidget;
class UGraphicsSettingsWidget;
class UGameplaySettingsWidget;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API USettingsMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTabButtonWidget* AudioButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTabButtonWidget* GraphicsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTabButtonWidget* InputButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTabButtonWidget* GameplayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioSettingsWidget* AudioSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGraphicsSettingsWidget* GraphicsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInputSettingsWidget* InputSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGameplaySettingsWidget* GameplaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_applySettingsDialogText;
    
public:
    USettingsMenuWidget();
};

