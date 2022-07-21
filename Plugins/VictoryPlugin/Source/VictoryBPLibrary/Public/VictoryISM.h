#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VictoryISM.generated.h"

class UInstancedStaticMeshComponent;

UCLASS()
class AVictoryISM : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInstancedStaticMeshComponent* Mesh;
    
    AVictoryISM();
};

