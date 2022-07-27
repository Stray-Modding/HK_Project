#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "AntiZurgZoneComponent.generated.h"

class AActor;
class UNavAreaBase;
class UPrimitiveComponent;
class UAntiZurgSpotlightComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAntiZurgZoneComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> m_navArea;
    
public:
    UAntiZurgZoneComponent();
    UFUNCTION(BlueprintCallable)
    void SetSpotlightOwner(UAntiZurgSpotlightComponent* _newSpotlight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAntiZurgSpotlightComponent* GetSpotLightOwner() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void _OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

