#pragma once
#include "CoreMinimal.h"
#include "EInteractionFeedbackState.generated.h"

UENUM(BlueprintType)
enum EInteractionFeedbackState {
    InteractionFeedbackState_Ignored,
    InteractionFeedbackState_Visible,
    InteractionFeedbackState_Interactable,
    InteractionFeedbackState_Disabled,
    InteractionFeedbackState_MAX UMETA(Hidden),
};

