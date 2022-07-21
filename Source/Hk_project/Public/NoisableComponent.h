#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "NoisableComponent.generated.h"

class UNoisableComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UNoisableComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNoiseDelegate, UNoisableComponent*, _noisableComponent, FVector, _location, AActor*, _emitter);
    
    UPROPERTY(BlueprintAssignable)
    FNoiseDelegate OnNoised;
    
    UNoisableComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enable);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool OnNoise(FVector _location, AActor* _emitter);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

