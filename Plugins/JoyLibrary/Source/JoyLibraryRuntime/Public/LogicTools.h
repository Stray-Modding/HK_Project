#pragma once
#include "CoreMinimal.h"
#include "FuzzyBool.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LogicTools.generated.h"

class UObject;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API ULogicTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULogicTools();
    UFUNCTION(BlueprintCallable)
    static void FuzzyBoolSetTarget(UObject* WorldContextObject, UPARAM(Ref) FFuzzyBool& _fuzzyBool, bool _targetResult);
    
    UFUNCTION(BlueprintPure)
    static bool FuzzyBoolGetTarget(UPARAM(Ref) FFuzzyBool& _fuzzyBool);
    
    UFUNCTION(BlueprintPure)
    static bool FuzzyBoolGetFuzzy(UObject* WorldContextObject, UPARAM(Ref) FFuzzyBool& _fuzzyBool);
    
};

