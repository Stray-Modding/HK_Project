#pragma once

class UCurveFloat;

#include "CoreMinimal.h"
#include "CurveTools.generated.h"

bool FindTimeOnCurveForValue(UCurveFloat* _curve, float _value, float* _outTime, int _maxSamplesCount = 128);

UCLASS()
class JOYLIBRARYRUNTIME_API UCurveTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	bool FindTimeOnCurveForValue(UCurveFloat* _curve, float _value, float& _outTime, int _maxSamplesCount = 128);
};
