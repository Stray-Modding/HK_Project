#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "AntiZurgZoneComponent.generated.h"

class UNavAreaBase;
class UAntiZurgSpotlightComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAntiZurgZoneComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavAreaBase> m_navArea;
    
public:
    UAntiZurgZoneComponent();
    UFUNCTION(BlueprintCallable)
    void SetSpotlightOwner(UAntiZurgSpotlightComponent* _newSpotlight);
    
    UFUNCTION(BlueprintPure)
    UAntiZurgSpotlightComponent* GetSpotLightOwner() const;
    
protected:
    UFUNCTION()
    void _OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

