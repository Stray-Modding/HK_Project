#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "SliderBoxWidget.generated.h"

class UHKBorder;
class UHKButton;
class UHKTextBlock;
class UHKSlider;
class USoundBase;

UCLASS(EditInlineNew)
class HK_PROJECT_API USliderBoxWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHKBorder* Border;
    
    UPROPERTY(Instanced)
    UHKTextBlock* SliderText;
    
    UPROPERTY(Instanced)
    UHKButton* LeftButton;
    
    UPROPERTY(Instanced)
    UHKButton* RightButton;
    
    UPROPERTY(Instanced)
    UHKSlider* Slider;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_notchCount;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_onSliderValueChangeSound;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_borderHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_textHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_sliderBarHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_sliderHandleHoveredColor;
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
public:
    USliderBoxWidget();
};

