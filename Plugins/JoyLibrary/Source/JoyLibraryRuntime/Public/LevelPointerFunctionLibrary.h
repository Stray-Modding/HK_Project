#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelPointer.h"
#include "LevelPointerFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API ULevelPointerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelPointerFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName(const FLevelPointer& _levelPointer);
    
};

