#pragma once
#include "CoreMinimal.h"
#include "EJoyGraphicsFullScreen.generated.h"

UENUM(BlueprintType)
namespace EJoyGraphicsFullScreen {
    enum Type {
        FullScreen,
        WindowedFullScreen,
        WindowedFullScreenPerformance,
        EJoyGraphicsFullScreen_Max,
    };
}

