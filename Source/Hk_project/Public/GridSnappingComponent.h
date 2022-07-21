#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GridSnappingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UGridSnappingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float GridSize;
    
    UGridSnappingComponent();
};

