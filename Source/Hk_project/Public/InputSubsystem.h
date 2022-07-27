#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "InputCoreTypes.h"
#include "EGameControllerType.h"
#include "InputSubsystem.generated.h"

class UInputComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API UInputSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnControllerTypeChangedEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerTypeChangedEvent OnControllerTypeChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInputComponent* m_inputComponent;
    
public:
    UInputSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameControllerType GetGameControllerType(bool _forceGamepad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKey> GetBindingKeys(const FName& _name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetBindingKey(const FName& _name) const;
    
};

