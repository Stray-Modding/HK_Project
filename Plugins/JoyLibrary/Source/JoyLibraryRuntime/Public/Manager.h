#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Manager.generated.h"

UCLASS(Abstract, Blueprintable)
class JOYLIBRARYRUNTIME_API AManager : public AActor {
    GENERATED_BODY()
public:
    AManager();
};

