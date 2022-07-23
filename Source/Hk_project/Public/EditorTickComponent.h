#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EditorTickComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UEditorTickComponent : public UActorComponent {
    GENERATED_BODY()
public:

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEditorTickSignature, UEditorTickComponent*, OnEditorTick);
    
    UPROPERTY(BlueprintAssignable)
    FEditorTickSignature OnEditorTick;

    void EditorTickSignature(float DeltaTime);
    
    UEditorTickComponent();
};

