#pragma once
#include "CoreMinimal.h"
#include "DroidTick.generated.h"

class ACharacterDroid;

USTRUCT(BlueprintType)
struct FDroidTick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacterDroid* Droid;
    
    HK_PROJECT_API FDroidTick();
};

