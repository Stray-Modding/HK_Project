#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BackpackScreenUserWidget.generated.h"

class ABackpack;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UBackpackScreenUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBackpackScreenUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBackpackSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABackpack* GetBackpack() const;
    
};

