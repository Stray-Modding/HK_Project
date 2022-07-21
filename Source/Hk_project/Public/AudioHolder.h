#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AudioHolder.generated.h"

class UAudioComponent;
class APlayerCameraManager;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAudioHolder : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 AudioComponentCount;
    
    UPROPERTY(EditAnywhere)
    float MovementSnappingDistance;
    
private:
    UPROPERTY(Instanced)
    TArray<UAudioComponent*> m_audioComponents;
    
    UPROPERTY()
    APlayerCameraManager* m_cameraManager;
    
public:
    UAudioHolder();
    UFUNCTION(BlueprintCallable)
    void SetHolderCollisionRadius(float _radius);
    
    UFUNCTION(BlueprintCallable)
    void SetHolderCollisionEnabled(bool _enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHolderEndOverlapCamera(AActor* _otherActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHolderBeginOverlapCamera(AActor* _otherActor);
    
    UFUNCTION(BlueprintPure)
    bool IsHolderCollisionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    UAudioComponent* GetHolderAudio(uint8 _index) const;
    
};

