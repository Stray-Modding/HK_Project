#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HKUserWidget.h"
#include "DebugInputWidget.generated.h"

class UKeyIconWidget;
class UScrollBox;
class UUniformGridPanel;
class UHKButton;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UDebugInputWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHKButton* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKeyIconWidget> m_keyIconWidgetClass;
    
public:
    UDebugInputWidget();
};

