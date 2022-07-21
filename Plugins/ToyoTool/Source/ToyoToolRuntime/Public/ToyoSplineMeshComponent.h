#pragma once
#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "ToyoSplineMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOYOTOOLRUNTIME_API UToyoSplineMeshComponent : public USplineMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MeshIndex;
    
    UToyoSplineMeshComponent();
};

