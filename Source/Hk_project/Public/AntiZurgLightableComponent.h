#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "AntiZurgLightableComponent.generated.h"

class AZurgManager;
class ULifeComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UAntiZurgLightableComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZurgManager* m_zurgManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULifeComponent* m_ownerLifeComponent;
    
public:
    UAntiZurgLightableComponent();
};

