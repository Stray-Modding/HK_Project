// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoordinatesOrigin.h"
#include "Components/WidgetComponent.h"

class UPathFollowingComponent;
class UNavigationPath;
class UCameraComponent;
class USkeletalMeshComponent;
class UAnimationAsset;
class USplineComponent;
class ULevel;
class ULevelStreaming;

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Engine/EngineTypes.h>
#include <Engine/CollisionProfile.h>
#include <Components/SplineComponent.h>


#include "JoyBlueprintFunctionLibrary.generated.h"


/**
 * 
 */
UCLASS()
class JOYLIBRARYRUNTIME_API UJoyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Joy|Debug") static int GetCurrentFrameNumber();
	UFUNCTION(BlueprintPure, Category = "Joy|Debug") static bool IsWithEditorBuild();
	UFUNCTION(BlueprintPure, Category = "Joy|Debug") static bool IsAssertEnabled();
	UFUNCTION(BlueprintPure, Category = "Joy|Debug", meta = (WorldContext = "_worldContextObject")) static bool IsPlayInEditor(UObject* _worldContextObject);
	UFUNCTION(BlueprintPure, Category = "Joy|Debug") static bool IsSimulatingInEditor();
	UFUNCTION(BlueprintCallable, Category = "Joy|Debug", meta = (WorldContext = "_worldContextObject", AdvancedDisplay = 9)) static void DrawDebugCurve(UObject* _worldContextObject, UCurveFloat* _curve, ECoordinatesOrigin _coordinatesOrigin, FVector2D _position, FVector2D _size, float _curveXMin, float _curveXMax, float _curveValue, const FString& _curveName, FColor _curveColor = FColor::Red, FColor _valueColor = FColor::Yellow, int _samplesCount = 64);
	UFUNCTION(BlueprintCallable, Category = "Joy|Debug") static void Assert(bool _condition, FString _message);

	UFUNCTION(BlueprintCallable, Category = "Joy") static void SetWidgetComponentWidgetClass(UWidgetComponent* _component, TSubclassOf<UUserWidget> _class);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy") static int HashString(const FString& _string);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy|Navigation") static bool GetShapeNavigationRelevancy(UShapeComponent* _shapeComponent);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy|Navigation") static float GetPathComponentRemainingLength(const UPathFollowingComponent* _pathFollowingComponent);
	UFUNCTION(BlueprintCallable, Category = "Joy|Navigation") static void SetShapeNavigationRelevancy(UShapeComponent* _shapeComponent, bool _relevancy);
	UFUNCTION(BlueprintCallable, Category = "Joy|Navigation") static void GetPathComponentCurrentPath(const UPathFollowingComponent* _pathFollowingComponent, UNavigationPath* _outPath);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy|Actor") static bool HasActorBegunPlay(const AActor* _actor);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy") static FBox GetActorVisualBounds(const AActor* _actor);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy") static FBox CombineBoxes(const FBox& _A, const FBox& _B);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy") static FVector GetBoxCenter(const FBox& _box);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy") static FVector GetBoxExtent(const FBox& _box);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy") static float GetBoxRadius(const FBox& _box);

	UFUNCTION(BlueprintPure, Category = "Joy") static FName CollisionProfileNameToName(const FCollisionProfileName& _collisionProfileName);

	UFUNCTION(BlueprintPure, Category = "Joy") static FName GetLevelAssetName(const ULevel* _level);
	UFUNCTION(BlueprintPure, Category = "Joy") static FName GetLevelStreamingAssetName(const ULevelStreaming* _levelStreaming);


	UFUNCTION(BlueprintPure, Category = "Joy|World", meta = (WorldContext = "_worldContextObject")) static bool IsWorldTearingDown(UObject* _worldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Joy|Log", meta = (WorldContext = "WorldContextObject")) static void LogError(UObject* WorldContextObject, const FString _errorMessage);
	UFUNCTION(BlueprintCallable, Category = "Joy|Log", meta = (WorldContext = "WorldContextObject")) static void LogWarning(UObject* WorldContextObject, const FString _warningMessage);

	UFUNCTION(BlueprintCallable, Category = "Joy") static void DebugBreak();

	/** Spawns an instance of an actor class, but does not automatically run its construction script.  */
	UFUNCTION(BlueprintCallable, Category = "Joy|Spawning", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true")) static  AActor* BeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined, AActor* Owner = nullptr);

	/** 'Finish' spawning an actor.  This will run the construction script. */
	UFUNCTION(BlueprintCallable, Category = "Joy|Spawning", meta = (UnsafeDuringActorConstruction = "true")) static AActor* FinishSpawningActor(AActor* Actor, const FTransform& SpawnTransform);
};

 
