#pragma once
#include "CoreMinimal.h"
#include "JoyLibraryRuntime/Manager.h"
#include "StatGroupBudget.h"
#include "BudgetManager.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API ABudgetManager : public AManager {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint64 PhysicalMemoryBudget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatGroupBudget> m_statGroupBudgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isProfilingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_samplesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_warningPercentage;
    
public:
    ABudgetManager();
    UFUNCTION(BlueprintCallable)
    void SetProfilingEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProfilingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    FString DumpBudgets();
    
};

