#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StreamingGroup.generated.h"

class UStreamingComponent;

UCLASS(Abstract, Blueprintable)
class UStreamingGroup : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStreamingComponent*> m_streamingComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStreamingComponent*> m_pendingRegisterComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStreamingComponent*> m_pendingUnregisterComponents;
    
public:
    UStreamingGroup();
};

