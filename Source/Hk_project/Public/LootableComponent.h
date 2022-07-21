#pragma once
#include "CoreMinimal.h"
#include "DroneUsableComponent.h"
#include "LootableComponent.generated.h"

class ULootableComponent;
class UTexture;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API ULootableComponent : public UDroneUsableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLootableLootedSignature, ULootableComponent*, _lootable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLootableInteractionStartSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLootableInteractionEndSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLootableDropedSignature, ULootableComponent*, _lootable);
    
    UPROPERTY(BlueprintAssignable)
    FLootableLootedSignature OnLooted;
    
    UPROPERTY(BlueprintAssignable)
    FLootableDropedSignature OnDroped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ID;
    
    ULootableComponent();
    UFUNCTION(BlueprintPure)
    bool HasID(FName _id) const;
    
};

