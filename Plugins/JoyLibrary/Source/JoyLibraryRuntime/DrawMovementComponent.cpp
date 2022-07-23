// Fill out your copyright notice in the Description page of Project Settings.


#include "DrawMovementComponent.h"

#include <Kismet/GameplayStatics.h>

// Sets default values for this component's properties
UDrawMovementComponent::UDrawMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickGroup = TG_LastDemotable;
	// ...
}


// Called when the game starts
void UDrawMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	_InternalSetDrawEnabled(StartEnabled);
}


// Called every frame
void UDrawMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float newAccumulator = m_accumulator + DeltaTime;
	bool shouldDraw = false;

	if (IsDrawEnabled())
	{
		if (UGameplayStatics::GetGlobalTimeDilation(GetWorld()) >= 1.f)
		{
			shouldDraw = true;
		}
		else
		{
			float interval = 1.f / 60.f;
			shouldDraw = FMath::TruncToFloat(m_accumulator / interval) != FMath::TruncToFloat(newAccumulator / interval);
		}
	}

	if (shouldDraw)
	{
		bool persistent = DrawLifeTime < 0.f;
		switch (DrawType)
		{
		case DrawMovementType_Line:
			DrawDebugLine(GetWorld(), GetComponentLocation(), GetComponentLocation() + FVector(0.f, 0.f, DrawHeight), DrawColor, persistent, DrawLifeTime, 0, DrawThickness);
			break;
		case DrawMovementType_Gizmo:
			DrawDebugCoordinateSystem(GetWorld(), GetComponentLocation(), GetComponentRotation(), DrawHeight, persistent, DrawLifeTime, 0, DrawThickness);
			break;
		default:
			break;
		}
	}

	m_accumulator = newAccumulator;
}

void UDrawMovementComponent::SetDrawEnabled(bool _enabled)
{
	if (m_isDrawEnabled == _enabled)
		return;

	_InternalSetDrawEnabled(_enabled);
}

void UDrawMovementComponent::Clear()
{
	FlushPersistentDebugLines(GetWorld());
}

void UDrawMovementComponent::_InternalSetDrawEnabled(bool _enabled)
{
	m_isDrawEnabled = _enabled;

	if (m_isDrawEnabled)
	{
		m_accumulator = 0.f;
		PrimaryComponentTick.SetTickFunctionEnable(true);
	}
	else
	{
		PrimaryComponentTick.SetTickFunctionEnable(false);
	}
}

