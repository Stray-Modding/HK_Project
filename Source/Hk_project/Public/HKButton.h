#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "UObject/NoExportTypes.h"
#include "HKButton.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class HK_PROJECT_API UHKButton : public UButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_onSelectedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_onPressedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_onHoveredAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_changeAlphaOnHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_changeTextColorOnSelected;
    
public:
    UHKButton();
private:
    UFUNCTION(BlueprintCallable)
    void _OnUnHovered();
    
    UFUNCTION(BlueprintCallable)
    void _OnHovered();
    
    UFUNCTION(BlueprintCallable)
    void _OnClicked();
    
};

