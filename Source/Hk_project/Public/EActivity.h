#pragma once
#include "CoreMinimal.h"
#include "EActivity.generated.h"

UENUM(BlueprintType)
enum class EActivity : uint8 {
    None,
    ACT_InsideTheWall,
    ACT_DeadCity,
    ACT_B12Flat,
    ACT_SlumsP1,
    ACT_Rooftops,
    ACT_SlumsP2,
    ACT_DeadEnd,
    ACT_Sewers,
    ACT_AntVillage,
    ACT_Midtown,
    ACT_Jail,
    ACT_ControlRoom,
    Activity_Count,
};

