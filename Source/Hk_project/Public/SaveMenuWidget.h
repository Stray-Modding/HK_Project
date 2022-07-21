#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SaveMenuWidget.generated.h"

class USaveSlotWidget;
class UHKButton;
class USoundBase;

UCLASS(EditInlineNew)
class HK_PROJECT_API USaveMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USaveSlotWidget* SaveSlot1;
    
    UPROPERTY(Instanced)
    USaveSlotWidget* SaveSlot2;
    
    UPROPERTY(Instanced)
    USaveSlotWidget* SaveSlot3;
    
    UPROPERTY(Instanced)
    UHKButton* SelectButton;
    
    UPROPERTY(Instanced)
    UHKButton* BackButton;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_onBackSound;
    
public:
    USaveMenuWidget();
};

