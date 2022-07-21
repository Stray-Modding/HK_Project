#include "JoyUtilities.h"
#include "Templates/SubclassOf.h"

class UStaticMeshComponent;
class AActor;
class UUserWidget;
class UWidgetComponent;
class UShapeComponent;
class UPrimitiveComponent;
class UObject;
class UPathFollowingComponent;
class UNavigationPath;
class ULevelStreaming;
class ULevel;
class UCurveFloat;

void UJoyUtilities::SetWidgetComponentWidgetClass(UWidgetComponent* _component, TSubclassOf<UUserWidget> _class) {
}

void UJoyUtilities::SetShapeNavigationRelevancy(UShapeComponent* _shapeComponent, bool _relevancy) {
}

void UJoyUtilities::SetOverridenLightMapRes(UStaticMeshComponent* _component, int32 _overridenLightMapRes) {
}

void UJoyUtilities::SetOverrideLightMapRes(UStaticMeshComponent* _component, bool _overrideLightMapRes) {
}

void UJoyUtilities::SetLightmapType(UPrimitiveComponent* _component, ELightmapType _lightmapType) {
}

void UJoyUtilities::LogWarning(UObject* WorldContextObject, const FString& _warningMessage) {
}

void UJoyUtilities::LogError(UObject* WorldContextObject, const FString& _errorMessage) {
}

bool UJoyUtilities::IsWorldTearingDown(UObject* _worldContextObject) {
    return false;
}

bool UJoyUtilities::IsWithEditorBuild() {
    return false;
}

bool UJoyUtilities::IsSimulatingInEditor() {
    return false;
}

bool UJoyUtilities::IsShipping() {
    return false;
}

bool UJoyUtilities::IsPlayInEditor(const UObject* _worldContextObject) {
    return false;
}

bool UJoyUtilities::IsAssertEnabled() {
    return false;
}

int32 UJoyUtilities::HashString(const FString& _string) {
    return 0;
}

bool UJoyUtilities::HasActorBegunPlay(const AActor* _actor) {
    return false;
}

bool UJoyUtilities::GetShapeNavigationRelevancy(UShapeComponent* _shapeComponent) {
    return false;
}

float UJoyUtilities::GetPathComponentRemainingLength(const UPathFollowingComponent* _pathFollowingComponent) {
    return 0.0f;
}

void UJoyUtilities::GetPathComponentCurrentPath(const UPathFollowingComponent* _pathFollowingComponent, UNavigationPath* _outPath) {
}

FName UJoyUtilities::GetLevelStreamingAssetName(const ULevelStreaming* _levelStreaming) {
    return NAME_None;
}

FName UJoyUtilities::GetLevelAssetName(const ULevel* _level) {
    return NAME_None;
}

int32 UJoyUtilities::GetCurrentFrameNumber() {
    return 0;
}

float UJoyUtilities::GetBoxRadius(const FBox& _box) {
    return 0.0f;
}

FVector UJoyUtilities::GetBoxExtent(const FBox& _box) {
    return FVector{};
}

FVector UJoyUtilities::GetBoxCenter(const FBox& _box) {
    return FVector{};
}

FBox UJoyUtilities::GetActorVisualBounds(const AActor* _actor) {
    return FBox{};
}

void UJoyUtilities::ForceGarbageCollection(bool _fullPurge) {
}

AActor* UJoyUtilities::FinishSpawningActor(AActor* Actor, const FTransform& SpawnTransform) {
    return NULL;
}

void UJoyUtilities::DrawDebugCurve(UObject* _worldContextObject, UCurveFloat* _curve, TEnumAsByte<ECoordinatesOrigin> _coordinatesOrigin, FVector2D _position, FVector2D _size, float _curveXMin, float _curveXMax, float _curveValue, const FString& _curveName, FColor _curveColor, FColor _valueColor, int32 _samplesCount) {
}

void UJoyUtilities::DebugBreak() {
}

FBox UJoyUtilities::CombineBoxes(const FBox& _a, const FBox& _b) {
    return FBox{};
}

FName UJoyUtilities::CollisionProfileNameToName(const FCollisionProfileName& _collisionProfileName) {
    return NAME_None;
}

AActor* UJoyUtilities::BeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner) {
    return NULL;
}

void UJoyUtilities::Assert(bool _condition, const FString& _message) {
}

UJoyUtilities::UJoyUtilities() {
}

