#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HKGameSubsystem.generated.h"

class UHKSubsystemSettings;

UCLASS(Abstract, Blueprintable)
class HK_PROJECT_API UHKGameSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKSubsystemSettings* m_settings;
    
public:
    UHKGameSubsystem();
};

