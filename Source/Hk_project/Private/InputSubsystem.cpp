#include "InputSubsystem.h"

EGameControllerType UInputSubsystem::GetGameControllerType(bool _forceGamepad) const {
    return EGameControllerType::GameControllerType_Unknown;
}

TArray<FKey> UInputSubsystem::GetBindingKeys(const FName& _name) const {
    return TArray<FKey>();
}

FKey UInputSubsystem::GetBindingKey(const FName& _name) const {
    return FKey{};
}

UInputSubsystem::UInputSubsystem() {
    this->m_inputComponent = NULL;
}

