#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ZurgInterestPointComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgInterestPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UZurgInterestPointComponent();
};

