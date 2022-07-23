#include "StringTools.h"

uint32 HashString(const FString& _string)
{
	const uint32 DJB2_INIT = 5381;

	if (_string.Len() == 0)
		return 0;

	uint32 hash = DJB2_INIT;

	for (int i = 0; i < _string.Len(); ++i)
	{
		TCHAR c = _string.GetCharArray()[i];
		hash = ((hash << 5) + hash) + c;
	}

	return hash;
}

FColor StringToColor(const FString& _string)
{
	float HRange[] = { 0.0f, 360.f };
	float SRange[] = { 0.8f, 1.f };
	float LRange[] = { 0.7f, 1.f };

	float HAmplitude = HRange[1] - HRange[0];
	float SAmplitude = SRange[1] - SRange[0];
	float LAmplitude = LRange[1] - LRange[0];

	uint32 hash = HashString(_string);

	uint32 HI = (hash & 0xFF000000) >> 24;
	uint32 SI = (hash & 0x00FF0000) >> 16;
	uint32 LI = (hash & 0x0000FF00) >> 8;
	float base = 1 << 8;

	float H = HRange[0] + (float(HI) / base) * HAmplitude;
	float S = SRange[0] + (float(SI) / base) * SAmplitude;
	float L = LRange[0] + (float(LI) / base) * LAmplitude;

	return FLinearColor(H, S, L).HSVToLinearRGB().ToFColor(true);
}
