#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActivableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UActivableInterface : public UInterface {
    GENERATED_BODY()
};

class IActivableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsActive() const;
    
};

