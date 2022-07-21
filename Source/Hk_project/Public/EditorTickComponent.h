#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EditorTickComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UEditorTickComponent : public UActorComponent {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintAssignable)
    FEditorTickSignature OnEditorTick;*/
    
    UEditorTickComponent();
};

