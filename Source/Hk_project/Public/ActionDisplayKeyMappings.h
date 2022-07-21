#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "ActionDisplayKeyMappings.generated.h"

USTRUCT(BlueprintType)
struct FActionDisplayKeyMappings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> KeyMappings;
    
    HK_PROJECT_API FActionDisplayKeyMappings();
};

