#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DialogLine.h"
#include "Dialog.generated.h"

class USaveComponent;
class ADialog;
class UAnimSequence;
class UBillboardComponent;
class ULootableComponent;
class UTalkableComponent;
class ACatPawn;

UCLASS()
class HK_PROJECT_API ADialog : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogDelegate, ADialog*, _dialog);
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UBillboardComponent* m_billboard;
    
    UPROPERTY(Export, VisibleAnywhere)
    USaveComponent* m_save;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_canBeShownItems;
    
    UPROPERTY(EditAnywhere)
    bool m_autoResetCameraActivated;
    
    UPROPERTY(Transient)
    UAnimSequence* m_currentSynchronizedAnimation;
    
public:
    ADialog();
    UFUNCTION(BlueprintCallable)
    void UnrollDialog();
    
    UFUNCTION(BlueprintCallable)
    void ThrowDialogEvent(FName _eventName);
    
    UFUNCTION(BlueprintCallable)
    void StartDialog();
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeShownItems(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoResetCameraActivated(bool _activated);
    
    UFUNCTION(BlueprintCallable)
    void RequestNextDialogLine();
    
    UFUNCTION(BlueprintCallable)
    bool PollNextDialogLineRequested();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRequestDialog();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMeetupBegan();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnItemShown(ULootableComponent* _lootable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDialogBegan();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBeforeDialogEnded();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLineTextDisplayed();
    
    UFUNCTION(BlueprintPure)
    bool IsUnrollRequested() const;
    
    UFUNCTION(BlueprintPure)
    bool IslineTextDisplayed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDialogRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingShownItem() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAutoResetCameraActivated() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetCurrentSynchronizedAnimation() const;
    
    UFUNCTION(BlueprintPure)
    UTalkableComponent* GetCurrentSpeaker() const;
    
    UFUNCTION(BlueprintPure)
    FDialogLine GetCurrentLine() const;
    
    UFUNCTION(BlueprintPure)
    ACatPawn* GetCat() const;
    
    UFUNCTION(BlueprintCallable)
    void EndDialogLine(const FDialogLine& _line);
    
    UFUNCTION(BlueprintCallable)
    void EndDialog();
    
    UFUNCTION(BlueprintCallable)
    bool CheckDialogEvent(FName _eventName);
    
    UFUNCTION(BlueprintPure)
    bool CanBeShownItems() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginShowItem(ULootableComponent* _lootable);
    
    UFUNCTION(BlueprintCallable)
    void BeginMeetup();
    
    UFUNCTION(BlueprintCallable)
    void BeginDialogLine(const FDialogLine& _line);
    
    UFUNCTION(BlueprintCallable)
    void BeginDefaultDialog();
    
};

