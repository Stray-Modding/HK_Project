#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InputCoreTypes.h"
#include "KeyIconWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UKeyIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UKeyIconWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKey(const FKey& _key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsSelected(bool _isSelected);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyboardColumnHidden() const;
    
};

