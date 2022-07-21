#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "AntiZurgLightableComponent.generated.h"

class AZurgManager;
class ULifeComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAntiZurgLightableComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AZurgManager* m_zurgManager;
    
    UPROPERTY(Instanced)
    ULifeComponent* m_ownerLifeComponent;
    
public:
    UAntiZurgLightableComponent();
};

