#pragma once

#include <CoreMinimal.h>

#include <Kismet/BlueprintFunctionLibrary.h>

#include "EasingTools.generated.h"

UENUM(BlueprintType)
enum EEasingFunction
{
	EF_Linear		UMETA(DisplayName = "Linear"),
	EF_QuadIn		UMETA(DisplayName = "QuadIn"),
	EF_QuadOut		UMETA(DisplayName = "QuadOut"),
	EF_QuadInOut	UMETA(DisplayName = "QuadInOut"),
	EF_CubeIn		UMETA(DisplayName = "CubeIn"),
	EF_CubeOut		UMETA(DisplayName = "CubeOut"),
	EF_CubeInOut	UMETA(DisplayName = "CubeInOut"),
	EF_QuartIn		UMETA(DisplayName = "QuartIn"),
	EF_QuartOut		UMETA(DisplayName = "QuartOut"),
	EF_QuartInOut	UMETA(DisplayName = "QuartInOut"),
	EF_QuintIn		UMETA(DisplayName = "QuintIn"),
	EF_QuintOut		UMETA(DisplayName = "QuintOut"),
	EF_QuintInOut	UMETA(DisplayName = "QuintInOut"),
	EF_SineIn		UMETA(DisplayName = "SineIn"),
	EF_SineOut		UMETA(DisplayName = "SineOut"),
	EF_SineInOut	UMETA(DisplayName = "SineInOut"),
	EF_BounceIn		UMETA(DisplayName = "BounceIn"),
	EF_BounceOut	UMETA(DisplayName = "BounceOut"),
	EF_BounceInOut	UMETA(DisplayName = "BounceInOut"),
	EF_CircIn		UMETA(DisplayName = "CircIn"),
	EF_CircOut		UMETA(DisplayName = "CircOut"),
	EF_CircInOut	UMETA(DisplayName = "CircInOut"),
	EF_ExpoIn		UMETA(DisplayName = "ExpoIn"),
	EF_ExpoOut		UMETA(DisplayName = "ExpoOut"),
	EF_ExpoInOut	UMETA(DisplayName = "ExpoInOut"),
	EF_BackIn		UMETA(DisplayName = "BackIn"),
	EF_BackOut		UMETA(DisplayName = "BackOut"),
	EF_BackInOut	UMETA(DisplayName = "BackInOut")
};


