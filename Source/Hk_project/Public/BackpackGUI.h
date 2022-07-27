#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBackpackGUIMode.h"
#include "BackpackGUI.generated.h"

class ULootableComponent;
class ABackpackGUI;
class ACatPawn;
class ABackpack;
class UPhoto;

UCLASS(Blueprintable)
class HK_PROJECT_API ABackpackGUI : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGUIOpened, ABackpackGUI*, GUI);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGUIClosed, ABackpackGUI*, GUI);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GUIInputDeadZone;
    
public:
    ABackpackGUI();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDialog(AActor* _droid);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGUIMode(TEnumAsByte<EBackpackGUIMode> _mode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnYPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnXPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnValidatePressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInventory(const TArray<ULootableComponent*>& _inventory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightVerticalAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightHorizontalAxis(float _value, bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRBPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhotoCatalogUpdated(const TArray<UPhoto*>& _photoCatalog);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLBPressed(bool& _handled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUIModeChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUIInputNotHandled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGUIInputHandled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadUpPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadRightPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadLeftPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDpadDownPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDownPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelPressed(bool& _handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBackpackSet(ABackpack* _backpack);
    
public:
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EBackpackGUIMode> GetGUIMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACatPawn* GetCatPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABackpack* GetBackpack() const;
    
};

