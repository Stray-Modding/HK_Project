// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "DebugHistogram.generated.h"


struct JOYLIBRARYRUNTIME_API FDebugHistogram
{
	FDebugHistogram(FName _name = "", float _maxSamplingTimeInSeconds = 2.f) : MaxSamplingTime(_maxSamplingTimeInSeconds), m_name(_name) {}

	void SetDataColor(FName _name, FColor _color);
	void ResetData(FName _name);
	void ResetAll();
	void AddSample(FName _name, float _value);
	void DisplayDebug(UCanvas* _canvas, const FBox2D& _location, float _displayTime, FDateTime _referenceTime = FDateTime::Now(), bool _autoYLimits = true, float _YMin = 0.f, float _YMax = 0.f, uint16 _curveSegmentCount = 64);

	float MaxSamplingTime = 1.f;
private:

	FName m_name;

	struct FData
	{
		FData(float _value) : Time(FDateTime::Now()), Value(_value) {}

		FDateTime Time;
		float Value;
	};

	struct FDataDescription
	{
		FDataDescription(FName _name) : Name(_name) {}

		FName Name;
		FColor Color = FColor::White;
		TArray<FData> Data;
	};

	FDataDescription* _FindOrAddDataDescription(FName _name);
	FTimespan _GetMaxSamplingTimespan() const;

	TMap<FName, FDataDescription> m_dataList;
};


/**
 * 
 */
UCLASS()
class JOYLIBRARYRUNTIME_API UDebugHistogramTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	
};
