#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "FurSplines.generated.h"

UCLASS()
class GFUR_API UFurSplines : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<int32> Index;
    
    UPROPERTY()
    TArray<int32> Count;
    
    UPROPERTY()
    int32 ControlPointCount;
    
    UPROPERTY()
    FString ImportFilename;
    
    UPROPERTY()
    int32 Version;
    
    UPROPERTY()
    int32 ImportTransformation;
    
    UPROPERTY()
    float Threshold;
    
    UFurSplines();
};

