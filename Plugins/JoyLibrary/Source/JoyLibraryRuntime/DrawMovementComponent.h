// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DrawMovementComponent.generated.h"

UENUM(BlueprintType)
enum EDrawMovementType
{
	DrawMovementType_Line,
	DrawMovementType_Gizmo,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JOYLIBRARYRUNTIME_API UDrawMovementComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDrawMovementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable) void SetDrawEnabled(bool _enabled);
	UFUNCTION(BlueprintPure) bool IsDrawEnabled() const { return m_isDrawEnabled; }
	UFUNCTION(BlueprintCallable) void Clear();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float DrawLifeTime = -1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float DrawHeight = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float DrawThickness = .5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StartEnabled = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor DrawColor = FColor::Blue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EDrawMovementType> DrawType = DrawMovementType_Line;

private:
	void _InternalSetDrawEnabled(bool _enabled);

	bool m_isDrawEnabled = false;
	float m_accumulator = 0.f;
};
