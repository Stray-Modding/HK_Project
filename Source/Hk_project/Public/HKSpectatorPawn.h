#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "HKSpectatorPawn.generated.h"

class UCameraComponent;

UCLASS()
class HK_PROJECT_API AHKSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    UCameraComponent* m_camera;
    
private:
    UPROPERTY(EditAnywhere)
    float m_moveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_horizontalLookSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_verticalLookSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_maxLookUpAngle;
    
    UPROPERTY(EditAnywhere)
    float m_teleportFeedbackClippingDistance;
    
public:
    AHKSpectatorPawn();
};

