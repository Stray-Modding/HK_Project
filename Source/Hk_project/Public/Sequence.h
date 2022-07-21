#pragma once
#include "CoreMinimal.h"
#include "EditorTickingActor.h"
#include "Sequence.generated.h"

class USaveComponent;
class UStreamingComponent;
class UBillboardComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API ASequence : public AEditorTickingActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveComponent* m_saveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStreamingComponent* m_streamingComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBillboardComponent* m_billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_autoStartSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString m_checkpointName;
    
public:
    ASequence();
    UFUNCTION(BlueprintCallable)
    void StartSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetCheckpoint(FName _name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFromCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCheckpoint() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnStreamedIn(UStreamingComponent* _streamingComponent);
    
};

