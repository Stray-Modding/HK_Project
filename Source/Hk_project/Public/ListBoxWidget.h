#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ListBoxWidget.generated.h"

class UHKBorder;
class UHKTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UListBoxWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHKBorder* SelectionBorder;
    
    UPROPERTY(Instanced)
    UHKButton* LeftButton;
    
    UPROPERTY(Instanced)
    UHKButton* RightButton;
    
    UPROPERTY(Instanced)
    UHKTextBlock* Text;
    
    UPROPERTY(Instanced)
    UHKTextBlock* ListBoxText;
    
    UPROPERTY(Instanced)
    UHKBorder* Border;
    
    UPROPERTY(EditAnywhere)
    FText m_listBoxText;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_selectedTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_selectedSelectionBorderColor;
    
public:
    UListBoxWidget();
};

