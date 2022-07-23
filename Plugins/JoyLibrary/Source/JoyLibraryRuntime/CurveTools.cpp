#include "CurveTools.h"

#include <Curves/CurveFloat.h>

bool FindTimeOnCurveForValue(UCurveFloat* _curve, float _value, float* _outTime, int _maxSamplesCount /*= 128*/)
{
	if (_maxSamplesCount <= 0)
		return false;

	if (_curve->GetCurves().Num() == 0)
		return false;

	float firstKeyTime = 0.f;
	float lastKeyTime = 0.f;
	_curve->GetCurves()[0].CurveToEdit->GetTimeRange(firstKeyTime, lastKeyTime);

	float samplingInterval = (lastKeyTime - firstKeyTime) / float(_maxSamplesCount);
	if (samplingInterval == 0.f)
	{
		if (_outTime) *_outTime = _curve->GetFloatValue(firstKeyTime);
		return true;
	}

	bool found = false;
	float outTime = 0.f;
	for (uint16 i = 0; i < _maxSamplesCount; ++i)
	{
		float currentTime = float(i) * samplingInterval;
		float nextTime = float(i + 1) * samplingInterval;
		float currentSample = _curve->GetFloatValue(currentTime);
		float nextSample = _curve->GetFloatValue(nextTime);

		float minSample = FMath::Min(currentSample, nextSample);
		float maxSample = FMath::Max(currentSample, nextSample);

		if (_value >= minSample && _value <= maxSample)
		{
			float interval = maxSample - minSample;
			if (FMath::IsNearlyZero(interval))
			{
				outTime = minSample;
			}
			else
			{
				float t = (_value - minSample) / interval;
				if (nextSample < currentSample) t = 1.f - t;
				outTime = currentTime + t * samplingInterval;
			}
			found = true;
			break;
		}
	}

	if (_outTime) *_outTime = outTime;
	return found;
}

bool UCurveTools::FindTimeOnCurveForValue(UCurveFloat* _curve, float _value, float& _outTime, int _maxSamplesCount /*= 128*/)
{
	return ::FindTimeOnCurveForValue(_curve, _value, &_outTime, _maxSamplesCount);
}
