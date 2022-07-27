#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "SaveMenuWidget.generated.h"

class USaveSlotWidget;
class UHKButton;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API USaveMenuWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveSlotWidget* SaveSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveSlotWidget* SaveSlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveSlotWidget* SaveSlot3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHKButton* SelectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHKButton* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_onBackSound;
    
public:
    USaveMenuWidget();
};

