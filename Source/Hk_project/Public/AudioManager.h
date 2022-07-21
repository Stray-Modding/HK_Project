#pragma once
#include "CoreMinimal.h"
#include "Manager.h"
#include "AudioManager.generated.h"

UCLASS(Abstract)
class HK_PROJECT_API AAudioManager : public AManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_maxAudioHolderTicksPerFrame;
    
    AAudioManager();
};

