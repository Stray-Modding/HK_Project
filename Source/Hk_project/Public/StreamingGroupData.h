#pragma once
#include "CoreMinimal.h"
#include "StreamingGroupData.generated.h"

class UWorld;
class ALevelStreamingVolume;

USTRUCT(BlueprintType)
struct FStreamingGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> Dependencies;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> Levels;
    
    UPROPERTY(EditAnywhere)
    TArray<ALevelStreamingVolume*> Volumes;
    
    UPROPERTY(EditAnywhere)
    FName GroupName;
    
    UPROPERTY(EditAnywhere)
    bool InitiallyActive;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreDebugMode;
    
    HK_PROJECT_API FStreamingGroupData();
};

