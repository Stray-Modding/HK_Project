#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EUsableInteractionButton.h"
#include "CatUsableComponentBase.generated.h"

class USceneComponent;
class UCatUsableComponentBase;
class ACatPawn;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatUsableComponentBase : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCatUsableDelegate, UCatUsableComponentBase*, Component, ACatPawn*, cat);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FCatUsableDelegate UseStarted;
    
    UPROPERTY(BlueprintAssignable)
    FCatUsableDelegate BeforeUseDone;
    
    UPROPERTY(BlueprintAssignable)
    FCatUsableDelegate AfterUseDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_useTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_displayedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_interactRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_visibleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_startEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_disableShoulderCamera;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_startInteractionSound;
    
private:
    UPROPERTY()
    ACatPawn* m_usingCat;
    
    UPROPERTY()
    ACatPawn* m_focusingCat;
    
    UPROPERTY(SaveGame)
    bool m_isEnabled;
    
    UPROPERTY(SaveGame)
    bool m_isUseEnabled;
    
    UPROPERTY(SaveGame)
    bool m_isSelectable;
    
public:
    UCatUsableComponentBase();
    UFUNCTION(BlueprintCallable)
    void UseDone();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldStopBeforeTeleport() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldDisplayFeedbackWhileUsing() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUseEnabled(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectable(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetGUIFeedbackPosition(USceneComponent* _usePosition, FName _socket);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayedName(FText _displayedName);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsValid(ACatPawn* _cat);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsUseEnabled() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsSelectable() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingUsed() const;
    
    UFUNCTION(BlueprintPure)
    ACatPawn* GetUsingCat() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetUseDisplayText() const;
    
    /*UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TEnumAsByte<EUsableInteractionButton> GetInteractionButton() const;*/
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetGUIFeedbackPosition(FName& _outSocket) const;
    
    UFUNCTION(BlueprintPure)
    ACatPawn* GetFocusingCat() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetDisplayedName() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanInteract(ACatPawn* _cat);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanBeUsedWhileSameButtonIsUsed() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void _OnUseStarted(ACatPawn* _cat);
    
    UFUNCTION(BlueprintNativeEvent)
    void _OnFocusLost(ACatPawn* _cat);
    
    UFUNCTION(BlueprintNativeEvent)
    void _OnFocusGained(ACatPawn* _cat);
    
    UFUNCTION(BlueprintNativeEvent)
    void _OnBeforeUseDone(ACatPawn* _cat);
    
    UFUNCTION(BlueprintNativeEvent)
    void _OnAfterUseDone(ACatPawn* _cat);
    
    UFUNCTION(BlueprintNativeEvent)
    USoundBase* _GetStartSoundToPlay() const;
    
};

