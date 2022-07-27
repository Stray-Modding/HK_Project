#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BackpackUserWidget.generated.h"

class ADrone;
class ABackpackGUI;

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UBackpackUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBackpackUserWidget();
    UFUNCTION(BlueprintCallable)
    void SetBackpackGUI(ABackpackGUI* _GUI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnYPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnXPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnValidatePressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightVerticalAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightTriggerAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightHorizontalAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRBPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftVerticalAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftTriggerAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftHorizontalAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLBPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadUpReleased(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadUpPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadRightReleased(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadRightPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadLeftReleased(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadLeftPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadDownReleased(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadDownPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDownPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABackpackGUI* GetGUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADrone* GetDrone() const;
    
};

