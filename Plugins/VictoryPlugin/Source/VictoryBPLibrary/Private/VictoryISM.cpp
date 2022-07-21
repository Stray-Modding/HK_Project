#include "VictoryISM.h"
#include "Components/InstancedStaticMeshComponent.h"

AVictoryISM::AVictoryISM() {
    this->Mesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("VictoryInstancedMesh"));
}

