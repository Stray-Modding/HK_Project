#pragma once
#include "CoreMinimal.h"
#include "EChapter.generated.h"

UENUM(BlueprintType)
enum class EChapter : uint8 {
    Chapter_Unknown,
    Chapter_InsideTheWall,
    Chapter_DeadCity,
    Chapter_B12Flat,
    Chapter_SlumsPart1,
    Chapter_Rooftops,
    Chapter_SlumsPart2,
    Chapter_DeadEnd,
    Chapter_Sewers,
    Chapter_AntVillage,
    Chapter_Midtown,
    Chapter_Jail,
    Chapter_ControlRoom,
    Chapter_Count,
    Chapter_MAX UMETA(Hidden),
};

