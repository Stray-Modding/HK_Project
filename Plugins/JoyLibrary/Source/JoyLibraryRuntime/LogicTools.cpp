#include "LogicTools.h"

// Engine Includes
#include <CoreMinimal.h>
#include <Engine/World.h>
#include <Engine.h>
#include <Kismet/BlueprintFunctionLibrary.h>
#include <Kismet/KismetMathLibrary.h>

// Plugins Includes
#include "Log.h"
#include "Assert.h"
#include "MacroUtils.h"

bool FFuzzyBool::GetTarget() const
{
	return m_target;
}

void FFuzzyBool::SetTarget(const UObject* _worldContextObject, bool _targetResult)
{
	JOY_ASSERT_MSG(_worldContextObject && _worldContextObject->GetWorld(), TEXT("Invalid World Context"));

	if (!_worldContextObject || !_worldContextObject->GetWorld())
		return;

	m_fuzzy  = !_targetResult;
	m_target = _targetResult;
	m_startTime = _worldContextObject->GetWorld()->GetTimeSeconds();
}

bool FFuzzyBool::GetFuzzy(const UObject* _worldContextObject) const
{
	JOY_ASSERT_MSG(_worldContextObject && _worldContextObject->GetWorld(), TEXT("Invalid World Context"));

	if (!_worldContextObject || !_worldContextObject->GetWorld())
		return m_fuzzy;

	if (m_target == m_fuzzy)
		return m_fuzzy;

	float normalizedTimeAlpha = FMath::Clamp<float>(
		FMath::GetRangePct(m_startTime,m_startTime + FMath::Max<float>(0, Delay), _worldContextObject->GetWorld()->GetTimeSeconds()),
		0.0f,1.0f);

	bool randomBool = UKismetMathLibrary::RandomBoolWithWeight(UKismetMathLibrary::Ease(0.0f, 1.0f, normalizedTimeAlpha, EasingType));
	m_fuzzy = (m_target ? randomBool : !randomBool);

	return m_fuzzy;
}

//-------------------------------------------------------
// Blueprint Interface

void ULogicTools::FuzzyBoolSetTarget(UObject* WorldContextObject, FFuzzyBool& _fuzzyBool, bool _targetResult)
{
	_fuzzyBool.SetTarget(WorldContextObject, _targetResult);
}

bool ULogicTools::FuzzyBoolGetTarget(FFuzzyBool& _fuzzyBool)
{
	return _fuzzyBool.GetTarget();
}

bool ULogicTools::FuzzyBoolGetFuzzy(UObject* WorldContextObject, FFuzzyBool& _fuzzyBool)
{
	return _fuzzyBool.GetFuzzy(WorldContextObject);
}
