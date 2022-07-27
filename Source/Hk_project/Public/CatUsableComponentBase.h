#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EUsableInteractionButton.h"
#include "CatUsableComponentBase.generated.h"

class UCatUsableComponentBase;
class ACatPawn;
class USoundBase;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatUsableComponentBase : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCatUsableDelegate, UCatUsableComponentBase*, Component, ACatPawn*, cat);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatUsableDelegate UseStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatUsableDelegate BeforeUseDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatUsableDelegate AfterUseDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_useTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_displayedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_interactRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_visibleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_startEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disableShoulderCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_startInteractionSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACatPawn* m_usingCat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACatPawn* m_focusingCat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_isEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_isUseEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_isSelectable;
    
public:
    UCatUsableComponentBase();
    UFUNCTION(BlueprintCallable)
    void UseDone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldStopBeforeTeleport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsValid(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsUseEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSelectable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingUsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACatPawn* GetUsingCat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetUseDisplayText() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EUsableInteractionButton GetInteractionButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetGUIFeedbackPosition(FName& _outSocket) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACatPawn* GetFocusingCat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetDisplayedName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanInteract(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanBeUsedWhileSameButtonIsUsed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnUseStarted(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnFocusLost(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnFocusGained(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnBeforeUseDone(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnAfterUseDone(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USoundBase* _GetStartSoundToPlay() const;
    
};

