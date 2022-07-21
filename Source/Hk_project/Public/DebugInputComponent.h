#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugInputComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UDebugInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadDPadDownPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadDPadDownReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadDPadLeftPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadDPadLeftReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadDPadRightPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadDPadRightReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadDPadUpPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadDPadUpReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadLeftShoulderPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadLeftShoulderReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadRightShoulderPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadRightShoulderReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadLeftTriggerPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadLeftTriggerReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadRightTriggerPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadRightTriggerReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadLeftThumbstickPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadLeftThumbstickReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadRightThumbstickPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadRightThumbstickReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputAxisDelegate GamepadLeftStickXAxis;
    
    UPROPERTY(BlueprintAssignable)
    FInputAxisDelegate GamepadLeftStickYAxis;
    
    UPROPERTY(BlueprintAssignable)
    FInputAxisDelegate GamepadRightStickXAxis;
    
    UPROPERTY(BlueprintAssignable)
    FInputAxisDelegate GamepadRightStickYAxis;
    
    UPROPERTY(BlueprintAssignable)
    FInputAxisDelegate GamepadLeftTriggerAxis;
    
    UPROPERTY(BlueprintAssignable)
    FInputAxisDelegate GamepadRightTriggerAxis;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadSpecialLeftPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadSpecialLeftReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadSpecialRightPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadSpecialRightReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadFaceButtonBottomPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadFaceButtonBottomReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadFaceButtonLeftPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadFaceButtonLeftReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadFaceButtonRightPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadFaceButtonRightReleased;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadFaceButtonTopPressed;
    
    UPROPERTY(BlueprintAssignable)
    FInputDelegate GamepadFaceButtonTopReleased;*/
    
    UDebugInputComponent();
};

