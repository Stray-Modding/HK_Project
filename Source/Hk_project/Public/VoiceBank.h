#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VoiceBank.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class HK_PROJECT_API UVoiceBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> VoiceSounds;
    
    UVoiceBank();
};

