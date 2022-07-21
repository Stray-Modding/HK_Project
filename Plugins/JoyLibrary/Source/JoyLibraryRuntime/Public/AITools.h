#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AITools.generated.h"

class AAIController;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UAITools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAITools();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetActiveBehaviorTreeTaskName(AAIController* _aiController);
    
};

