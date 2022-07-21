#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDDebugWidget.generated.h"

class UHUDDebugWidget;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UHUDDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHUDDebugWidgetAction, UHUDDebugWidget*, _widget);
    
    UHUDDebugWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpened();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUIY();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUIX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUIValidate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUIUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUIRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUILeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUIDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUICancel();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

