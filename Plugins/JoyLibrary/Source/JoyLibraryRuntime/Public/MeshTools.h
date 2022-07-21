#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MeshTools.generated.h"

class USkeleton;
class USkeletalMesh;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UMeshTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeshTools();
    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeSkeletalMeshes(USkeleton* _skeleton, const TArray<USkeletalMesh*>& _skeletalMeshes);
    
};

