#pragma once
#include "CoreMinimal.h"
#include "ZurgSocket.generated.h"

class AZurgPawnSlave;

USTRUCT(BlueprintType)
struct FZurgSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite)
    AZurgPawnSlave* Zurg;
    
    HK_PROJECT_API FZurgSocket();
};

