#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "ScriptedJump.generated.h"

class USceneComponent;
class UAnimSequence;
class UPrimitiveComponent;

UCLASS()
class HK_PROJECT_API AScriptedJump : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* m_root;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* m_begin;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* m_animationBegin;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* m_end;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* m_animationEnd;
    
private:
    UPROPERTY(EditAnywhere)
    float m_entryRadius;
    
    UPROPERTY(EditAnywhere)
    float m_entryAngle;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_forwardAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_backAnimation;
    
public:
    AScriptedJump();
    UFUNCTION(BlueprintNativeEvent)
    void ViewportTick(float _dt);
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetUpEntry() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetDownEntry() const;
    
private:
    UFUNCTION()
    void _OnEntryEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION()
    void _OnEntryBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
};

