#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DroneUsableComponent.h"
#include "DialogLine.h"
#include "TalkableComponent.generated.h"

class UTalkableComponent;
class ACharacterDroid;
class ADialog;
class ULootableComponent;
class ADrone;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UTalkableComponent : public UDroneUsableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTalkableLineDelegate, UTalkableComponent*, _talkableComponent, const FDialogLine&, _line);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTalkableDelegate, UTalkableComponent*, _talkableComponent);
    
    UPROPERTY(BlueprintAssignable)
    FTalkableDelegate DialogBegan;
    
    UPROPERTY(BlueprintAssignable)
    FTalkableDelegate DialogEnded;
    
    UPROPERTY(BlueprintAssignable)
    FTalkableLineDelegate DialogLineBegan;
    
    UPROPERTY(BlueprintAssignable)
    FTalkableLineDelegate DialogLineDisplayed;
    
    UPROPERTY(BlueprintAssignable)
    FTalkableLineDelegate DialogLineEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_notMetTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_callBeforeDialogTime;
    
    UPROPERTY(EditAnywhere)
    bool m_useB12Voice;
    
private:
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_alreadyMet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ADialog* m_dialog;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ADialog> m_dialogClass;
    
    UPROPERTY(EditAnywhere)
    FColor m_primaryColor;
    
    UPROPERTY(EditAnywhere)
    FColor m_secondaryColor;
    
    UPROPERTY(SaveGame)
    bool m_isMet;
    
    UPROPERTY(EditAnywhere)
    bool m_turnTowardInterlocutor;
    
    UPROPERTY(EditAnywhere)
    float m_movementRange;
    
    UPROPERTY(EditAnywhere)
    float m_speedLimit;
    
    UPROPERTY()
    ACharacterDroid* m_droidOwner;
    
    UPROPERTY(Instanced)
    ULootableComponent* m_itemToShow;
    
public:
    UTalkableComponent();
    UFUNCTION(BlueprintCallable)
    void StopDialogInternal(ADrone* _drone);
    
    UFUNCTION(BlueprintCallable)
    void StartDialogInternal(ADrone* _drone);
    
    UFUNCTION(BlueprintPure)
    bool ShouldUseB12Voice() const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUseB12Voice(bool _useB12Voice);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryColor(const FColor& _color);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryColor(const FColor& _color);
    
    UFUNCTION(BlueprintCallable)
    void SetMet(bool _met);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToShow(ULootableComponent* _lootable);
    
    UFUNCTION(BlueprintCallable)
    void SetDialog(ADialog* _dialog);
    
    UFUNCTION(BlueprintPure)
    bool IsWaitingInterlocutor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWaitingDialog() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMet() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCalling() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetSecondaryColor() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetPrimaryColor() const;
    
    UFUNCTION(BlueprintPure)
    ULootableComponent* GetItemToShow() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetDialogDisplayedName() const;
    
    UFUNCTION(BlueprintPure)
    ADialog* GetDialog() const;
    
private:
    UFUNCTION()
    void _OnGuiClosed(ADrone* _drone);
    
};

