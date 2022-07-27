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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCatUsableComponentBase* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInteractionFeedback* Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* VisibilityOccluder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* InteractionOccluder;
    
    HK_PROJECT_API FInteractionData();
};