UCLASS()
class JOYLIBRARYRUNTIME_API UEasingTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Quadratic in. */
	static float QuadIn(float t)
	{
		return t * t;
	}

	/** Quadratic out. */
	static float QuadOut(float t)
	{
		return -t * (t - 2.f);
	}

	/** Quadratic in and out. */
	static float QuadInOut(float t)
	{
		if (t <= 0.5f)
		{
			return t * t * 2.f;
		} 
		else
		{
			t -= 1.f;
			return 1.f - t * t * 2.f;
		}
	}

	/** Cubic in. */
	static float CubeIn(float t)
	{
		return t * t * t;
	}

	/** Cubic out. */
	static float CubeOut(float t)
	{
		t -= 1.f;
		return 1.f + t * t * t;
	}

	/** Cubic in and out. */
	static float CubeInOut(float t)
	{
		if (t <= 0.5f)
		{
			return t * t * t * 4.f;
		}
		else
		{
			return (t - 1.f) * (2.f * t - 2.f) * (2.f * t - 2.f) + 1.f;
		}
	}

	/** Quart in. */
	static float QuartIn(float t)
	{
		return t * t * t * t;
	}

	/** Quart out. */
	static float QuartOut(float t)
	{
		t -= 1.f;
		return 1 - t * t * t * t;
	}

	/** Quart in and out. */
	static float QuartInOut(float t)
	{
		if (t <= 0.5f)
		{
			return t * t * t * t * 8.f;
		} 
		else
		{
			t = t * 2.f - 2.f;
			return (1.f - t * t * t * t) / 2.f + 0.5f;
		}
	}

	/** Quint in. */
	static float QuintIn(float t)
	{
		return t * t * t * t * t;
	}

	/** Quint out. */
	static float QuintOut(float t)
	{
		t = t - 1.f;
		return t * t * t * t * t + 1.f;
	}

	/** Quint in and out. */
	static float QuintInOut(float t)
	{
		if ((t *= 2.f) < 1.f)
		{
			return (t* t * t * t * t) / 2.f;
		} 
		else
		{
			t -= 2.f;
			return (t * t * t * t * t + 2.f) / 2.f;
		}
	}

	/** Sine in. */
	static float SineIn(float t)
	{
		return 1.f - FMath::Cos(t *  PI * .5f);
	}

	/** Sine out. */
	static float SineOut(float t)
	{
		return FMath::Sin(t * PI * .5f);
	}

	/** Sine in and out. */
	static float SineInOut(float t)
	{
		return (1.f - FMath::Cos(t * PI)) * .5f;
	}

	/** Bounce in. */
	static float BounceIn(float t)
	{
		t = 1.f - t;
		if (t < B1) return 1.f - 7.5625f * t* t;
		if (t < B2) return 1.f - (7.5625f * (t - B3) * (t - B3) + 0.75f);
		if (t < B4) return 1.f - (7.5625f * (t - B5) * (t - B5) + 0.9375f);
		return 1.f - (7.5625f * (t - B6) * (t - B6) + 0.984375f);
	}

	/** Bounce out. */
	static float BounceOut(float t)
	{
		if (t < B1) return 7.5625f * t* t;
		if (t < B2) return 7.5625f * (t - B3) * (t - B3) + 0.75f;
		if (t < B4) return 7.5625f * (t - B5) * (t - B5) + 0.9375f;
		return 7.5625f * (t - B6) * (t - B6) + 0.984375f;
	}

	/** Bounce in and out. */
	static float BounceInOut(float t)
	{
		if (t < 0.5f)
		{
			t = 1.f - t * 2.f;
			if (t < B1) return (1.f - 7.5625f * t * t) / 2.f;
			if (t < B2) return (1.f - (7.5625f * (t - B3) * (t - B3) + 0.75f)) / 2.f;
			if (t < B4) return (1.f - (7.5625f * (t - B5) * (t - B5) + 0.9375f)) / 2.f;
			return (1.f - (7.5625f * (t - B6) * (t - B6) + 0.984375f)) / 2.f;
		}
		t = t * 2.f - 1.f;
		if (t < B1) return (7.5625f * t * t) / 2.f + 0.5f;
		if (t < B2) return (7.5625f * (t - B3) * (t - B3) + 0.75f) / 2.f + 0.5f;
		if (t < B4) return (7.5625f * (t - B5) * (t - B5) + 0.9375f) / 2.f + 0.5f;
		return (7.5625f * (t - B6) * (t - B6) + .984375f) / 2.f + 0.5f;
	}

	/** Circle in. */
	static float CircIn(float t)
	{
		return -(FMath::Sqrt(1.f - t * t) - 1.f);
	}

	/** Circle out. */
	static float CircOut(float t)
	{
		return FMath::Sqrt(1.f - (t - 1.f) * (t - 1.f));
	}

	/** Circle in and out. */
	static float CircInOut(float t)
	{
		return t <= 0.5f ? (FMath::Sqrt(1.f - t * t * 4.f) - 1.f) / -2.f : (FMath::Sqrt(1.f - (t * 2.f - 2.f) * (t * 2.f - 2.f)) + 1.f) / 2.f;
	}

	/** Exponential in. */
	static float ExpoIn(float t)
	{
		return FMath::Pow(2.f, 10.f * (t - 1.f));
	}

	/** Exponential out. */
	static float ExpoOut(float t)
	{
		return -FMath::Pow(2.f, -10.f * t) + 1;
	}

	/** Exponential in and out. */
	static float ExpoInOut(float t)
	{
		return t < 0.5f ? FMath::Pow(2.f, 10.f * (t * 2.f - 1.f)) / 2.f : (-FMath::Pow(2.f, -10.f * (t * 2.f - 1.f)) + 2.f) / 2.f;
	}

	/** Back in. */
	static float BackIn(float t)
	{
		return t * t * (2.70158f * t - 1.70158f);
	}

	/** Back out. */
	static float BackOut(float t)
	{
		t -= 1.f;
		return 1.f - t * t * (-2.70158f * t - 1.70158f);
	}

	/** Back in and out. */
	static float BackInOut(float t)
	{
		t *= 2.f;

		if (t < 1.f)
		{
			return t * t* (2.70158f * t - 1.70158f) / 2.f;
		}
		else
		{
			t -= 2.0f;
			return (1.f - t * t * (-2.70158f * t - 1.70158f)) / 2.f + 0.5f;
		}
	}

	static float Ease(EEasingFunction _function, float _t)
	{
		switch (_function)
		{
		case EF_QuadIn:			return QuadIn(_t);
		case EF_QuadOut:		return QuadOut(_t);
		case EF_QuadInOut:		return QuadInOut(_t);
		case EF_CubeIn:			return CubeIn(_t);
		case EF_CubeOut:		return CubeOut(_t);
		case EF_CubeInOut:		return CubeInOut(_t);
		case EF_QuartIn:		return QuartIn(_t);
		case EF_QuartOut:		return QuartOut(_t);
		case EF_QuartInOut:		return QuartInOut(_t);
		case EF_QuintIn:		return QuintIn(_t);
		case EF_QuintOut:		return QuintOut(_t);
		case EF_QuintInOut:		return QuintInOut(_t);
		case EF_SineIn:			return SineIn(_t);
		case EF_SineOut:		return SineOut(_t);
		case EF_SineInOut:		return SineInOut(_t);
		case EF_BounceIn:		return BounceIn(_t);
		case EF_BounceOut:		return BounceOut(_t);
		case EF_BounceInOut:	return BounceInOut(_t);
		case EF_CircIn:			return CircIn(_t);
		case EF_CircOut:		return CircOut(_t);
		case EF_CircInOut:		return CircInOut(_t);
		case EF_ExpoIn:			return ExpoIn(_t);
		case EF_ExpoOut:		return ExpoOut(_t);
		case EF_ExpoInOut:		return ExpoInOut(_t);
		case EF_BackIn:			return BackIn(_t);
		case EF_BackOut:		return BackOut(_t);
		case EF_BackInOut:		return BackInOut(_t);
		}

		return _t;
	}

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float QuadIn(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, QuadIn(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float QuadOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, QuadOut(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float QuadInOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, QuadInOut(_t)); }

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float CubeIn(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, CubeIn(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float CubeOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, CubeOut(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float CubeInOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, CubeInOut(_t)); }

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float QuartIn(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, QuartIn(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float QuartOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, QuartOut(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float QuartInOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, QuartInOut(_t)); }

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float QuintIn(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, QuintIn(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float QuintOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, QuintOut(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float QuintInOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, QuintInOut(_t)); }

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float SineIn(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, SineIn(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float SineOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, SineOut(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float SineInOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, SineInOut(_t)); }

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float BounceIn(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, BounceIn(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float BounceOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, BounceOut(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float BounceInOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, BounceInOut(_t)); }

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float CircIn(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, CircIn(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float CircOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, CircOut(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float CircInOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, CircInOut(_t)); }

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float ExpoIn(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, ExpoIn(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float ExpoOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, ExpoOut(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float ExpoInOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, ExpoInOut(_t)); }

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float BackIn(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, BackIn(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float BackOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, BackOut(_t)); }
	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float BackInOut(float _a, float _b, float _t) { return FMath::Lerp(_a, _b, BackInOut(_t)); }

	UFUNCTION(BlueprintPure, Category = "Joy|Easing") static float Ease(EEasingFunction _function, float _a, float _b, float _t) { return FMath::Lerp(_a, _b, Ease(_function, _t)); }

private:
	// Easing constants.
	static float B1;
	static float B2;
	static float B3;
	static float B4;
	static float B5;
	static float B6;
};
