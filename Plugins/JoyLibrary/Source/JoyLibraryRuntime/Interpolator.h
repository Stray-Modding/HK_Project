#pragma once

#include <Kismet/BlueprintAsyncActionBase.h>

#include "EasingTools.h"
#include "Curves/CurveFloat.h"
#include "Engine/EngineBaseTypes.h"
#include "Interpolator.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInterpolatorTickOutputPin, float, Ratio);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInterpolatorCompleteOutputPin);

USTRUCT()
struct FInterpolatorTickFunction : public FTickFunction
{
	GENERATED_USTRUCT_BODY()

	virtual void ExecuteTick(float DeltaTime, ELevelTick TickType, ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent) override;
	virtual FString DiagnosticMessage() override;

	class UJoyInterpolator* m_interpolator;
};

template<> struct TStructOpsTypeTraits<FInterpolatorTickFunction> : public TStructOpsTypeTraitsBase2<FInterpolatorTickFunction> { enum { WithCopy = false }; };


UCLASS()
class JOYLIBRARYRUNTIME_API UJoyInterpolator : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
		void OnTick(float _deltaTime);

protected:

	virtual float _GetRatio();

	float m_waitingTime = 0.f;
	float m_currentTime = 0.f;

	UObject* m_worldContextObject;

private:

	virtual void Activate() override;
	virtual void _OnComplete();

	UPROPERTY(BlueprintAssignable) FInterpolatorTickOutputPin Tick;
	UPROPERTY(BlueprintAssignable) FInterpolatorCompleteOutputPin Complete;

	FInterpolatorTickFunction m_interpolatorTickFunction;
	FTickPrerequisite m_tickPrerequisitie;

	float m_ratio = 0.f;
};


UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UJoyEasingInterpolator : public UJoyInterpolator
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Joy|Interpolator|Internal", DisplayName = "InternalStartEasingInterpolator", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", KeyWords = ""))
		static UJoyEasingInterpolator* StartEasingInterpolator(UObject* WorldContextObject, EEasingFunction _easingFunction, float _time);

protected:

	virtual float _GetRatio() override;

private:

	EEasingFunction m_easingFunction;
};


UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UJoyCurveInterpolator : public UJoyInterpolator
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Joy|Interpolator|Internal", DisplayName = "InternalStartCurveInterpolator", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true", KeyWords = ""))
		static UJoyCurveInterpolator* StartCurveInterpolator(UObject* WorldContextObject, UCurveFloat* _curveAsset);

protected:

	virtual float _GetRatio() override;

private:

	UCurveFloat* m_curveFloatAsset = nullptr;
	float m_curveMinRange;
	float m_curveMaxRange;
};

