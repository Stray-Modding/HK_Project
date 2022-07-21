#pragma once
#include "CoreMinimal.h"
#include "CatRemoteAction.h"
#include "GameFramework/Actor.h"
#include "CatRemoteController.generated.h"

class ACatPawn;
class UHierarchicalStateMachine;

UCLASS(Blueprintable)
class HK_PROJECT_API ACatRemoteController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCatRemoteAction> m_actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_autoStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_loopSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACatPawn* m_controlledCat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_stateMachine;
    
public:
    ACatRemoteController();
    UFUNCTION(BlueprintCallable)
    void StopSequence();
    
    UFUNCTION(BlueprintCallable)
    void StartSequence();
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnJumpEnd(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable)
    void _OnFollowSplineEndReached(ACatPawn* _cat);
    
};

