#pragma once
#include "CoreMinimal.h"
#include "ZurgSocket.generated.h"

class AZurgPawnSlave;

USTRUCT(BlueprintType)
struct FZurgSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZurgPawnSlave* Zurg;
    
    HK_PROJECT_API FZurgSocket();
};

