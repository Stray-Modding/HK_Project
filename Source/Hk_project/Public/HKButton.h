#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "UObject/NoExportTypes.h"
#include "HKButton.generated.h"

class USoundBase;

UCLASS()
class HK_PROJECT_API UHKButton : public UButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USoundBase* m_onSelectedSound;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_onPressedSound;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SelectedTextColor;
    
    UPROPERTY(EditAnywhere)
    float m_onHoveredAlpha;
    
    UPROPERTY(EditAnywhere)
    bool m_changeAlphaOnHovered;
    
    UPROPERTY(EditAnywhere)
    bool m_changeTextColorOnSelected;
    
public:
    UHKButton();
private:
    UFUNCTION()
    void _OnUnHovered();
    
    UFUNCTION()
    void _OnHovered();
    
    UFUNCTION()
    void _OnClicked();
    
};

