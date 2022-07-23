#pragma once

class UBlueprintFunctionLibrary;
class UObject;

#include <Kismet/KismetMathLibrary.h>

#include "LogicTools.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FFuzzyBool
{
	GENERATED_BODY()

public:
	bool GetTarget() const;

	void SetTarget(const UObject* _worldContextObject, bool _targetResult);
	bool GetFuzzy(const UObject* _worldContextObject) const;

	UPROPERTY(BlueprintReadWrite, EditAnywhere) float Delay = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere) TEnumAsByte<EEasingFunc::Type> EasingType; 

private:
	mutable bool m_fuzzy = false;
	bool m_target = true;
	float m_startTime = 0;
}; 


/**
 *
 */
UCLASS()
class JOYLIBRARYRUNTIME_API ULogicTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Joy|LogicTools|FuzzyBool" , DisplayName = "SetTarget", meta = (WorldContext = "WorldContextObject")) static void FuzzyBoolSetTarget(UObject* WorldContextObject, UPARAM(ref) FFuzzyBool& _fuzzyBool, bool _targetResult);
	UFUNCTION(BlueprintPure, Category = "Joy|LogicTools|FuzzyBool", DisplayName = "GetTarget") static bool FuzzyBoolGetTarget(UPARAM(ref) FFuzzyBool& _fuzzyBool);
	UFUNCTION(BlueprintPure, Category = "Joy|LogicTools|FuzzyBool", DisplayName = "GetFuzzy", meta = (WorldContext = "WorldContextObject")) static bool FuzzyBoolGetFuzzy(UObject* WorldContextObject, UPARAM(ref) FFuzzyBool& _fuzzyBool);
};


