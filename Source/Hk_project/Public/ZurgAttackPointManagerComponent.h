#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ZurgAttackPointManagerComponent.generated.h"

class AActor;
class UZurgAttackPointComponent;
class ULifeComponent;
class AZurgPawnSlave;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgAttackPointManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FInt32Range m_zurgCountDamageMultiplicator;
    
public:
    UZurgAttackPointManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SetAttackPointsActive(bool _active);
    
    UFUNCTION()
    void OnZurgDetached(UZurgAttackPointComponent* _zurgAttackPoint, AZurgPawnSlave* _zurg);
    
    UFUNCTION()
    void OnZurgAttached(UZurgAttackPointComponent* _zurgAttackPoint, AZurgPawnSlave* _zurg);
    
    UFUNCTION(BlueprintPure)
    bool IsAttackPointsActive();
    
private:
    UFUNCTION()
    void _OnLifeComponentKilled(ULifeComponent* _lifeComponent, AActor* _killer);
    
};

