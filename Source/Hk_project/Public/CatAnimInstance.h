#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HKAnimInstance.h"
#include "JumpData.h"
#include "ECatBendInputMode.h"
#include "JumpBlock.h"
#include "CatAnimInstance.generated.h"

class UJumpAnimationLibrary;
class UAnimNotify;
class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class HK_PROJECT_API UCatAnimInstance : public UHKAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJumpAnimationLibrary* m_jumpAnimationLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_logAnimationErrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimNotify> m_enablePlayerControlNotifyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimNotify> m_jumpExitNotifyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxSlopeCorrectionAngle;
    
public:
    UCatAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAnimationBanks();
    
    UFUNCTION(BlueprintCallable)
    void PushBendInputMode(FName _id, TEnumAsByte<ECatBendInputMode> _mode);
    
    UFUNCTION(BlueprintCallable)
    void PushBendDisabled();
    
    UFUNCTION(BlueprintCallable)
    void PopBendInputMode(FName _id);
    
    UFUNCTION(BlueprintCallable)
    void PopBendDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleport();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitJump(const FJumpData& _jumpData);
    
    UFUNCTION(BlueprintCallable)
    void OnEnablePlayerControl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginInterpolate(UAnimSequence* _interpolateAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInterpolating();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBendDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FJumpBlock GetCurrentJumpBlock() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECatBendInputMode> GetBendInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FJumpBlock FindRelevantJumpBlock(float _jumpLength, float _jumpHeight, const TArray<FJumpBlock>& _jumpBlocks) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindJumpBlockBySpeed(float _speed, float _jumpLength, float _jumpHeight, FJumpBlock& _outJumpBlock) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindJumpBlockByName(FName _speedName, float _jumpLength, float _jumpHeight, FJumpBlock& _outJumpBlock) const;
    
};

