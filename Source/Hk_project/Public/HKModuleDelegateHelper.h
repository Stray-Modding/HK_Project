#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HKModuleDelegateHelper.generated.h"

class ANavigationData;

UCLASS(Transient)
class HK_PROJECT_API UHKModuleDelegateHelper : public UObject {
    GENERATED_BODY()
public:
    UHKModuleDelegateHelper();
    UFUNCTION()
    void _OnNavDataRegisteredEvent(ANavigationData* NavData);
    
};

