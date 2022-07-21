#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MeshTools.generated.h"

class USkeletalMesh;
class USkeleton;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UMeshTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeshTools();
    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeSkeletalMeshes(USkeleton* _skeleton, const TArray<USkeletalMesh*>& _skeletalMeshes);
    
};

