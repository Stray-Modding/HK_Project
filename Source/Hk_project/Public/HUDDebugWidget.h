#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDDebugWidget.generated.h"

class UHUDDebugWidget;

UCLASS(EditInlineNew)
class HK_PROJECT_API UHUDDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHUDDebugWidgetAction, UHUDDebugWidget*, _widget);
    
    UHUDDebugWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpened();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUIY();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUIX();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUIValidate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUIUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUIRight();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUILeft();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUIDown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUICancel();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

