#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SplineRailConnection.generated.h"

class USplineRailComponent;
class USphereComponent;

UCLASS(Blueprintable)
class USplineRailConnection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineRailComponent* Rail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Collider;
    
    USplineRailConnection();
};

