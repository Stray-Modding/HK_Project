#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SplineRailConnection.generated.h"

class USphereComponent;
class USplineRailComponent;

UCLASS(Blueprintable)
class USplineRailConnection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineRailComponent* Rail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* Collider;
    
    USplineRailConnection();
};

