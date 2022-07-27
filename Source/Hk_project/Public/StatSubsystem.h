#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "EStatEvent.h"
#include "StatSubsystem.generated.h"

class UHKSaveInstance;

UCLASS(Blueprintable)
class HK_PROJECT_API UStatSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
    UStatSubsystem();
    UFUNCTION(BlueprintCallable)
    void ResetCount(EStatEvent _id);
    
    UFUNCTION(BlueprintCallable)
    void OnEvent(EStatEvent _id, int32 _increment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeltaMilliseconds() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnGameSaved(UHKSaveInstance* _saveInstance);
    
    UFUNCTION(BlueprintCallable)
    void _OnGameLoaded(UHKSaveInstance* _saveInstance);
    
};

