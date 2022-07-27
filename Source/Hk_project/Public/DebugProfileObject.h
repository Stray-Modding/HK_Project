#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugProfile.h"
#include "DebugProfileObject.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UDebugProfileObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugProfileEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugProfile DebugProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UDebugProfileObject();
};

