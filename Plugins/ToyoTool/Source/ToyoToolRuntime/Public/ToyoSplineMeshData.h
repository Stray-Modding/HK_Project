#pragma once
#include "CoreMinimal.h"
#include "EToyoSplineMeshAxis.h"
#include "ToyoSplineMeshData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct TOYOTOOLRUNTIME_API FToyoSplineMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> MeshesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EToyoSplineMeshAxis ForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    FToyoSplineMeshData();
};

