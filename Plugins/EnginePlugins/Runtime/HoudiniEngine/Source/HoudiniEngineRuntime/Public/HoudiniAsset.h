#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniAsset.generated.h"

UCLASS(EditInlineNew)
class HOUDINIENGINERUNTIME_API UHoudiniAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString AssetFileName;
    
private:
    UPROPERTY()
    TArray<uint8> AssetBytes;
    
    UPROPERTY()
    uint32 AssetBytesCount;
    
    UPROPERTY()
    bool bAssetLimitedCommercial;
    
    UPROPERTY()
    bool bAssetNonCommercial;
    
    UPROPERTY()
    bool bAssetExpanded;
    
public:
    UHoudiniAsset();
};

