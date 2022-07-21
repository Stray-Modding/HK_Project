#pragma once
#include "CoreMinimal.h"
#include "JoyAsyncTraceAction.h"
#include "JoyAsyncTraceMultiDoneDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "JoyAsyncTraceMultiAction.generated.h"

class AActor;
class UObject;
class UJoyAsyncTraceMultiAction;

UCLASS()
class JOYLIBRARYRUNTIME_API UJoyAsyncTraceMultiAction : public UJoyAsyncTraceAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FJoyAsyncTraceMultiDone TraceDone;
    
    UJoyAsyncTraceMultiAction();
    UFUNCTION(BlueprintCallable)
    static UJoyAsyncTraceMultiAction* AsyncSphereTraceMultiByChannel(UObject* _worldContextObject, FVector _start, FVector _end, float _radius, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    
    UFUNCTION(BlueprintCallable)
    static UJoyAsyncTraceMultiAction* AsyncLineTraceMultiByChannel(UObject* _worldContextObject, FVector _start, FVector _end, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    
    UFUNCTION(BlueprintCallable)
    static UJoyAsyncTraceMultiAction* AsyncCapsuleTraceMultiByChannel(UObject* _worldContextObject, FVector _start, FVector _end, float _radius, float _halfHeight, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    
    UFUNCTION(BlueprintCallable)
    static UJoyAsyncTraceMultiAction* AsyncBoxTraceMultiByChannel(UObject* _worldContextObject, FVector _start, FVector _end, FVector _halfSize, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    
};

