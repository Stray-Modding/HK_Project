#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "TabButtonWidget.generated.h"

class UHKButton;
class UTextBlock;
class UImage;

UCLASS(EditInlineNew)
class HK_PROJECT_API UTabButtonWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHKButton* Button;
    
    UPROPERTY(Instanced)
    UTextBlock* ButtonTextBlock;
    
    UPROPERTY(Instanced)
    UImage* ButtonImage;
    
    UPROPERTY(EditAnywhere)
    FText ButtonText;
    
public:
    UTabButtonWidget();
};

