#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UObject/NoExportTypes.h"
#include "CatBend2.generated.h"

UCLASS()
class HK_PROJECT_API ACatBend2 : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_boneRotationSmoothTime;
    
    UPROPERTY(EditAnywhere)
    bool m_isRelaxEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 m_relaxIterationCount;
    
    UPROPERTY(EditAnywhere)
    float m_relaxCenterWeight;
    
    UPROPERTY(EditAnywhere)
    float m_relaxSideWeight;
    
public:
    ACatBend2();
    UFUNCTION(BlueprintCallable)
    void ProcessSpine();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsDebugEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetSpineBoneRotation(int32 _boneIndex) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FName> GetSpineBoneChain() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BugTrigger();
    
};

