#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "Hideout.generated.h"

UCLASS()
class HK_PROJECT_API AHideout : public AActor {
    GENERATED_BODY()
public:
    AHideout();
    UFUNCTION(BlueprintCallable)
    void SetClosed(bool _value);
    
    UFUNCTION(BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAvailableForHiding() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetHiddenLocation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetHiddenActor() const;
    
};

