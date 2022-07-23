// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoordinatesOrigin.h"

class AManager;
class UCurveFloat;
class AHUD;
class UCanvas;
class FDebugDisplayInfo;

#include "CoreMinimal.h"
#include "Kismet/BlueprintPlatformLibrary.h"
#include <Engine/World.h>



#include "JoyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class JOYLIBRARYRUNTIME_API UJoyGameInstance : public UPlatformGameInstance
{
	GENERATED_BODY()

public:
	virtual void OnStart() override;
	virtual void Shutdown() override;

	UFUNCTION(BlueprintCallable, BlueprintPure) AManager* GetManager(TSubclassOf<AManager> _managerClass, UObject* _worldContextObject = nullptr) const;
	template <typename T> T* GetManager(UWorld* _world = nullptr) const;
	
	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = 8)) void DrawDebugCurve(UCurveFloat* _curve, ECoordinatesOrigin _coordinatesOrigin, FVector2D _position, FVector2D _size, float _curveXMin, float _curveXMax, float _curveValue, const FString& _curveName, FColor _curveColor = FColor::Red, FColor _valueColor = FColor::Yellow, int _samplesCount = 64);

private:
	void _OnPostWorldInitialization(UWorld* World, const UWorld::InitializationValues IVS);

	void _InstantiateManagers(UWorld* _world = nullptr);
	TSubclassOf<AManager> _FindDeepestChildClass(TSubclassOf<AManager> _managerClass) const;
	void _OnHudShowDebugInfo(AHUD* _HUD, UCanvas* _canvas, const FDebugDisplayInfo& _displayInfo, float& YL, float& YPos);

	struct FDebugCurveData
	{
		UCurveFloat* Curve;
		FBox2D Location;
		float CurveXMin;
		float CurveXMax;
		float CurveValue;
		FString CurveName;
		FColor CurveColor;
		FColor ValueColor;
		uint32 SamplesCount;
	};
	TArray<FDebugCurveData> m_debugCurveData;

	UPROPERTY() mutable TArray<AManager*> m_managers;
};

template <typename T>
T* UJoyGameInstance::GetManager(UWorld* _world /*= nullptr*/) const
{
	return Cast<T>(GetManager(T::StaticClass(), _world));
}
