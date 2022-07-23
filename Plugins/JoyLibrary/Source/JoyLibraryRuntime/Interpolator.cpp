

#include "Interpolator.h"

#include <Engine/LevelScriptActor.h>
#include <Animation/AnimInstance.h>
#include <Kismet/KismetMathLibrary.h>

#include <Assert.h>

//-------------------------------------------------------------
// Tick Function
//-------------------------------------------------------------

void FInterpolatorTickFunction::ExecuteTick(float DeltaTime, ELevelTick TickType, ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent)
{
	m_interpolator->OnTick(DeltaTime);
}

FString FInterpolatorTickFunction::DiagnosticMessage()
{
	return m_interpolator->GetFullName() + TEXT("[JoyInterpolatorTickFunction]");
}

//-------------------------------------------------------------
// Interpolator Base 
//------------------------------------------------------------- 

void UJoyInterpolator::Activate()
{
	m_ratio = 0.f;
	m_currentTime = 0.f;

	if (m_waitingTime <= 0)
	{
		_OnComplete();
		return;
	}

	m_interpolatorTickFunction.bCanEverTick = true;
	m_interpolatorTickFunction.bStartWithTickEnabled = true;
	m_interpolatorTickFunction.RegisterTickFunction(m_worldContextObject->GetWorld()->GetCurrentLevel());
	m_interpolatorTickFunction.m_interpolator = this;

	do 
	{
		AActor* m_worldContextActor = Cast<AActor>(m_worldContextObject);
		if (m_worldContextActor)
		{
			m_worldContextActor->PrimaryActorTick.AddPrerequisite(this, m_interpolatorTickFunction);
			break;
		}

		UPrimitiveComponent* m_worldContextPrimitiveComponent = Cast<UPrimitiveComponent>(m_worldContextObject);
		if (m_worldContextPrimitiveComponent)
		{
			m_worldContextPrimitiveComponent->PrimaryComponentTick.AddPrerequisite(this, m_interpolatorTickFunction);
			break;
		}

		UAnimInstance* m_worldContextAnimInstance = Cast<UAnimInstance>(m_worldContextObject);
		if (m_worldContextAnimInstance)
		{
			m_worldContextAnimInstance->GetSkelMeshComponent()->PrimaryComponentTick.AddPrerequisite(this, m_interpolatorTickFunction);
			break;
		}

		m_worldContextObject->GetWorld()->GetLevelScriptActor()->PrimaryActorTick.AddPrerequisite(this, m_interpolatorTickFunction);

	} while (false);
}

void UJoyInterpolator::OnTick(float _deltaTime)
{
	Tick.Broadcast(_GetRatio());

	if (m_currentTime >= m_waitingTime)
	{
		_OnComplete();
	}
	else
	{
		m_currentTime += _deltaTime;
	}
}

float UJoyInterpolator::_GetRatio()
{
	return 0.f;
}

void UJoyInterpolator::_OnComplete()
{
	m_interpolatorTickFunction.UnRegisterTickFunction();

	do
	{
		AActor* m_worldContextActor = Cast<AActor>(m_worldContextObject);
		if (m_worldContextActor)
		{
			m_worldContextActor->PrimaryActorTick.RemovePrerequisite(this, m_interpolatorTickFunction);
			break;
		}

		UPrimitiveComponent* m_worldContextPrimitiveComponent = Cast<UPrimitiveComponent>(m_worldContextObject);
		if (m_worldContextPrimitiveComponent)
		{
			m_worldContextPrimitiveComponent->PrimaryComponentTick.RemovePrerequisite(this, m_interpolatorTickFunction);
			break;
		}

		UAnimInstance* m_worldContextAnimInstance = Cast<UAnimInstance>(m_worldContextObject);
		if (m_worldContextAnimInstance)
		{
			m_worldContextAnimInstance->GetSkelMeshComponent()->PrimaryComponentTick.RemovePrerequisite(this, m_interpolatorTickFunction);
			break;
		}

		m_worldContextObject->GetWorld()->GetLevelScriptActor()->PrimaryActorTick.RemovePrerequisite(this, m_interpolatorTickFunction);

	} while (false);

	Complete.Broadcast();
}

//-------------------------------------------------------------
// Easing Interpolator
//-------------------------------------------------------------

UJoyEasingInterpolator* UJoyEasingInterpolator::StartEasingInterpolator(UObject* WorldContextObject, EEasingFunction _easingFunction, float _time)
{
	UJoyEasingInterpolator* interpolatorBlueprintNode = NewObject<UJoyEasingInterpolator>();

	interpolatorBlueprintNode->m_worldContextObject = WorldContextObject;
	interpolatorBlueprintNode->m_waitingTime = FMath::Max(_time, 0.f);
	interpolatorBlueprintNode->m_easingFunction = _easingFunction;

	return interpolatorBlueprintNode;
}

float UJoyEasingInterpolator::_GetRatio()
{
	return UEasingTools::Ease(m_easingFunction, FMath::Clamp<float>(FMath::GetRangePct(0.0f, m_waitingTime, m_currentTime), 0.f, 1.f));
}


//-------------------------------------------------------------
// Curve Interpolator 
//-------------------------------------------------------------

UJoyCurveInterpolator* UJoyCurveInterpolator::StartCurveInterpolator(UObject* WorldContextObject, UCurveFloat* _curveAsset)
{
	UJoyCurveInterpolator* interpolatorBlueprintNode = NewObject<UJoyCurveInterpolator>();

	interpolatorBlueprintNode->m_worldContextObject = WorldContextObject;

	if (_curveAsset)
	{
		_curveAsset->GetTimeRange(interpolatorBlueprintNode->m_curveMinRange, interpolatorBlueprintNode->m_curveMaxRange);
		interpolatorBlueprintNode->m_waitingTime = interpolatorBlueprintNode->m_curveMaxRange;
		interpolatorBlueprintNode->m_curveFloatAsset = _curveAsset;
	}
	else
	{
		interpolatorBlueprintNode->m_waitingTime = 0.f;
	}

	return interpolatorBlueprintNode;
}

float UJoyCurveInterpolator::_GetRatio()
{
	if (!m_curveFloatAsset)
		return 0.f;

	return m_curveFloatAsset->GetFloatValue(FMath::GetRangePct(0.0f, m_curveMaxRange, m_currentTime) * m_curveMaxRange);
}

