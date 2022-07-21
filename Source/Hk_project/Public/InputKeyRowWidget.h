#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "InputKeyRowWidget.generated.h"

class UInputSelectorWidget;
class UHKBorder;
class UHKButton;
class UHKTextBlock;
class UImage;

UCLASS(EditInlineNew)
class HK_PROJECT_API UInputKeyRowWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UInputSelectorWidget* FirstKeyButton;
    
    UPROPERTY(Instanced)
    UInputSelectorWidget* SecondKeyButton;
    
    UPROPERTY(Instanced)
    UHKBorder* Border;
    
    UPROPERTY(Instanced)
    UHKTextBlock* ActionKeyTextBlock;
    
    UPROPERTY(Instanced)
    UImage* SeperatorImage;
    
    UPROPERTY(Instanced)
    UHKButton* KeyRowButton;
    
    UPROPERTY(EditAnywhere)
    FText m_actionKeyText;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onHoveredTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onListeningTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onListeningBorderBrushColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onHoveredBorderBrushColor;
    
public:
    UInputKeyRowWidget();
};

