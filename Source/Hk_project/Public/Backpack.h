#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "BackpackScreenEntry.h"
#include "UObject/NoExportTypes.h"
#include "EDialogMovementMode.h"
#include "DialogLine.h"
#include "Backpack.generated.h"

class ABackpack;
class UBackpackUsableComponent;
class ADrone;
class ADialog;
class ULootableComponent;
class UPhoto;
class USceneComponent;
class USkeletalMeshComponent;
class UWidgetComponent;
class UTalkableComponent;
class ACatPawn;
class ABackpackGUI;
class UPrimitiveComponent;
class UHierarchicalStateMachine;
class AIEM;
class AHKHUD;
class UBackpackScreenUserWidget;
class USoundBase;
class UUserWidget;
class AHKPlayerController;

UCLASS(Blueprintable)
class HK_PROJECT_API ABackpack : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUseAction, ABackpack*, _backpack, UBackpackUsableComponent*, _loot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLootAction, ABackpack*, _backpack, ULootableComponent*, _loot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogAction, ABackpack*, _backpack, ADialog*, _dialog);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBackpackDroneAction, ABackpack*, _backpack, ADrone*, _drone);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBackpackAction, ABackpack*, _backpack);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackpackAction PendingDialogBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackpackAction PendingDialogEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogAction DialogBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogAction DialogLineBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogAction DialogEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootAction AddedObjectToInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootAction RemovedObjectFromInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackpackAction EmptyInteractionTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseAction UseStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseAction UseEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackpackDroneAction DroneSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackpackDroneAction DroneUnset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* m_screenWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTalkableComponent* m_talkable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACatPawn* m_catPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADrone* M_Drone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABackpackGUI* m_GUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_interactionCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_isBackpackMeshVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_interactCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIEM> m_IEMClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADialog* m_currentDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pendingDialogRingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_interactionDetectionLossTime;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 m_B12HelpDisabledCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 m_showItemToB12DisabledCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 m_exitDialogDisabledCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULootableComponent*> m_inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> m_savedInventory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint16 m_disableInventoryMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoto*> m_photos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHKHUD* m_HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackpackScreenEntry> m_backpackScreenStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBackpackScreenUserWidget> m_defaultBackpackScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBackpackScreenUserWidget> m_IEMBackpackScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBackpackScreenUserWidget> m_notificationScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBackpackScreenUserWidget> m_usableBackpackScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBackpackScreenUserWidget> m_talkableBackpackScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnequipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleLight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHelpWanted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBackpackMeshVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBackpackMeshInvisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnB12NotificationPushed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnB12NotificationCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithinHelpDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithinDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowItemToB12Enabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryMenuEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGUIOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExitDialogEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackpackMeshVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsB12HelpEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InstantiateAndAddActorToInventory(TSubclassOf<AActor> _itemClass);
    
    UFUNCTION(BlueprintCallable)
    void IEM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasIEM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTalkableComponent* GetTalkableComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingIEMTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPhoto*> GetPhotoCatalog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ULootableComponent*> GetInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIEMDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABackpackGUI* GetGUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADrone* GetDrone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetDialogDroneSocket(FName& _socketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetDefaultStartInteractionSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBackpackUsableComponent* GetCurrentInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADialog* GetCurrentDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBackpackUsableComponent* GetCurrentClosestInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACatPawn* GetCatPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterLoaded();
    
    UFUNCTION(BlueprintCallable)
    void AddObjectToInventory(ULootableComponent* _lootable);
    
private:
    UFUNCTION()
    void _OnInventoryActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void _OnIEMPressed();
    
    UFUNCTION()
    void _OnHUDEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void _OnHelpPressed();
    
    UFUNCTION(BlueprintCallable)
    void _OnDroneGUIOpened(ADrone* _drone);
    
    UFUNCTION(BlueprintCallable)
    void _OnDroneGUIClosed(ADrone* _drone);
    
    UFUNCTION(BlueprintCallable)
    void _OnDialogLineBegan(UTalkableComponent* _talkable, const FDialogLine& _line);
    
    UFUNCTION(BlueprintCallable)
    void _OnDialogEnded(UTalkableComponent* _talkable);
    
    UFUNCTION(BlueprintCallable)
    void _OnDialogBegan(UTalkableComponent* _talkable);
    
    UFUNCTION(BlueprintCallable)
    void _OnCatUnpossessed(ACatPawn* _cat, AHKPlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    void _OnCatPossessed(ACatPawn* _cat, AHKPlayerController* _playerController);
    
};

