#include "InputTools.h"

#include <Components/InputComponent.h>
#include <GameFramework/PlayerInput.h>
#include <GameFramework/PlayerController.h>
#include <Engine/Engine.h>
#include <Engine/GameViewportClient.h>

#include <Assert.h>

void RemoveActionBinding(UInputComponent* _inputComponent, const FName& _actionName)
{
	JOY_ASSERT(_inputComponent);

	bool found = false;
	for (uint16 i = 0; i < _inputComponent->GetNumActionBindings();)
	{
		FInputActionBinding binding = _inputComponent->GetActionBinding(i);
		if (binding.GetActionName() == _actionName)
		{
			found = true;
			_inputComponent->RemoveActionBinding(i);
		}
		else
		{
			++i;
		}
	}

	JOY_ASSERT_MSGF(found, TEXT("Failed to remove action binding \"%s\"."), *_actionName.ToString());
}

#if ENGINE_MINOR_VERSION >= 22
void RemoveAxisBinding(UInputComponent* _inputComponent, const FName& _axisName)
{
	JOY_ASSERT(_inputComponent);

	TArray<struct FInputAxisBinding>& axis = _inputComponent->AxisBindings;

	bool found = false;
	for (uint16 i = 0; i < axis.Num();)
	{
		FInputAxisBinding binding = axis[i];
		if (binding.AxisName == _axisName)
		{
			found = true;
			axis.RemoveAt(i);
		}
		else
		{
			++i;
		}
	}

	JOY_ASSERT_MSGF(found, TEXT("Failed to remove axis binding \"%s\"."), *_axisName.ToString());
}
#else
void RemoveAxisBinding(UInputComponent* _inputComponent, const FName& _axisName)
{
	JOY_ASSERT(_inputComponent);

#if WITH_EDITOR
	uint64 arrayOffset = 0x0000000000000120;
#else
	uint64 arrayOffset = 0x0000000000000118;
#endif

	// NOTE(Remi|2018/04/02): Just measured the offset between AxisBindings member and the base pointer to _inputComponent, but it may vary between platforms and build types
	TArray<struct FInputAxisBinding>& axis = *(TArray<struct FInputAxisBinding>*)((char*)_inputComponent + arrayOffset);

	bool found = false;
	for (uint16 i = 0; i < axis.Num();)
	{
		FInputAxisBinding binding = axis[i];
		if (binding.AxisName == _axisName)
		{
			found = true;
			axis.RemoveAt(i);
		}
		else
		{
			++i;
		}
	}

	JOY_ASSERT_MSGF(found, TEXT("Failed to remove axis binding \"%s\"."), *_axisName.ToString());
}
#endif

bool IsActionBindingPressed(APlayerController* _playerController, UInputComponent* _inputComponent, const FName& _actionName)
{
	if (!_playerController)
		return false;

	if (!_inputComponent)
		return false;

	for (uint16 i = 0; i < _inputComponent->GetNumActionBindings(); ++i)
	{
		FInputActionBinding binding = _inputComponent->GetActionBinding(i);
		if (binding.GetActionName() == _actionName)
		{
			for (const FInputActionKeyMapping& keyMapping : _playerController->PlayerInput->GetKeysForAction(binding.GetActionName()))
			{
				if (_playerController->PlayerInput->IsPressed(keyMapping.Key))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool UInputTools::InputKey(APlayerController* _playerController, FKey Key, enum EInputEvent Event)
{
	if (!_playerController)
		return false;

	return _playerController->InputKey(Key, Event, 1.f, Key.IsGamepadKey());
}

bool UInputTools::InputAxis(APlayerController* _playerController, FKey Key, float Delta, float DeltaTime)
{
	if (!_playerController)
		return false;

	return _playerController->InputAxis(Key, Delta, DeltaTime, 1, Key.IsGamepadKey());
}

void UInputTools::SetViewportIgnoreInput(bool _value)
{
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->SetIgnoreInput(_value);
	}
}

bool UInputTools::IsAltPressed(const APlayerController* _playerController)
{
	JOY_EXITCONDITION_RET(!_playerController, false, "Invalid playerController argument");

	return _playerController->PlayerInput->IsAltPressed();
}

bool UInputTools::IsCtrlPressed(const APlayerController* _playerController)
{
	JOY_EXITCONDITION_RET(!_playerController, false, "Invalid playerController argument");

	return _playerController->PlayerInput->IsCtrlPressed();
}

bool UInputTools::IsShiftPressed(const APlayerController* _playerController)
{
	JOY_EXITCONDITION_RET(!_playerController, false, "Invalid playerController argument");

	return _playerController->PlayerInput->IsShiftPressed();
}

bool UInputTools::IsCmdPressed(const APlayerController* _playerController)
{
	JOY_EXITCONDITION_RET(!_playerController, false, "Invalid playerController argument");

	return _playerController->PlayerInput->IsCmdPressed();
}

float UInputTools::GetTimeDown(const APlayerController* _playerController, FKey InKey)
{
	JOY_EXITCONDITION_RET(!_playerController, 0.f, "Invalid playerController argument");

	return _playerController->PlayerInput->GetTimeDown(InKey);
}
