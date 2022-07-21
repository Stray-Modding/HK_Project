#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BindingIconWidget.generated.h"

UCLASS(EditInlineNew)
class HK_PROJECT_API UBindingIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBindingIconWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSize(float _size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBindingName(const FName& _bindingName);
    
};

