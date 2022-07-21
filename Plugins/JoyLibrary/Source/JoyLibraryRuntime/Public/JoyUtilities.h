#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ECoordinatesOrigin.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "JoyUtilities.generated.h"

class UCurveFloat;
class AActor;
class UStaticMeshComponent;
class UUserWidget;
class UWidgetComponent;
class UShapeComponent;
class UPrimitiveComponent;
class UObject;
class UPathFollowingComponent;
class UNavigationPath;
class ULevelStreaming;
class ULevel;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UJoyUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJoyUtilities();
    UFUNCTION(BlueprintCallable)
    static void SetWidgetComponentWidgetClass(UWidgetComponent* _component, TSubclassOf<UUserWidget> _class);
    
    UFUNCTION(BlueprintCallable)
    static void SetShapeNavigationRelevancy(UShapeComponent* _shapeComponent, bool _relevancy);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverridenLightMapRes(UStaticMeshComponent* _component, int32 _overridenLightMapRes);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideLightMapRes(UStaticMeshComponent* _component, bool _overrideLightMapRes);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightmapType(UPrimitiveComponent* _component, ELightmapType _lightmapType);
    
    UFUNCTION(BlueprintCallable)
    static void LogWarning(UObject* WorldContextObject, const FString& _warningMessage);
    
    UFUNCTION(BlueprintCallable)
    static void LogError(UObject* WorldContextObject, const FString& _errorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWorldTearingDown(UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWithEditorBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSimulatingInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayInEditor(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAssertEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 HashString(const FString& _string);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasActorBegunPlay(const AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetShapeNavigationRelevancy(UShapeComponent* _shapeComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPathComponentRemainingLength(const UPathFollowingComponent* _pathFollowingComponent);
    
    UFUNCTION(BlueprintCallable)
    static void GetPathComponentCurrentPath(const UPathFollowingComponent* _pathFollowingComponent, UNavigationPath* _outPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetLevelStreamingAssetName(const ULevelStreaming* _levelStreaming);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetLevelAssetName(const ULevel* _level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentFrameNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBoxRadius(const FBox& _box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetBoxExtent(const FBox& _box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetBoxCenter(const FBox& _box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox GetActorVisualBounds(const AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    static void ForceGarbageCollection(bool _fullPurge);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FinishSpawningActor(AActor* Actor, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCurve(UObject* _worldContextObject, UCurveFloat* _curve, TEnumAsByte<ECoordinatesOrigin> _coordinatesOrigin, FVector2D _position, FVector2D _size, float _curveXMin, float _curveXMax, float _curveValue, const FString& _curveName, FColor _curveColor, FColor _valueColor, int32 _samplesCount);
    
    UFUNCTION(BlueprintCallable)
    static void DebugBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox CombineBoxes(const FBox& _a, const FBox& _b);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CollisionProfileNameToName(const FCollisionProfileName& _collisionProfileName);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void Assert(bool _condition, const FString& _message);
    
};

