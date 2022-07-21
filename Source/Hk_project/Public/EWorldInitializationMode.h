#pragma once
#include "CoreMinimal.h"
#include "EWorldInitializationMode.generated.h"

UENUM(BlueprintType)
enum EWorldInitializationMode {
    WorldInitializationMode_None,
    WorldInitializationMode_StartPlayEditor,
    WorldInitializationMode_StartPlay,
    WorldInitializationMode_SaveGameLoading,
    WorldInitializationMode_OpenZone,
    WorldInitializationMode_ZoneLoad,
    WorldInitializationMode_LoadChapter,
    WorldInitializationMode_MAX UMETA(Hidden),
};

