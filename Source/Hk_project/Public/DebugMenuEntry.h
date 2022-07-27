#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuEntry.generated.h"

class UDebugMenuEntry;

UCLASS(Blueprintable)
class UDebugMenuEntry : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEntryAction, UDebugMenuEntry*, _entry);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString YText;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntryAction OnUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntryAction OnAPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntryAction OnXPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntryAction OnYPressed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDebugMenuEntry*> m_children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuEntry* m_parent;
    
public:
    UDebugMenuEntry();
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDebugMenuEntry* GetParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UDebugMenuEntry*> GetChildren() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllChildren();
    
    UFUNCTION(BlueprintCallable)
    void AddChild(UDebugMenuEntry* _child);
    
};

