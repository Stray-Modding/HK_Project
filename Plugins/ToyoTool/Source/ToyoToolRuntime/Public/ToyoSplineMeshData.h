#pragma once
#include "CoreMinimal.h"
#include "EToyoSplineMeshAxis.h"
#include "ToyoSplineMeshData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct TOYOTOOLRUNTIME_API FToyoSplineMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UStaticMesh*> MeshesList;
    
    UPROPERTY(EditAnywhere)
    EToyoSplineMeshAxis ForwardAxis;
    
    UPROPERTY()
    bool bIsBig;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    FToyoSplineMeshData();
};

