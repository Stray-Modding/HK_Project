#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ItemSelector.generated.h"

class ABackpack;
class UBackpackUsableComponent;

UCLASS()
class HK_PROJECT_API AItemSelector : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ABackpack* M_BackPack;
    
    UPROPERTY(Instanced)
    UBackpackUsableComponent* m_usable;
    
public:
    AItemSelector();
    UFUNCTION(BlueprintNativeEvent)
    void OnSelectionExit();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSelectionEnter(UBackpackUsableComponent* _usable);
    
    UFUNCTION(BlueprintPure)
    FTransform GetSelectionBoxTransform() const;
    
    UFUNCTION(BlueprintPure)
    void GetSelectionBox(FVector& _outOrigin, FVector& _outExtent) const;
    
    UFUNCTION(BlueprintPure)
    UBackpackUsableComponent* GetSelectedUsable() const;
    
    UFUNCTION(BlueprintPure)
    ABackpack* GetBackpack() const;
    
};

