#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CueBank.generated.h"

class USoundCue;

UCLASS(Blueprintable)
class HK_PROJECT_API UCueBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundCue*> SoundCues;
    
    UCueBank();
};

