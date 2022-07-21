#pragma once
#include "CoreMinimal.h"
#include "CatUsableComponent.h"
#include "UObject/NoExportTypes.h"
#include "CatUsableComponentBase.h"
#include "ECatMoveToUsableState.h"
#include "CatMoveToUsableComponent.generated.h"

class ACatPawn;
class USceneComponent;
class USplineRailComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatMoveToUsableComponent : public UCatUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    UCatUsableComponentBase::FCatUsableDelegate AfterMoveUseStarted;
    
protected:
    UPROPERTY(EditAnywhere)
    bool m_alignWithTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_isPrecise;
    
    UPROPERTY(EditAnywhere)
    bool m_stickToBeginRailOnExit;
    
    UPROPERTY(EditAnywhere)
    float m_moveToMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_ignoreTargetForMovement;
    
private:
    UPROPERTY(Instanced)
    USceneComponent* m_moveToTarget;
    
    UPROPERTY(Instanced)
    USplineRailComponent* m_beginRail;
    
public:
    UCatMoveToUsableComponent();
    UFUNCTION(BlueprintCallable)
    void SetMoveToTarget(USceneComponent* _target, FName _targetSocket);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPrecise(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignWithTarget(bool _value);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECatMoveToUsableState> GetState() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetMoveToTarget(FName& _outTargetSocket) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLastMoveToTarget() const;
    
private:
    UFUNCTION()
    void _OnFollowSplineEndReached(ACatPawn* _cat);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void _OnAfterMoveUseStarted(ACatPawn* _cat);
    
    UFUNCTION(BlueprintNativeEvent)
    bool _IsMoveToFinished() const;
    
};

