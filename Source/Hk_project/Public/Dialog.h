#pragma once
#include "CoreMinimal.h"
#include "DialogLine.h"
#include "GameFramework/Actor.h"
#include "Dialog.generated.h"

class ULootableComponent;
class USaveComponent;
class ADialog;
class UBillboardComponent;
class UAnimSequence;
class UTalkableComponent;
class ACatPawn;

UCLASS(Blueprintable)
class HK_PROJECT_API ADialog : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogDelegate, ADialog*, _dialog);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBillboardComponent* m_billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveComponent* m_save;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canBeShownItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_autoResetCameraActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMeetupBegan();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemShown(ULootableComponent* _lootable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDialogBegan();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeforeDialogEnded();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLineTextDisplayed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnrollRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IslineTextDisplayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingShownItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoResetCameraActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetCurrentSynchronizedAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTalkableComponent* GetCurrentSpeaker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDialogLine GetCurrentLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACatPawn* GetCat() const;
    
    UFUNCTION(BlueprintCallable)
    void EndDialogLine(const FDialogLine& _line);
    
    UFUNCTION(BlueprintCallable)
    void EndDialog();
    
    UFUNCTION(BlueprintCallable)
    bool CheckDialogEvent(FName _eventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

