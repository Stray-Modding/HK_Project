#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ToyoJointMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOYOTOOLRUNTIME_API UToyoJointMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MeshIndex;
    
    UToyoJointMeshComponent();
};

