#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HKSessionSaveData.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKSessionSaveData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsInSentinelPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsInZurgPursuit;
    
public:
    UHKSessionSaveData();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString BlueprintToString() const;
    
};

