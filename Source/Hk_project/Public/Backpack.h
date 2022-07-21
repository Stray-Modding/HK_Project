#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BackpackScreenEntry.h"
#include "EDialogMovementMode.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "LootableComponent.h"
#include "DialogLine.h"
#include "Backpack.generated.h"

class AIEM;
class UWidgetComponent;
class ADrone;
class ABackpack;
class ADialog;
class UBackpackUsableComponent;
class ULootableComponent;
class UHierarchicalStateMachine;
class USkeletalMeshComponent;
class UTalkableComponent;
class UPrimitiveComponent;
class ACatPawn;
class ABackpackGUI;
class USceneComponent;
class UPhoto;
class AHKHUD;
class UBackpackScreenUserWidget;
class USoundBase;
class UUserWidget;
class AHKPlayerController;

UCLASS()
class HK_PROJECT_API ABackpack : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUseAction, ABackpack*, _backpack, UBackpackUsableComponent*, _loot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLootAction, ABackpack*, _backpack, ULootableComponent*, _loot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogAction, ABackpack*, _backpack, ADialog*, _dialog);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBackpackDroneAction, ABackpack*, _backpack, ADrone*, _drone);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBackpackAction, ABackpack*, _backpack);
    
    UPROPERTY(BlueprintAssignable)
    FBackpackAction PendingDialogBegan;
    
    UPROPERTY(BlueprintAssignable)
    FBackpackAction PendingDialogEnded;
    
    UPROPERTY(BlueprintAssignable)
    FDialogAction DialogBegan;
    
    UPROPERTY(BlueprintAssignable)
    FDialogAction DialogLineBegan;
    
    UPROPERTY(BlueprintAssignable)
    FDialogAction DialogEnded;
    
    UPROPERTY(BlueprintAssignable)
    FLootAction AddedObjectToInventory;
    
    UPROPERTY(BlueprintAssignable)
    FLootAction RemovedObjectFromInventory;
    
    UPROPERTY(BlueprintAssignable)
    FBackpackAction EmptyInteractionTriggered;
    
    UPROPERTY(BlueprintAssignable)
    FUseAction UseStarted;
    
    UPROPERTY(BlueprintAssignable)
    FUseAction UseEnded;
    
    UPROPERTY(BlueprintAssignable)
    FBackpackDroneAction DroneSet;
    
    UPROPERTY(BlueprintAssignable)
    FBackpackDroneAction DroneUnset;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* m_mesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UWidgetComponent* m_screenWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTalkableComponent* m_talkable;
    
private:
    UPROPERTY()
    ACatPawn* m_catPawn;
    
    UPROPERTY()
    ADrone* M_Drone;
    
    UPROPERTY()
    ABackpackGUI* m_GUI;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* m_interactionCollider;
    
    UPROPERTY(SaveGame)
    bool m_isBackpackMeshVisible;
    
    UPROPERTY(Instanced)
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_interactCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AIEM> m_IEMClass;
    
    UPROPERTY()
    ADialog* m_currentDialog;
    
    UPROPERTY(EditAnywhere)
    float m_pendingDialogRingTime;
    
    UPROPERTY(EditAnywhere)
    float m_interactionDetectionLossTime;
    
    UPROPERTY(SaveGame)
    uint8 m_B12HelpDisabledCount;
    
    UPROPERTY(SaveGame)
    uint8 m_showItemToB12DisabledCount;
    
    UPROPERTY(SaveGame)
    uint8 m_exitDialogDisabledCount;
    
    UPROPERTY(Instanced)
    TArray<ULootableComponent*> m_inventory;
    
    UPROPERTY(SaveGame)
    TArray<TSubclassOf<AActor>> m_savedInventory;
    
    UPROPERTY(SaveGame)
    uint16 m_disableInventoryMenu;
    
    UPROPERTY()
    TArray<UPhoto*> m_photos;
    
    UPROPERTY()
    AHKHUD* m_HUD;
    
    UPROPERTY()
    TArray<FBackpackScreenEntry> m_backpackScreenStack;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBackpackScreenUserWidget> m_defaultBackpackScreenWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBackpackScreenUserWidget> m_IEMBackpackScreenWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBackpackScreenUserWidget> m_notificationScreenWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBackpackScreenUserWidget> m_usableBackpackScreenWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBackpackScreenUserWidget> m_talkableBackpackScreenWidgetClass;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_defaultStartInteractionSound;
    
