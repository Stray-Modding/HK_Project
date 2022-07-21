#include "JoyAsyncTraceMultiAction.h"

class AActor;
class UObject;
class UJoyAsyncTraceMultiAction;

UJoyAsyncTraceMultiAction* UJoyAsyncTraceMultiAction::AsyncSphereTraceMultiByChannel(UObject* _worldContextObject, FVector _start, FVector _end, float _radius, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime) {
    return NULL;
}

UJoyAsyncTraceMultiAction* UJoyAsyncTraceMultiAction::AsyncLineTraceMultiByChannel(UObject* _worldContextObject, FVector _start, FVector _end, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime) {
    return NULL;
}

UJoyAsyncTraceMultiAction* UJoyAsyncTraceMultiAction::AsyncCapsuleTraceMultiByChannel(UObject* _worldContextObject, FVector _start, FVector _end, float _radius, float _halfHeight, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime) {
    return NULL;
}

UJoyAsyncTraceMultiAction* UJoyAsyncTraceMultiAction::AsyncBoxTraceMultiByChannel(UObject* _worldContextObject, FVector _start, FVector _end, FVector _halfSize, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime) {
    return NULL;
}

UJoyAsyncTraceMultiAction::UJoyAsyncTraceMultiAction() {
}

