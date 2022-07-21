#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StreamingUnit.generated.h"

class UStreamingGroupDynamic;
class ULevelStreaming;

UCLASS()
class UStreamingUnit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UStreamingGroupDynamic* m_streamingGroup;
    
    UPROPERTY()
    ULevelStreaming* m_levelStreaming;
    
public:
    UStreamingUnit();
private:
    UFUNCTION()
    void _OnLevelStreamingUnloaded();
    
    UFUNCTION()
    void _OnLevelStreamingLoaded();
    
};

