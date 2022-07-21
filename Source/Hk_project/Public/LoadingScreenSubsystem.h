#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "LoadingScreenSubsystem.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API ULoadingScreenSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_loadingAudio;
    
public:
    ULoadingScreenSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingScreenOn() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreen();
    
};

