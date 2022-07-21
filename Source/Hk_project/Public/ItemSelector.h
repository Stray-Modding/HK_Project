#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ItemSelector.generated.h"

class ABackpack;
class UBackpackUsableComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API AItemSelector : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABackpack* M_BackPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBackpackUsableComponent* m_usable;
    
public:
    AItemSelector();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSelectionExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSelectionEnter(UBackpackUsableComponent* _usable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSelectionBoxTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectionBox(FVector& _outOrigin, FVector& _outExtent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBackpackUsableComponent* GetSelectedUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABackpack* GetBackpack() const;
    
};

