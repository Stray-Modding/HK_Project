#pragma once
#include "CoreMinimal.h"
#include "DebugProfile.h"
#include "UObject/Object.h"
#include "DebugProfileObject.generated.h"

UCLASS()
class HK_PROJECT_API UDebugProfileObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDebugProfileEnabled;
    
    UPROPERTY(EditAnywhere)
    FDebugProfile DebugProfile;
    
    UPROPERTY()
    FString MapName;
    
    UDebugProfileObject();
};

