#pragma once
#include "CoreMinimal.h"
#include "InteractionData.generated.h"

class UCatUsableComponentBase;
class AInteractionFeedback;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UCatUsableComponentBase* Usable;
    
    UPROPERTY()
    AInteractionFeedback* Feedback;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* VisibilityOccluder;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* InteractionOccluder;
    
    HK_PROJECT_API FInteractionData();
};

