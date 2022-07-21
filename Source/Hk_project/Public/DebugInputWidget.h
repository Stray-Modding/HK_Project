#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HKUserWidget.h"
#include "DebugInputWidget.generated.h"

class UUniformGridPanel;
class UScrollBox;
class UHKButton;
class UKeyIconWidget;

UCLASS(EditInlineNew)
class HK_PROJECT_API UDebugInputWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UUniformGridPanel* grid;
    
    UPROPERTY(Instanced)
    UScrollBox* ScrollBox;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UKeyIconWidget> m_keyIconWidgetClass;
    
public:
    UDebugInputWidget();
};

