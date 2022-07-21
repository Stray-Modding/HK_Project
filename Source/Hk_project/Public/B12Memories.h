#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "B12MemoryData.h"
#include "B12Memories.generated.h"

UCLASS(BlueprintType)
class HK_PROJECT_API UB12Memories : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FB12MemoryData> MainMemories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FB12MemoryData> Memories;
    
    UB12Memories();
    UFUNCTION(BlueprintPure)
    int32 GetMemoryCount() const;
    
    UFUNCTION(BlueprintPure)
    void FindMemoryIndex(FName _memoryId, int32& _outMainIndex, int32& _outSideIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool FindMemoryData(FName _memoryId, FB12MemoryData& _outMemoryData) const;
    
};

