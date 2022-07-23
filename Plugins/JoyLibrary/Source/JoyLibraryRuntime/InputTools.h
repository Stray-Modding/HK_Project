#pragma once

class UInputComponent;
class APlayerController;

#include <CoreMinimal.h>
#include <InputCoreTypes.h>
#include <Kismet/BlueprintFunctionLibrary.h>
#include <Engine/EngineBaseTypes.h>

#include "InputTools.generated.h"

JOYLIBRARYRUNTIME_API void RemoveActionBinding(UInputComponent* _inputComponent, const FName& _actionName);
JOYLIBRARYRUNTIME_API bool IsActionBindingPressed(APlayerController* _playerController, UInputComponent* _inputComponent, const FName& _actionName);
JOYLIBRARYRUNTIME_API void RemoveAxisBinding(UInputComponent* _inputComponent, const FName& _axisName);

UCLASS()
class JOYLIBRARYRUNTIME_API UInputTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Handles a key input event.  Returns true if there is an action that handles the specified key. */
	UFUNCTION(BlueprintCallable, Category = "Joy|InputTools") static bool InputKey(APlayerController* _playerController, FKey Key, EInputEvent Event);

	/** Handles an axis input event.  Returns true if a legacy key bind handled the input, otherwise false. */
	UFUNCTION(BlueprintCallable, Category = "Joy|InputTools") static bool InputAxis(APlayerController* _playerController, FKey Key, float Delta, float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Joy|InputTools") static void SetViewportIgnoreInput(bool _value);

	/** @return true if alt key is pressed */
	UFUNCTION(BlueprintPure, Category="Joy|InputTools|PlayerInput") static bool IsAltPressed(const APlayerController* _playerController);

	/** @return true if ctrl key is pressed */
	UFUNCTION(BlueprintPure, Category = "Joy|PlayerInput") static bool IsCtrlPressed(const APlayerController* _playerController);

	/** @return true if shift key is pressed */
	UFUNCTION(BlueprintPure, Category = "Joy|PlayerInput") static bool IsShiftPressed(const APlayerController* _playerController);

	/** @return true if cmd key is pressed */
	UFUNCTION(BlueprintPure, Category = "Joy|PlayerInput") static bool IsCmdPressed(const APlayerController* _playerController);

	/** @return how long the key has been held down, or 0.f if not down. */
	UFUNCTION(BlueprintPure, Category = "Joy|PlayerInput") static float GetTimeDown(const APlayerController* _playerController, FKey InKey);
};

