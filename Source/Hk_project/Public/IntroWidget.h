#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "InputCoreTypes.h"
#include "IntroWidget.generated.h"

class UWidgetAnimation;
class UImage;

UCLASS(EditInlineNew)
class HK_PROJECT_API UIntroWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_maximumFlashingOpacity;
    
    UPROPERTY(EditAnywhere)
    float m_minimumFlashingOpacity;
    
    UPROPERTY(EditAnywhere)
    float m_flashingSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeAnimation;
    
private:
    UPROPERTY(Instanced)
    UImage* SavingIconImage;
    
public:
    UIntroWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowGammaSetting();
    
    UFUNCTION(BlueprintPure)
    bool IsPcBuild();
    
    UFUNCTION(BlueprintNativeEvent)
    void _OpenMenu();
    
    UFUNCTION(BlueprintNativeEvent)
    void _OnSkipButtonPressed(FKey _key);
    
};

