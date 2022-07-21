#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LevelStreamInstanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FLevelStreamInstanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite)
    FName PackageNameToLoad;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShouldBeLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShouldBeVisible: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShouldBlockOnLoad: 1;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LODIndex;
    
    VICTORYBPLIBRARY_API FLevelStreamInstanceInfo();
};

