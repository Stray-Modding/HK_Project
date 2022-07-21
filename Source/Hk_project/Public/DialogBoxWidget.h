#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "DialogBoxWidget.generated.h"

class UTextBlock;
class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UDialogBoxWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* TitleText;
    
    UPROPERTY(Instanced)
    UTextBlock* OkButtonText;
    
    UPROPERTY(Instanced)
    UTextBlock* CancelButtonText;
    
    UPROPERTY(Instanced)
    UHKButton* OkButton;
    
    UPROPERTY(Instanced)
    UHKButton* CancelButton;
    
    UPROPERTY(Instanced)
    UHKButton* SelectButton;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
public:
    UDialogBoxWidget();
};

