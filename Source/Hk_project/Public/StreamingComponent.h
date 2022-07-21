#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "ComponentPhysicsSettings.h"
#include "StreamingComponent.generated.h"

class UStreamingComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UStreamingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStreamingComponentDelegate, UStreamingComponent*, _component);
    
    UPROPERTY(EditAnywhere)
    bool bDoNotTickUntilStreamedIn;
    
    UPROPERTY(EditAnywhere)
    bool bDisablePhysicsUntilStreamedIn;
    
    UPROPERTY(BlueprintAssignable)
    FStreamingComponentDelegate StreamedIn;
    
    UPROPERTY(BlueprintAssignable)
    FStreamingComponentDelegate StreamedOut;
    
private:
    UPROPERTY()
    TMap<FName, FComponentPhysicsSettings> m_componentsPhysicsSettings;
    
public:
    UStreamingComponent();
    UFUNCTION(BlueprintCallable)
    void SetComponentSimulatePhysics(UPrimitiveComponent* _component, bool _simulatePhysics);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentCollisionEnabled(UPrimitiveComponent* _component, TEnumAsByte<ECollisionEnabled::Type> _collisionEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsStreamedIn() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintOnStreamOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintOnStreamIn();
    
};

