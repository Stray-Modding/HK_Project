#pragma once
#include "CoreMinimal.h"
#include "Manager.h"
#include "DroidTick.h"
#include "DroidManager.generated.h"

class ACharacterDroid;

UCLASS(Blueprintable)
class HK_PROJECT_API ADroidManager : public AManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxDroidTicksPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_droidSignificanceDistanceThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacterDroid*> m_droids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDroidTick> m_droidTickList;
    
public:
    ADroidManager();
};

