#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "GammaSettingsWidget.generated.h"

class UHorizontalBox;
class UMaterialInstanceDynamic;
class UHKProgressBar;
class UHKTextBlock;
class UHKButton;
class UImage;
class UWidgetAnimation;
class UTexture;
class UMaterialInterface;

UCLASS(EditInlineNew)
class HK_PROJECT_API UGammaSettingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHKProgressBar* BrightnessProgressBar;
    
private:
    UPROPERTY(Instanced)
    UHKButton* ButtonLeft;
    
    UPROPERTY(Instanced)
    UHKButton* ButtonRight;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
    UPROPERTY(Instanced)
    UHKButton* AcceptButton;
    
    UPROPERTY(Instanced)
    UHKButton* DefaultButton;
    
    UPROPERTY(Instanced)
    UHKTextBlock* ExplainText;
    
    UPROPERTY(Instanced)
    UImage* GammaIconLow;
    
    UPROPERTY(Instanced)
    UImage* GammaIconMiddle;
    
    UPROPERTY(Instanced)
    UImage* GammaIconHigh;
    
    UPROPERTY(Instanced)
    UHorizontalBox* KeyBox;
    
    UPROPERTY(Transient)
    UWidgetAnimation* FadeInAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_gammaIconLowTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_gammaIconMiddleTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* m_gammaIconHighTexture;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_gammaIconMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* gammaIconLowMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* gammaIconMiddleMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* gammaIconHighMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    float m_minimumGammaValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_maximumGammaValue;
    
public:
    UGammaSettingsWidget();
};

