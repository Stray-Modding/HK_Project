#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StreamingUnit.generated.h"

class UStreamingGroupDynamic;
class ULevelStreaming;

UCLASS(Blueprintable)
class UStreamingUnit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStreamingGroupDynamic* m_streamingGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* m_levelStreaming;
    
public:
    UStreamingUnit();
private:
    UFUNCTION(BlueprintCallable)
    void _OnLevelStreamingUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void _OnLevelStreamingLoaded();
    
};

