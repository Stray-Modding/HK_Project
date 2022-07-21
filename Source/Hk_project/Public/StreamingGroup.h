#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StreamingGroup.generated.h"

class UStreamingComponent;

UCLASS(Abstract)
class UStreamingGroup : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UStreamingComponent*> m_streamingComponents;
    
    UPROPERTY(Instanced)
    TArray<UStreamingComponent*> m_pendingRegisterComponents;
    
    UPROPERTY(Instanced)
    TArray<UStreamingComponent*> m_pendingUnregisterComponents;
    
public:
    UStreamingGroup();
};

