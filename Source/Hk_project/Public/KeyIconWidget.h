#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InputCoreTypes.h"
#include "KeyIconWidget.generated.h"

UCLASS(EditInlineNew)
class HK_PROJECT_API UKeyIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UKeyIconWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetKey(const FKey& _key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsSelected(bool _isSelected);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsKeyboardColumnHidden() const;
    
};

