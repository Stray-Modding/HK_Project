#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ZurgAttackPointManagerComponent.generated.h"

class AActor;
class UZurgAttackPointComponent;
class AZurgPawnSlave;
class ULifeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgAttackPointManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range m_zurgCountDamageMultiplicator;
    
public:
    UZurgAttackPointManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SetAttackPointsActive(bool _active);
    
    UFUNCTION(BlueprintCallable)
    void OnZurgDetached(UZurgAttackPointComponent* _zurgAttackPoint, AZurgPawnSlave* _zurg);
    
    UFUNCTION(BlueprintCallable)
    void OnZurgAttached(UZurgAttackPointComponent* _zurgAttackPoint, AZurgPawnSlave* _zurg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackPointsActive();
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnLifeComponentKilled(ULifeComponent* _lifeComponent, AActor* _killer);
    
};

