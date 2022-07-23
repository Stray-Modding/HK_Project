// Fill out your copyright notice in the Description page of Project Settings.

#include "DebugHistogram.h"

#include <DrawDebugHelpers.h>

#include "Assert.h"
#include "Draw.h"
#include "MacroUtils.h"
#include "MathTools.h"

void FDebugHistogram::SetDataColor(FName _name, FColor _color)
{
	FDataDescription* dataDescription = _FindOrAddDataDescription(_name);
	dataDescription->Color = _color;
}

void FDebugHistogram::ResetData(FName _name)
{
	FDataDescription* dataDescription = _FindOrAddDataDescription(_name);
	dataDescription->Data.Empty();
}

void FDebugHistogram::ResetAll()
{
	for (auto& pair : m_dataList)
	{
		pair.Value.Data.Empty();
	}
}

void FDebugHistogram::AddSample(FName _name, float _value)
{
	FDataDescription* dataDescription = _FindOrAddDataDescription(_name);

	FData data(_value);
	dataDescription->Data.Add(data);

	// Remove timed out data
	FDateTime limitTime = data.Time - _GetMaxSamplingTimespan();
	for (auto it = dataDescription->Data.CreateIterator(); it; ++it)
	{
		if (it->Time < limitTime)
		{
			it.RemoveCurrent();
		}
		else
		{
			break;
		}
	}
}

void FDebugHistogram::DisplayDebug(UCanvas* _canvas, const FBox2D& _location, float _displayTime, FDateTime _referenceTime, bool _autoYLimits, float _YMin, float _YMax, uint16 _curveSegmentCount)
{
	static const float s_charWidth = 5.f;
	static const float s_charHeight = 14.f;

	if (_displayTime == 0.f)
		return;

	if (_curveSegmentCount == 0)
		return;

	FTimespan displayTimespan = FTimespan(0, 0, 0, FMath::FloorToInt(_displayTime), (_displayTime - FMath::FloorToInt(_displayTime)) * 1000.f);
	FDateTime startTime = _referenceTime - displayTimespan;

	FColor graphColor = FColor::White;

	FVector2D curveCenter = _location.GetCenter();
	FVector2D curveExtent = _location.GetExtent();
	float curveYMin = _YMin;
	float curveYMax = _YMax;

	if (_autoYLimits)
	{
		curveYMin = TNumericLimits<float>::Max();
		curveYMax = -TNumericLimits<float>::Max();

		for (auto& pair : m_dataList)
		{
			for (int i = pair.Value.Data.Num() - 1; i >= 0; --i)
			{
				const FData& data = pair.Value.Data[i];
				if (data.Time > _referenceTime)
					continue;

				if (data.Time < startTime)
					break;

				curveYMin = FMath::Min(curveYMin, data.Value);
				curveYMax = FMath::Max(curveYMax, data.Value);
			}
		}
	}
	
	float curveHeight = FMath::Max(curveYMax - curveYMin, KINDA_SMALL_NUMBER);
	float invCurveHeight = 1.f / curveHeight;
	float invDisplayTimespanTicks = 1.f / float(displayTimespan.GetTicks());

	DrawDebugCanvasString(_canvas, FVector2D(curveCenter.X - m_name.ToString().Len() * s_charWidth * .5f, _location.Min.Y - s_charHeight), m_name.ToString(), graphColor);
	DrawDebugCanvas2DLine(_canvas, _location.Min, _location.Min + FVector2D(0.f, curveExtent.Y * 2.f), graphColor);
	DrawDebugCanvas2DLine(_canvas, _location.Max, _location.Max + -FVector2D(curveExtent.X * 2.f, 0.f), graphColor);
	DrawDebugCanvasString(_canvas, FVector2D(_location.Min.X, _location.Max.Y), FString::Printf(TEXT("-%.1f"), _displayTime), graphColor);
	DrawDebugCanvasString(_canvas, FVector2D(_location.Max.X, _location.Max.Y), FString::Printf(TEXT("0.0f")), graphColor);
	DrawDebugCanvasString(_canvas, FVector2D(_location.Min.X - 5.f * s_charWidth, _location.Min.Y - s_charHeight), FString::Printf(TEXT("%.2f"), curveYMax), graphColor);
	DrawDebugCanvasString(_canvas, FVector2D(_location.Min.X - 5.f * s_charWidth, _location.Max.Y - s_charHeight), FString::Printf(TEXT("%.2f"), curveYMin), graphColor);

	FTimespan timeStep = displayTimespan / _curveSegmentCount;
	FVector2D origin = FVector2D(_location.Min.X, _location.Max.Y);

	for (auto& pair : m_dataList)
	{
		if (pair.Value.Data.Num() == 0)
			continue;

		FDateTime currentTime = startTime;
		FDateTime nextTime;
		float currentValue = 0.f;
		bool gotCurrentValue = false;

		for (size_t i = 0; i < pair.Value.Data.Num() - 1; ++i)
		{
			const FData& data = pair.Value.Data[i];
			const FData& nextData = pair.Value.Data[i + 1];

			if (!gotCurrentValue)
			{
				if (nextData.Time > currentTime)
				{
					float t = float((currentTime - data.Time).GetTicks()) / float((nextData.Time - data.Time).GetTicks());
					currentValue = FMath::Lerp(data.Value, nextData.Value, t);
					nextTime = FMath::Max(currentTime + timeStep, nextData.Time);
					gotCurrentValue = true;
				}
			}
			else
			{
				if (nextData.Time > nextTime)
				{
					FTimespan timeToNextTime = nextTime - data.Time;
					FTimespan timeToNextData = nextData.Time - data.Time;
					float t = float(timeToNextTime.GetTicks()) / float(timeToNextData.GetTicks());
					float nextValue = FMath::Lerp(data.Value, nextData.Value, t);

					float currentXRatio = float((currentTime - startTime).GetTicks()) * invDisplayTimespanTicks;
					float nextXRatio = float((nextTime - startTime).GetTicks()) * invDisplayTimespanTicks;

					float currentYRatio = (currentValue - curveYMin) * invCurveHeight;
					float nextYRatio = (nextValue - curveYMin) * invCurveHeight;

					if ((currentYRatio >= 0.f && currentYRatio <= 1.f) || (nextYRatio >= 0.f && nextYRatio <= 1.f))
					{
						currentYRatio = Clamp01(currentYRatio);
						nextYRatio = Clamp01(nextYRatio);

						DrawDebugCanvas2DLine(_canvas, origin + FVector2D(curveExtent.X * 2.f * currentXRatio, curveExtent.Y * 2.f * -currentYRatio), origin + FVector2D(curveExtent.X * 2.f * nextXRatio, curveExtent.Y * 2.f * -nextYRatio), pair.Value.Color);
					}

					currentTime = nextTime;
					currentValue = nextValue;
					nextTime = FMath::Max(currentTime + timeStep, nextData.Time);
				}
			}
		}
	}
}

FDebugHistogram::FDataDescription* FDebugHistogram::_FindOrAddDataDescription(FName _name)
{
	FDataDescription* dataDescription = m_dataList.Find(_name);
	if (!dataDescription)
	{
		dataDescription = &m_dataList.Add(_name, FDataDescription(_name));
	}
	JOY_ASSERT(dataDescription);
	return dataDescription;
}

FTimespan FDebugHistogram::_GetMaxSamplingTimespan() const
{
	return FTimespan(0, 0, 0, FMath::FloorToInt(MaxSamplingTime), (MaxSamplingTime - FMath::FloorToInt(MaxSamplingTime)) * 1000.f);
}
