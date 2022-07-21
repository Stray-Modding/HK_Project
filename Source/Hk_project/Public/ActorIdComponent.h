#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorIdComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UActorIdComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_id;
    
public:
    UActorIdComponent();
};

