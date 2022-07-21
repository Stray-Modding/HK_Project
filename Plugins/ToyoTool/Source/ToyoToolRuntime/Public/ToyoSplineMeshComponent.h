#pragma once
#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "ToyoSplineMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOYOTOOLRUNTIME_API UToyoSplineMeshComponent : public USplineMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshIndex;
    
    UToyoSplineMeshComponent();
};

