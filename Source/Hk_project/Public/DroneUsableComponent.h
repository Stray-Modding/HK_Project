#pragma once
#include "CoreMinimal.h"
#include "BackpackUsableComponent.h"
#include "DroneUsableComponent.generated.h"

class UDroneUsableComponent;
class USceneComponent;
class ADrone;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UDroneUsableComponent : public UBackpackUsableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneUseDelegate, UDroneUsableComponent*, Usable);
    
    UPROPERTY(BlueprintAssignable)
    FDroneUseDelegate DroneUseStarted;
    
    UPROPERTY(BlueprintAssignable)
    FDroneUseDelegate DroneUseEnded;
    
    UDroneUsableComponent();
    UFUNCTION(BlueprintCallable)
    void SetUsePosition(USceneComponent* _usePosition, FName _socket);
    
    UFUNCTION(BlueprintPure)
    bool IsDroneUsing() const;
    
    UFUNCTION(BlueprintPure)
    ADrone* GetUserDrone() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetUsePosition(FName& _outSocket) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetFinalUseSocket(FName& _outSocket) const;
    
    UFUNCTION(BlueprintCallable)
    void EndDroneUse();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void _OnDroneUseStarted(ADrone* _drone);
    
    UFUNCTION(BlueprintNativeEvent)
    void _OnDroneUseEnded(ADrone* _drone);
    
    UFUNCTION(BlueprintNativeEvent)
    bool _IsDroneReadyToUnfold() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool _CanStartUse() const;
    
};

