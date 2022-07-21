#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineBaseTypes.h"
#include "InputTools.generated.h"

class APlayerController;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UInputTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputTools();
    UFUNCTION(BlueprintCallable)
    static void SetViewportIgnoreInput(bool _value);
    
    UFUNCTION(BlueprintPure)
    static bool IsShiftPressed(const APlayerController* _playerController);
    
    UFUNCTION(BlueprintPure)
    static bool IsCtrlPressed(const APlayerController* _playerController);
    
    UFUNCTION(BlueprintPure)
    static bool IsCmdPressed(const APlayerController* _playerController);
    
    UFUNCTION(BlueprintPure)
    static bool IsAltPressed(const APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    static bool InputKey(APlayerController* _playerController, FKey Key, TEnumAsByte<EInputEvent> Event);
    
    UFUNCTION(BlueprintCallable)
    static bool InputAxis(APlayerController* _playerController, FKey Key, float Delta, float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    static float GetTimeDown(const APlayerController* _playerController, FKey InKey);
    
};

