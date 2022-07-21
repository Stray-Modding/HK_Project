#pragma once
#include "CoreMinimal.h"
#include "LevelPointer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelPointerFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API ULevelPointerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelPointerFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static FString GetLevelName(const FLevelPointer& _levelPointer);
    
};

