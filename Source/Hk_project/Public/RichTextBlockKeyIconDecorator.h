#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextBlockKeyIconDecorator.generated.h"

class UBindingIconWidget;

UCLASS(Abstract)
class HK_PROJECT_API URichTextBlockKeyIconDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBindingIconWidget> m_widgetClass;
    
    UPROPERTY(Instanced)
    UBindingIconWidget* m_widget;
    
public:
    URichTextBlockKeyIconDecorator();
};

