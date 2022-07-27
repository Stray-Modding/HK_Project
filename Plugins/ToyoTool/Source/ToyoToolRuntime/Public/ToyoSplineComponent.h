#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "ToyoSplinePointData.h"
#include "ToyoSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOYOTOOLRUNTIME_API UToyoSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FToyoSplinePointData> ToyoSplinePointsData;
    
    UToyoSplineComponent();
};

