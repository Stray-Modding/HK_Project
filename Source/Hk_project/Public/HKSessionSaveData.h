#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HKSessionSaveData.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKSessionSaveData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    bool IsInSentinelPattern;
    
    UPROPERTY(SaveGame)
    bool IsInZurgPursuit;
    
public:
    UHKSessionSaveData();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString BlueprintToString() const;
    
};

