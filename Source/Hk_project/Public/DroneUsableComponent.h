#pragma once
#include "CoreMinimal.h"
#include "BackpackUsableComponent.h"
#include "DroneUsableComponent.generated.h"

class UDroneUsableComponent;
class ADrone;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UDroneUsableComponent : public UBackpackUsableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneUseDelegate, UDroneUsableComponent*, Usable);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroneUseDelegate DroneUseStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroneUseDelegate DroneUseEnded;
    
    UDroneUsableComponent();
    UFUNCTION(BlueprintCallable)
    void SetUsePosition(USceneComponent* _usePosition, FName _socket);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDroneUsing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADrone* GetUserDrone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetUsePosition(FName& _outSocket) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetFinalUseSocket(FName& _outSocket) const;
    
    UFUNCTION(BlueprintCallable)
    void EndDroneUse();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnDroneUseStarted(ADrone* _drone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void _OnDroneUseEnded(ADrone* _drone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool _IsDroneReadyToUnfold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool _CanStartUse() const;
    
};

