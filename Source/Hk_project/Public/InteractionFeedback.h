#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInteractionFeedbackState.h"
#include "InteractionFeedback.generated.h"

class UCatUsableComponentBase;

UCLASS()
class HK_PROJECT_API AInteractionFeedback : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCatUsableComponentBase* m_usable;
    
public:
    AInteractionFeedback();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnUsableChanged(UCatUsableComponentBase* _previousUsable, UCatUsableComponentBase* _currentUsable);
    
public:
    UFUNCTION(BlueprintPure)
    UCatUsableComponentBase* GetUsable() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EInteractionFeedbackState> GetState() const;
    
};

