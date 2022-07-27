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

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UTalkableComponent : public UDroneUsableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTalkableLineDelegate, UTalkableComponent*, _talkableComponent, const FDialogLine&, _line);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTalkableDelegate, UTalkableComponent*, _talkableComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkableDelegate DialogBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkableDelegate DialogEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkableLineDelegate DialogLineBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkableLineDelegate DialogLineDisplayed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkableLineDelegate DialogLineEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_notMetTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_callBeforeDialogTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useB12Voice;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_alreadyMet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ADialog* m_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADialog> m_dialogClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_primaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_secondaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_isMet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_turnTowardInterlocutor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_movementRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_speedLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacterDroid* m_droidOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULootableComponent* m_itemToShow;
    
public:
    UTalkableComponent();
    UFUNCTION(BlueprintCallable)
    void StopDialogInternal(ADrone* _drone);
    
    UFUNCTION(BlueprintCallable)
    void StartDialogInternal(ADrone* _drone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingInterlocutor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetSecondaryColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetPrimaryColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULootableComponent* GetItemToShow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetDialogDisplayedName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADialog* GetDialog() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnGuiClosed(ADrone* _drone);
    
};

