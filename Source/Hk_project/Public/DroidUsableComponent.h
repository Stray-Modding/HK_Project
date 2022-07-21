#pragma once
#include "CoreMinimal.h"
#include "AnimationStartUseStruct.h"
#include "Components/SceneComponent.h"
#include "AnimationUsingStruct.h"
#include "UObject/NoExportTypes.h"
#include "DroidUsableComponent.generated.h"

class AActor;
class UDroidUsableComponent;
class ACharacterDroid;
class UHierarchicalStateMachine;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UDroidUsableComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUseDelegate, UDroidUsableComponent*, DroidUsableComponent, ACharacterDroid*, Droid);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseDelegate OnStartUseEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseDelegate OnUsingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseDelegate OnStopUseEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseDelegate OnUseEndedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FAnimationUsingStruct m_usingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationStartUseStruct m_startUseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationStartUseStruct m_stopUseAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_objectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_startUsingTransformActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableTeleportAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHierarchicalStateMachine* m_stateMachine;
    
public:
    UDroidUsableComponent();
    UFUNCTION(BlueprintCallable)
    void StopUse();
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void OnUsing(ACharacterDroid* _droid);
    
    UFUNCTION(BlueprintCallable)
    void OnStopUse();
    
    UFUNCTION(BlueprintCallable)
    void OnStartUse(ACharacterDroid* _droid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetStartUseSocketTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacterDroid* GetCurrentDroid();
    
    UFUNCTION(BlueprintCallable)
    void ForceUsing(ACharacterDroid* _droid);
    
};

