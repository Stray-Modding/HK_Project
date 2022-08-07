#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "FurSplines.generated.h"

UCLASS(Blueprintable)
class GFUR_API UFurSplines : public UObject {
    GENERATED_UCLASS_BODY()
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
    
    int32 SplineCount() const { return Vertices.Num() / ControlPointCount; }
    FVector GetFirstControlPoint(int32 SplineIndex) const { return Vertices[SplineIndex * ControlPointCount]; }
    FVector GetLastControlPoint(int32 SplineIndex) const { return Vertices[SplineIndex * ControlPointCount + ControlPointCount - 1]; }

    void UpdateSplines();

private:
    void ConvertToUniformControlPointCount(int32 NumControlPoints);
};

