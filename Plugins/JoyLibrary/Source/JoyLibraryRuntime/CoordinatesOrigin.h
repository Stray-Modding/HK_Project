#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum ECoordinatesOrigin
{
	CoordinatesOrigin_TopLeft		UMETA(DisplayName = "TopLeft"),
	CoordinatesOrigin_Top			UMETA(DisplayName = "Top"),
	CoordinatesOrigin_TopRight		UMETA(DisplayName = "TopRight"),
	CoordinatesOrigin_Right			UMETA(DisplayName = "Right"),
	CoordinatesOrigin_BottomRight	UMETA(DisplayName = "BottomRight"),
	CoordinatesOrigin_Bottom		UMETA(DisplayName = "Bottom"),
	CoordinatesOrigin_BottomLeft	UMETA(DisplayName = "BottomLeft"),
	CoordinatesOrigin_Left			UMETA(DisplayName = "Left"),
};
