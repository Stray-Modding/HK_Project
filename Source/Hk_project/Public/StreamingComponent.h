#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponentPhysicsSettings.h"
#include "Engine/EngineTypes.h"
#include "StreamingComponent.generated.h"

class UPrimitiveComponent;
class UStreamingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UStreamingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStreamingComponentDelegate, UStreamingComponent*, _component);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotTickUntilStreamedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePhysicsUntilStreamedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamingComponentDelegate StreamedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamingComponentDelegate StreamedOut;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FComponentPhysicsSettings> m_componentsPhysicsSettings;
    
public:
    UStreamingComponent();
    UFUNCTION(BlueprintCallable)
    void SetComponentSimulatePhysics(UPrimitiveComponent* _component, bool _simulatePhysics);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentCollisionEnabled(UPrimitiveComponent* _component, TEnumAsByte<ECollisionEnabled::Type> _collisionEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnStreamOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnStreamIn();
    
};

