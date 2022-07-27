#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "LookAtInterface.generated.h"

UINTERFACE(Blueprintable)
class HK_PROJECT_API ULookAtInterface : public UInterface {
    GENERATED_BODY()
};

class HK_PROJECT_API ILookAtInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetLookAtOffset() const;
    
};

