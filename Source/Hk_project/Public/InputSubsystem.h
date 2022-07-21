#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "EGameControllerType.h"
#include "InputCoreTypes.h"
#include "InputSubsystem.generated.h"

class UInputComponent;

UCLASS(BlueprintType)
class HK_PROJECT_API UInputSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnControllerTypeChangedEvent);
    
    UPROPERTY(BlueprintAssignable)
    FOnControllerTypeChangedEvent OnControllerTypeChanged;
    
private:
    UPROPERTY(Instanced)
    UInputComponent* m_inputComponent;
    
public:
    UInputSubsystem();
    UFUNCTION(BlueprintPure)
    EGameControllerType GetGameControllerType(bool _forceGamepad) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FKey> GetBindingKeys(const FName& _name) const;
    
    UFUNCTION(BlueprintPure)
    FKey GetBindingKey(const FName& _name) const;
    
};

