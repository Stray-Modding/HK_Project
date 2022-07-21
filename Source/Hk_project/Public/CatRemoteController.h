#pragma once
#include "CoreMinimal.h"
#include "CatRemoteAction.h"
#include "GameFramework/Actor.h"
#include "CatRemoteController.generated.h"

class ACatPawn;
class UHierarchicalStateMachine;

UCLASS()
class HK_PROJECT_API ACatRemoteController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCatRemoteAction> m_actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_autoStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_loopSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ACatPawn* m_controlledCat;
    
private:
    UPROPERTY(Transient)
    UHierarchicalStateMachine* m_stateMachine;
    
public:
    ACatRemoteController();
    UFUNCTION(BlueprintCallable)
    void StopSequence();
    
    UFUNCTION(BlueprintCallable)
    void StartSequence();
    
private:
    UFUNCTION()
    void _OnJumpEnd(ACatPawn* _cat);
    
    UFUNCTION()
    void _OnFollowSplineEndReached(ACatPawn* _cat);
    
};

