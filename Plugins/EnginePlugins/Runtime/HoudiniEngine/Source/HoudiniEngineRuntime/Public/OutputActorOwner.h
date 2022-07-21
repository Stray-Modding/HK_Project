#pragma once
#include "CoreMinimal.h"
#include "OutputActorOwner.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FOutputActorOwner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(NonTransactional)
    AActor* OutputActor;
    
public:
    FOutputActorOwner();
};

