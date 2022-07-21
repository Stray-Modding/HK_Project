#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AudioHolder.generated.h"

class APlayerCameraManager;
class UAudioComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAudioHolder : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudioComponentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSnappingDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> m_audioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* m_cameraManager;
    
public:
    UAudioHolder();
    UFUNCTION(BlueprintCallable)
    void SetHolderCollisionRadius(float _radius);
    
    UFUNCTION(BlueprintCallable)
    void SetHolderCollisionEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHolderEndOverlapCamera(AActor* _otherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHolderBeginOverlapCamera(AActor* _otherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHolderCollisionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    UAudioComponent* GetHolderAudio(uint8 _index) const;
    
};

