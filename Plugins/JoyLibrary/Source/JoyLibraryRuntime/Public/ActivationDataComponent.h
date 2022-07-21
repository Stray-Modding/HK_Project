#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActivationDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UActivationDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UActivationDataComponent();
};

