#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraThirdPersonPreset.h"
#include "CameraThirdPersonModifier.generated.h"

class ACameraThirdPerson;

UCLASS()
class HK_PROJECT_API ACameraThirdPersonModifier : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraThirdPersonPreset m_cameraPreset;
    
    UPROPERTY(EditAnywhere)
    bool m_enabled;
    
    UPROPERTY(EditAnywhere)
    float m_priority;
    
private:
    UPROPERTY()
    ACameraThirdPerson* m_camera;
    
public:
    ACameraThirdPersonModifier();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enabled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEnabled();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDisabled();
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled();
    
};

