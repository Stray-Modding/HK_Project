#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ZurgCharacterMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UZurgCharacterMovementComponent();
};

