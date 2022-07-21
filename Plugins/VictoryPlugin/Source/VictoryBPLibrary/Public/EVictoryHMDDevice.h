#pragma once
#include "CoreMinimal.h"
#include "EVictoryHMDDevice.generated.h"

UENUM(BlueprintType)
enum class EVictoryHMDDevice : uint8 {
    None,
    OculusRift,
    Morpheus,
    ES2GenericStereoMesh,
    SteamVR,
    GearVR,
};

