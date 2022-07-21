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

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UCatMoveToUsableComponent : public UCatUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatUsableComponentBase::FCatUsableDelegate AfterMoveUseStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_alignWithTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPrecise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_stickToBeginRailOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_moveToMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ignoreTargetForMovement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* m_moveToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetMoveToTarget(FName& _outTargetSocket) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLastMoveToTarget() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnFollowSplineEndReached(ACatPawn* _cat);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnAfterMoveUseStarted(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool _IsMoveToFinished() const;
    
};

