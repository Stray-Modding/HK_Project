#pragma once
#include "CoreMinimal.h"
#include "JoyLibraryRuntime/Manager.h"
#include "AudioManager.generated.h"

UCLASS(Abstract, Blueprintable)
class HK_PROJECT_API AAudioManager : public AManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxAudioHolderTicksPerFrame;
    
    AAudioManager();
};

