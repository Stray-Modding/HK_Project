#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VictoryISM.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class AVictoryISM : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* Mesh;
    
    AVictoryISM();
};

