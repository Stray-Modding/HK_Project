#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "CheckBoxWidget.generated.h"

class UHKBorder;
class UHKCheckBox;
class UTextBlock;
class USoundBase;

UCLASS(EditInlineNew)
class HK_PROJECT_API UCheckBoxWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHKBorder* Border;
    
    UPROPERTY(Instanced)
    UHKCheckBox* CheckBox;
    
    UPROPERTY(Instanced)
    UTextBlock* CheckBoxText;
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_onSelectedSound;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_onCheckedSound;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onHoveredTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onHoveredBorderBrushColor;
    
public:
    UCheckBoxWidget();
};

