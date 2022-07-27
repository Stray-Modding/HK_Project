#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "CatBend2.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API ACatBend2 : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_boneRotationSmoothTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isRelaxEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_relaxIterationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_relaxCenterWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_relaxSideWeight;
    
public:
    ACatBend2();
    UFUNCTION(BlueprintCallable)
    void ProcessSpine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDebugEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetSpineBoneRotation(int32 _boneIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FName> GetSpineBoneChain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BugTrigger();
    
};

