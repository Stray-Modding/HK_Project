#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SplineRailConnection.generated.h"

class USplineRailComponent;
class USphereComponent;

UCLASS()
class USplineRailConnection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USplineRailComponent* Rail;
    
    UPROPERTY(Instanced)
    USphereComponent* Collider;
    
    USplineRailConnection();
};

