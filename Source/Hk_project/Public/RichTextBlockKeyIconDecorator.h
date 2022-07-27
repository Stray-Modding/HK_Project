#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextBlockKeyIconDecorator.generated.h"

class UBindingIconWidget;

UCLASS(Abstract, Blueprintable)
class HK_PROJECT_API URichTextBlockKeyIconDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBindingIconWidget> m_widgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBindingIconWidget* m_widget;
    
public:
    URichTextBlockKeyIconDecorator();
};

