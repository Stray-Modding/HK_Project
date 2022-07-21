#pragma once
#include "CoreMinimal.h"
#include "EPDGWorkResultState.h"
#include "OutputActorOwner.h"
#include "TOPWorkResultObject.generated.h"

class UHoudiniOutput;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FTOPWorkResultObject {
    GENERATED_BODY()
public:
    UPROPERTY(NonTransactional)
    FString Name;
    
    UPROPERTY(NonTransactional)
    FString FilePath;
    
    UPROPERTY(NonTransactional)
    EPDGWorkResultState State;
    
    UPROPERTY(NonTransactional)
    int32 WorkItemResultInfoIndex;
    
protected:
    UPROPERTY(NonTransactional)
    TArray<UHoudiniOutput*> ResultOutputs;
    
    UPROPERTY(NonTransactional)
    bool bAutoBakedSinceLastLoad;
    
private:
    UPROPERTY(NonTransactional)
    FOutputActorOwner OutputActorOwner;
    
public:
    FTOPWorkResultObject();
};

