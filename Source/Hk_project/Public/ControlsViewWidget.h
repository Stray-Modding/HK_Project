#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "ControlsViewWidget.generated.h"

class UHKButton;

UCLASS(EditInlineNew)
class HK_PROJECT_API UControlsViewWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
public:
    UControlsViewWidget();
};

