#pragma once
#include "CoreMinimal.h"
#include "NoisableComponent.h"
#include "MeowableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UMeowableComponent : public UNoisableComponent {
    GENERATED_BODY()
public:
    UMeowableComponent();
};

