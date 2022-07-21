#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "LoadingScreenSubsystem.generated.h"

class UAudioComponent;

UCLASS(BlueprintType)
class HK_PROJECT_API ULoadingScreenSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UAudioComponent* m_loadingAudio;
    
public:
    ULoadingScreenSubsystem();
    UFUNCTION(BlueprintPure)
    bool IsLoadingScreenOn() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreen();
    
};

