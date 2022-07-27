#pragma once
#include "CoreMinimal.h"
#include "B12MemoryData.h"
#include "Engine/DataAsset.h"
#include "B12Memories.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UB12Memories : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FB12MemoryData> MainMemories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FB12MemoryData> Memories;
    
    UB12Memories();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemoryCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindMemoryIndex(FName _memoryId, int32& _outMainIndex, int32& _outSideIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindMemoryData(FName _memoryId, FB12MemoryData& _outMemoryData) const;
    
};

