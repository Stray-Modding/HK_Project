// Fill out your copyright notice in the Description page of Project Settings.

#include "JoyGameInstance.h"

#include <GameFramework/HUD.h>
#include <Engine/World.h>
#include <Engine/Engine.h>
#include <Kismet/GameplayStatics.h>
#include <AssetRegistryModule.h>

#include "Assert.h"
#include "Draw.h"
#include "Log.h"
#include "MacroUtils.h"
#include "JoyLibraryRuntime/Manager.h"


void UJoyGameInstance::OnStart()
{
	Super::OnStart();

	AHUD::OnShowDebugInfo.AddUObject(this, &UJoyGameInstance::_OnHudShowDebugInfo);

	FWorldDelegates::OnPostWorldInitialization.AddUObject(this, &UJoyGameInstance::_OnPostWorldInitialization);

	// FORCE MANAGERS INSTANTIATION
	_InstantiateManagers();
}

void UJoyGameInstance::Shutdown()
{
	AHUD::OnShowDebugInfo.RemoveAll(this);

	Super::Shutdown();
}

AManager* UJoyGameInstance::GetManager(TSubclassOf<AManager> _managerClass, UObject* _worldContextObject /*= nullptr*/) const
{
	UWorld* world = nullptr;
	if (_worldContextObject)
	{
		world = _worldContextObject->GetWorld();
	}
	else
	{
		world = WorldContext->World();
	}

	JOY_ASSERT(world);

	for (int32 i = 0; i < m_managers.Num();)
	{
		AManager* manager = m_managers[i];

		if (manager)
		{
			if (manager->GetClass() == _managerClass || manager->GetClass()->IsChildOf(_managerClass))
				return manager;

			++i;
		}
		else
		{
			m_managers.RemoveAt(i);
		}
	}

	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(world, _managerClass, actors);
	JOY_ASSERT_MSGF(actors.Num() <= 1, TEXT("More than one Manager %s Instantiated in world. I have a bad feeling about this."), *_managerClass->GetName());

	// NO MANAGER FOUND, INSTANTIATE IT

	if (actors.Num() == 0)
	{
		TSubclassOf<AManager> deepestChildClass = _FindDeepestChildClass(_managerClass);
		if (deepestChildClass.Get())
		{
			FActorSpawnParameters actorSpawnParameters;
			actorSpawnParameters.bDeferConstruction = true;
			actorSpawnParameters.bAllowDuringConstructionScript= true;

			AManager* manager = world->SpawnActorAbsolute<AManager>(deepestChildClass, FTransform::Identity, actorSpawnParameters);
			JOY_ASSERT(manager);
			m_managers.Add(manager);

			UGameplayStatics::FinishSpawningActor(manager, FTransform::Identity);

			return manager;
		}
	}
	else
	{
		AManager* manager = Cast<AManager>(actors[0]);
		JOY_ASSERT(manager);
		m_managers.Add(manager);
		return manager;
	}

	return nullptr;
}

void UJoyGameInstance::DrawDebugCurve(UCurveFloat* _curve, ECoordinatesOrigin _coordinatesOrigin, FVector2D _position, FVector2D _size, float _curveXMin, float _curveXMax, float _curveValue, const FString& _curveName, FColor _curveColor /*= FColor::Red*/, FColor _valueColor /*= FColor::Yellow*/, int _samplesCount /*= 64*/)
{
	FVector2D viewportSize;
	GEngine->GameViewport->GetViewportSize(viewportSize);

	FBox2D location;

	switch (_coordinatesOrigin)
	{
	case CoordinatesOrigin_TopLeft:
		location.Min = _position;
		break;
	case CoordinatesOrigin_Top:
		location.Min = FVector2D(viewportSize.X * .5f, 0.f) + _position;
		break;
	case CoordinatesOrigin_TopRight:
		location.Min = FVector2D(viewportSize.X, 0.f) + _position;
		break;
	case CoordinatesOrigin_Right:
		location.Min = FVector2D(viewportSize.X, viewportSize.Y * .5f) + _position;
		break;
	case CoordinatesOrigin_BottomRight:
		location.Min = FVector2D(viewportSize.X, viewportSize.Y) + _position;
		break;
	case CoordinatesOrigin_Bottom:
		location.Min = FVector2D(viewportSize.X * .5f, viewportSize.Y) + _position;
		break;
	case CoordinatesOrigin_BottomLeft:
		location.Min = FVector2D(0.f, viewportSize.Y) + _position;
		break;
	case CoordinatesOrigin_Left:
		location.Min = FVector2D(0.f, viewportSize.Y * .5f) + _position;
		break;
	default:
		break;
	}
	location.Max = location.Min + _size;

	FDebugCurveData data;
	data.Curve = _curve;
	data.Location = location;
	data.CurveXMin = _curveXMin;
	data.CurveXMax = _curveXMax;
	data.CurveValue = _curveValue;
	data.CurveName = _curveName;
	data.CurveColor = _curveColor;
	data.ValueColor = _valueColor;
	data.SamplesCount = _samplesCount;
	m_debugCurveData.Add(data);
}

void UJoyGameInstance::_OnPostWorldInitialization(UWorld* World, const UWorld::InitializationValues IVS)
{
	_InstantiateManagers(World);
}

void UJoyGameInstance::_InstantiateManagers(UWorld* _world /*= nullptr*/)
{
	for (TObjectIterator<UClass> it; it; ++it)
	{
		UClass* clss = *it;
		if (!clss->IsChildOf(AManager::StaticClass()) || clss == AManager::StaticClass())
			continue;

		GetManager(clss, _world);
	}
}

//NOTE: May be made generic and moved to some sort of ReflectionTools file
TSubclassOf<AManager> UJoyGameInstance::_FindDeepestChildClass(TSubclassOf<AManager> _managerClass) const
{
	TSubclassOf<AManager> deepestChildClass;
	for (TObjectIterator<UClass> it; it; ++it)
	{
		UClass* clss = *it;
		if (!clss->IsChildOf(_managerClass))
			continue;

		if (clss->HasAnyClassFlags(CLASS_Abstract))
			continue;

		FString className = clss->GetName();
		if (className.StartsWith(TEXT("SKEL_")) || className.StartsWith(TEXT("REINST_")))
			continue;

		deepestChildClass = clss;
	}
	return deepestChildClass;
}

void UJoyGameInstance::_OnHudShowDebugInfo(AHUD* _HUD, UCanvas* _canvas, const FDebugDisplayInfo& _displayInfo, float& YL, float& YPos)
{
	for (const FDebugCurveData& data : m_debugCurveData)
	{
		DrawDebugCanvasCurve(_canvas, data.Curve, data.Location, data.CurveXMin, data.CurveXMax, data.CurveValue, data.CurveName, data.CurveColor, data.ValueColor, data.SamplesCount);
	}
	m_debugCurveData.Empty();
}
