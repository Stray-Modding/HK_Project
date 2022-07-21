#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AnimationUsingStruct.h"
#include "AnimationStartUseStruct.h"
#include "UObject/NoExportTypes.h"
#include "DroidUsableComponent.generated.h"

class ACharacterDroid;
class UDroidUsableComponent;
class AActor;
class UHierarchicalStateMachine;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UDroidUsableComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUseDelegate, UDroidUsableComponent*, DroidUsableComponent, ACharacterDroid*, Droid);
    
    UPROPERTY(BlueprintAssignable)
    FUseDelegate OnStartUseEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUseDelegate OnUsingEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUseDelegate OnStopUseEvent;
    
    UPROPERTY(BlueprintAssignable)
    FUseDelegate OnUseEndedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SimpleDisplay)
    FAnimationUsingStruct m_usingAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimationStartUseStruct m_startUseAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimationStartUseStruct m_stopUseAnimation;
    
private:
    UPROPERTY(EditAnywhere)
    FText m_objectName;
    
    UPROPERTY(VisibleAnywhere)
    AActor* m_startUsingTransformActor;
    
    UPROPERTY(EditAnywhere)
    bool m_isEnabled;
    
    UPROPERTY(EditAnywhere)
    bool m_enableTeleportAtEnd;
    
    UPROPERTY()
    UHierarchicalStateMachine* m_stateMachine;
    
public:
    UDroidUsableComponent();
    UFUNCTION(BlueprintCallable)
    void StopUse();
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enabled);
    
    UFUNCTION()
    void OnUsing(ACharacterDroid* _droid);
    
    UFUNCTION()
    void OnStopUse();
    
    UFUNCTION()
    void OnStartUse(ACharacterDroid* _droid);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION(BlueprintPure)
    bool IsBeingUsed();
    
    UFUNCTION(BlueprintPure)
    FTransform GetStartUseSocketTransform();
    
    UFUNCTION(BlueprintPure)
    ACharacterDroid* GetCurrentDroid();
    
    UFUNCTION()
    void ForceUsing(ACharacterDroid* _droid);
    
};