public:
    ABackpack();
    UFUNCTION(BlueprintCallable)
    void Use(UBackpackUsableComponent* _usable);
    
    UFUNCTION(BlueprintCallable)
    void UpdateScreenWidget(FName _id, TSubclassOf<UBackpackScreenUserWidget> _class);
    
    UFUNCTION(BlueprintCallable)
    void UnchargeIEM();
    
    UFUNCTION(BlueprintCallable)
    void StopUse();
    
    UFUNCTION(BlueprintCallable)
    void SetShowItemToB12Enabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetExitDialogEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBackpackMeshVisible(bool _visible);
    
    UFUNCTION(BlueprintCallable)
    void SetB12HelpEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SendExternalDialogClass(TSubclassOf<ADialog> _dialogClass, FText _speakerName, TEnumAsByte<EDialogMovementMode> _movementMode);
    
    UFUNCTION(BlueprintCallable)
    void SendExternalDialog(ADialog* _dialog, FText _speakerName, TEnumAsByte<EDialogMovementMode> _movementMode);
    
    UFUNCTION(BlueprintCallable)
    void RemoveObjectFromInventory(ULootableComponent* _lootable, FVector _position, FRotator _rotation);
    
    UFUNCTION(BlueprintCallable)
    void PushScreenWidget(FName _id, TSubclassOf<UBackpackScreenUserWidget> _class, int32 _priority);
    
    UFUNCTION(BlueprintCallable)
    void PushInteractionDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PushB12Notification();
    
    UFUNCTION(BlueprintCallable)
    void PopScreenWidget(FName _id);
    
    UFUNCTION(BlueprintCallable)
    void PopInteractionDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OpenGUI(TSubclassOf<UUserWidget> _widgetClass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnequipped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnToggleLight();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHelpWanted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEquipped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBackpackMeshVisible();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBackpackMeshInvisible();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnB12NotificationPushed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnB12NotificationCleared();
    
    UFUNCTION(BlueprintPure)
    bool IsWithinHelpDialog() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWithinDialog() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShowItemToB12Enabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryMenuEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteracting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGUIOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExitDialogEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBackpackMeshVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsB12HelpEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InstantiateAndAddActorToInventory(TSubclassOf<AActor> _itemClass);
    
    UFUNCTION(BlueprintCallable)
    void IEM();
    
    UFUNCTION(BlueprintPure)
    bool HasIEM() const;
    
    UFUNCTION(BlueprintPure)
    UTalkableComponent* GetTalkableComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingIEMTime() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPhoto*> GetPhotoCatalog() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ULootableComponent*> GetInventory() const;
    
    UFUNCTION(BlueprintPure)
    float GetIEMDuration() const;
    
    UFUNCTION(BlueprintPure)
    ABackpackGUI* GetGUI() const;
    
    UFUNCTION(BlueprintPure)
    ADrone* GetDrone() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetDialogDroneSocket(FName& _socketName) const;
    
    UFUNCTION(BlueprintPure)
    USoundBase* GetDefaultStartInteractionSound() const;
    
    UFUNCTION(BlueprintPure)
    UBackpackUsableComponent* GetCurrentInteraction() const;
    
    UFUNCTION(BlueprintPure)
    ADialog* GetCurrentDialog() const;
    
    UFUNCTION(BlueprintPure)
    UBackpackUsableComponent* GetCurrentClosestInteraction() const;
    
    UFUNCTION(BlueprintPure)
    ACatPawn* GetCatPawn() const;
    
    UFUNCTION(BlueprintPure)
    ULootableComponent* FindItemInInventory(FName ID) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInventoryMenu();
    
    UFUNCTION(BlueprintCallable)
    void DisableInventoryMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseGUI();
    
    UFUNCTION(BlueprintCallable)
    void ClearInventory();
    
    UFUNCTION(BlueprintCallable)
    void ClearB12Notification();
    
    UFUNCTION(BlueprintCallable)
    void ChargeIEM(float _duration);
    
    UFUNCTION(BlueprintNativeEvent)
    void BeforeSaved();
    
    UFUNCTION(BlueprintNativeEvent)
    void AfterLoaded();
    
    UFUNCTION(BlueprintCallable)
    void AddObjectToInventory(ULootableComponent* _lootable);
    
private:
    UFUNCTION()
    void _OnInventoryActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION()
    void _OnIEMPressed();
    
    UFUNCTION()
    void _OnHUDEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION()
    void _OnHelpPressed();
    
    UFUNCTION()
    void _OnDroneGUIOpened(ADrone* _drone);
    
    UFUNCTION()
    void _OnDroneGUIClosed(ADrone* _drone);
    
    UFUNCTION()
    void _OnDialogLineBegan(UTalkableComponent* _talkable, const FDialogLine& _line);
    
    UFUNCTION()
    void _OnDialogEnded(UTalkableComponent* _talkable);
    
    UFUNCTION()
    void _OnDialogBegan(UTalkableComponent* _talkable);
    
    UFUNCTION()
    void _OnCatUnpossessed(ACatPawn* _cat, AHKPlayerController* _playerController);
    
    UFUNCTION()
    void _OnCatPossessed(ACatPawn* _cat, AHKPlayerController* _playerController);
    
};

