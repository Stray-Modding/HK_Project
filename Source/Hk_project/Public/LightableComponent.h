#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LightableComponent.generated.h"

class UAntiZurgSpotlightComponent;
class ULightableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API ULightableComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLightableDelegate, ULightableComponent*, _lightableComponent, UAntiZurgSpotlightComponent*, _spotlightComponent);
    
    UPROPERTY(BlueprintAssignable)
    FLightableDelegate OnEnlightenBegin;
    
    UPROPERTY(BlueprintAssignable)
    FLightableDelegate OnEnlightenEnd;
    
    ULightableComponent();
    UFUNCTION(BlueprintPure)
    void IsEnlighten(bool& _enlighten, float& _lightingRatio);
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetOwnerSceneComponent();
    
    UFUNCTION(BlueprintPure)
    TArray<UAntiZurgSpotlightComponent*> GetLights() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void EnlightenEnd(UAntiZurgSpotlightComponent* _spotlight);
    
    UFUNCTION(BlueprintNativeEvent)
    void EnlightenBegin(UAntiZurgSpotlightComponent* _spotlight);
    
};

