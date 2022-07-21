#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "GameplayNoise.h"
#include "NoiseEvent.h"
#include "GameAudioSubsystem.generated.h"

class UNoisableComponent;
class AActor;

UCLASS(Blueprintable)
class HK_PROJECT_API UGameAudioSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UNoisableComponent*> m_noisableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayNoise> m_gameplayNoiseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNoiseEvent> m_noiseEventQueue;
    
public:
    UGameAudioSubsystem();
    UFUNCTION(BlueprintCallable)
    void EmitGameplayNoise(AActor* _emitter, float _targetRadius, float _growTime, float _sustainTime);
    
};

