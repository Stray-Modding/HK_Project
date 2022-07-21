#pragma once
#include "CoreMinimal.h"
#include "EStatEvent.h"
#include "HKGameSubsystem.h"
#include "StatSubsystem.generated.h"

class UHKSaveInstance;

UCLASS(BlueprintType)
class HK_PROJECT_API UStatSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
    UStatSubsystem();
    UFUNCTION(BlueprintCallable)
    void ResetCount(EStatEvent _id);
    
    UFUNCTION(BlueprintCallable)
    void OnEvent(EStatEvent _id, int32 _increment);
    
    UFUNCTION(BlueprintPure)
    int32 GetDeltaMilliseconds() const;
    
private:
    UFUNCTION()
    void _OnGameSaved(UHKSaveInstance* _saveInstance);
    
    UFUNCTION()
    void _OnGameLoaded(UHKSaveInstance* _saveInstance);
    
};

