#pragma once
#include "CoreMinimal.h"
#include "StreamingGroup.h"
#include "StreamingGroupDynamic.generated.h"

class UStreamingUnit;

UCLASS()
class UStreamingGroupDynamic : public UStreamingGroup {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UStreamingUnit*> m_streamingUnits;
    
public:
    UStreamingGroupDynamic();
};

