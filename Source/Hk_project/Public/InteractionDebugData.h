#pragma once
#include "CoreMinimal.h"
#include "InteractionDebugData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FInteractionDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RaycastFailReason;
    
    HK_PROJECT_API FInteractionDebugData();
};

