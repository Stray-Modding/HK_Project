#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdManager.h"
#include "HKCrowdManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class HK_PROJECT_API UHKCrowdManager : public UCrowdManager {
    GENERATED_BODY()
public:
    UHKCrowdManager();
};

