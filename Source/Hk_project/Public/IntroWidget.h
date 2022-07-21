#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "InputCoreTypes.h"
#include "IntroWidget.generated.h"

class UWidgetAnimation;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UIntroWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maximumFlashingOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimumFlashingOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_flashingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* SavingIconImage;
    
public:
    UIntroWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowGammaSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPcBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OpenMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnSkipButtonPressed(FKey _key);
    
};

