#pragma once
#include "CoreMinimal.h"
#include "BackpackUserWidget.h"
#include "EDroneMenuCategory.h"
#include "DroneMenuWidget.generated.h"

UCLASS(EditInlineNew)
class HK_PROJECT_API UDroneMenuWidget : public UBackpackUserWidget {
    GENERATED_BODY()
public:
    UDroneMenuWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCategory(EDroneMenuCategory _category);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    EDroneMenuCategory GetCategory() const;
    
};

