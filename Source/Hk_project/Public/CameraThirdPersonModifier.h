#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraThirdPersonPreset.h"
#include "CameraThirdPersonModifier.generated.h"

class ACameraThirdPerson;

UCLASS(Blueprintable)
class HK_PROJECT_API ACameraThirdPersonModifier : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraThirdPersonPreset m_cameraPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_priority;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraThirdPerson* m_camera;
    
public:
    ACameraThirdPersonModifier();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled();
    
};

