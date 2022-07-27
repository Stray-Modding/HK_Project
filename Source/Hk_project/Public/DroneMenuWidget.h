#pragma once
#include "CoreMinimal.h"
#include "EDroneMenuCategory.h"
#include "BackpackUserWidget.h"
#include "DroneMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UDroneMenuWidget : public UBackpackUserWidget {
    GENERATED_BODY()
public:
    UDroneMenuWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCategory(EDroneMenuCategory _category);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    EDroneMenuCategory GetCategory() const;
    
};

