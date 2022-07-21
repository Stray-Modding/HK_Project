#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "DiskOperation.h"
#include "DiskSubsystem.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UDiskSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiskOperation> m_diskOperations;
    
public:
    UDiskSubsystem();
};

