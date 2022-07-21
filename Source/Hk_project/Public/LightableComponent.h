#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LightableComponent.generated.h"

class ULightableComponent;
class UAntiZurgSpotlightComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API ULightableComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLightableDelegate, ULightableComponent*, _lightableComponent, UAntiZurgSpotlightComponent*, _spotlightComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightableDelegate OnEnlightenBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightableDelegate OnEnlightenEnd;
    
    ULightableComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsEnlighten(bool& _enlighten, float& _lightingRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetOwnerSceneComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAntiZurgSpotlightComponent*> GetLights() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnlightenEnd(UAntiZurgSpotlightComponent* _spotlight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnlightenBegin(UAntiZurgSpotlightComponent* _spotlight);
    
};

