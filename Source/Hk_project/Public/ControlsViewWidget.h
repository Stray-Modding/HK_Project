#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "ControlsViewWidget.generated.h"

class UHKButton;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UControlsViewWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHKButton* BackButton;
    
public:
    UControlsViewWidget();
};

