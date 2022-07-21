#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "HKCamera.generated.h"

UCLASS()
class HK_PROJECT_API AHKCamera : public AActor {
    GENERATED_BODY()
public:
    AHKCamera();
    UFUNCTION(BlueprintCallable)
    void SetCameraInput(FVector2D _input);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnCameraFocusLost(float _blendTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCameraFocus(float _blendTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCameraButtonReleased();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCameraButtonPressed();
    
    UFUNCTION(BlueprintPure)
    float GetLookSensitivity() const;
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetCollisionPosition() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCameraInput() const;
    
};

