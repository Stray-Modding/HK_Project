#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HKAnimInstance.h"
#include "JumpBlock.h"
#include "JumpData.h"
#include "ECatBendInputMode.h"
#include "CatAnimInstance.generated.h"

class UJumpAnimationLibrary;
class UAnimNotify;
class UAnimSequence;

UCLASS(NonTransient)
class HK_PROJECT_API UCatAnimInstance : public UHKAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UJumpAnimationLibrary* m_jumpAnimationLibrary;
    
    UPROPERTY(EditAnywhere)
    bool m_logAnimationErrors;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimNotify> m_enablePlayerControlNotifyClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimNotify> m_jumpExitNotifyClass;
    
    UPROPERTY(EditAnywhere)
    float m_maxSlopeCorrectionAngle;
    
public:
    UCatAnimInstance();
    UFUNCTION(BlueprintImplementableEvent)
    void SetupAnimationBanks();
    
    UFUNCTION(BlueprintCallable)
    void PushBendInputMode(FName _id, TEnumAsByte<ECatBendInputMode> _mode);
    
    UFUNCTION(BlueprintCallable)
    void PushBendDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopBendInputMode(FName _id);
    
    UFUNCTION(BlueprintCallable)
    void PopBendDisabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleport();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpExit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitJump(const FJumpData& _jumpData);
    
    UFUNCTION(BlueprintCallable)
    void OnEnablePlayerControl();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginInterpolate(UAnimSequence* _interpolateAnimation);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsInterpolating();
    
    UFUNCTION(BlueprintPure)
    bool IsBendDisabled() const;
    
    UFUNCTION(BlueprintPure)
    FJumpBlock GetCurrentJumpBlock() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECatBendInputMode> GetBendInputMode() const;
    
    UFUNCTION(BlueprintPure)
    FJumpBlock FindRelevantJumpBlock(float _jumpLength, float _jumpHeight, const TArray<FJumpBlock>& _jumpBlocks) const;
    
    UFUNCTION(BlueprintPure)
    bool FindJumpBlockBySpeed(float _speed, float _jumpLength, float _jumpHeight, FJumpBlock& _outJumpBlock) const;
    
    UFUNCTION(BlueprintPure)
    bool FindJumpBlockByName(FName _speedName, float _jumpLength, float _jumpHeight, FJumpBlock& _outJumpBlock) const;
    
};

