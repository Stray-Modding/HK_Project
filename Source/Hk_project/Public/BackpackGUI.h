#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBackpackGUIMode.h"
#include "BackpackGUI.generated.h"

class UPhoto;
class ULootableComponent;
class ABackpackGUI;
class ACatPawn;
class ABackpack;

UCLASS()
class HK_PROJECT_API ABackpackGUI : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGUIOpened, ABackpackGUI*, GUI);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGUIClosed, ABackpackGUI*, GUI);
    
private:
    UPROPERTY(EditAnywhere)
    float m_GUIInputDeadZone;
    
public:
    ABackpackGUI();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartDialog(AActor* _droid);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGUIMode(TEnumAsByte<EBackpackGUIMode> _mode);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnYPressed(bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnXPressed(bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnValidatePressed(bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnUpPressed(bool& _handled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateInventory(const TArray<ULootableComponent*>& _inventory);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRightVerticalAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRightPressed(bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRightHorizontalAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRBPressed(bool& _handled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPhotoCatalogUpdated(const TArray<UPhoto*>& _photoCatalog);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpened();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLeftPressed(bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLBPressed(bool& _handled);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUIModeChanged();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUIInputNotHandled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGUIInputHandled();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDpadUpPressed(bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDpadRightPressed(bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDpadLeftPressed(bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDpadDownPressed(bool& _handled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDownPressed(bool& _handled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClosed();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCancelPressed(bool& _handled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBackpackSet(ABackpack* _backpack);
    
public:
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EBackpackGUIMode> GetGUIMode() const;
    
    UFUNCTION(BlueprintPure)
    ACatPawn* GetCatPawn() const;
    
    UFUNCTION(BlueprintPure)
    ABackpack* GetBackpack() const;
    
};

