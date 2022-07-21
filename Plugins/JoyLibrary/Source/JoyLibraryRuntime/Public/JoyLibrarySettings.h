#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JoyLibrarySettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class JOYLIBRARYRUNTIME_API UJoyLibrarySettings : public UObject {
    GENERATED_BODY()
public:
    UJoyLibrarySettings();
};

