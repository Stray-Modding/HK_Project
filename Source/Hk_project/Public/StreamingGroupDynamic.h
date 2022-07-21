#pragma once
#include "CoreMinimal.h"
#include "StreamingGroup.h"
#include "StreamingGroupDynamic.generated.h"

class UStreamingUnit;

UCLASS(Blueprintable)
class UStreamingGroupDynamic : public UStreamingGroup {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStreamingUnit*> m_streamingUnits;
    
public:
    UStreamingGroupDynamic();
};

