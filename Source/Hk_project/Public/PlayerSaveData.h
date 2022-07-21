#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlayerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform PlayerTransform;
    
    UPROPERTY()
    FRotator CameraRelativeRotation;
    
    UPROPERTY()
    bool HasBackpack;
    
    UPROPERTY()
    TArray<uint8> BackpackData;
    
    UPROPERTY()
    TArray<uint8> DroneData;
    
    HK_PROJECT_API FPlayerSaveData();
};

