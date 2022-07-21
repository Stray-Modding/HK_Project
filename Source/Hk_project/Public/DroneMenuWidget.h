#pragma once
#include "CoreMinimal.h"
#include "BackpackUserWidget.h"
#include "EDroneMenuCategory.h"
#include "DroneMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UDroneMenuWidget : public UBackpackUserWidget {
    GENERATED_BODY()
public:
    UDroneMenuWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCategory(TEnumAsByte<EDroneMenuCategory> _category);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TEnumAsByte<EDroneMenuCategory> GetCategory() const;
    
};

