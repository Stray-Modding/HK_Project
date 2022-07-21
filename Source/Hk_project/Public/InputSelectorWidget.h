#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "InputSelectorWidget.generated.h"

class USoundBase;
class UHKTextBlock;
class UHKButton;
class UKeyIconWidget;

UCLASS(EditInlineNew)
class HK_PROJECT_API UInputSelectorWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_onListeningCancelSound;
    
    UPROPERTY(Instanced)
    UHKButton* Button;
    
    UPROPERTY(Instanced)
    UHKTextBlock* Text;
    
    UPROPERTY(Instanced)
    UKeyIconWidget* KeyIcon;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_waitingText;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<FKey> m_escapeKeys;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onListeningTextColor;
    
public:
    UInputSelectorWidget();
};

