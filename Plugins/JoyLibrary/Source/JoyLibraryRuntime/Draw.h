#pragma once

class UCanvas;
class UCurveFloat;
class USplineComponent;

#include <DrawDebugHelpers.h>

// NOTE(Remi|2019/04/08): Can be overriden by outside module by defining those macros before first include (not tested)
#ifndef JOY_DRAW_DEFAULT_COLOR
	#define JOY_DRAW_DEFAULT_COLOR FColor::Purple
#endif

#ifndef JOY_DRAW_DEFAULT_THICKNESS
	#define JOY_DRAW_DEFAULT_THICKNESS (.5f)
#endif

#define DRAW_POINT(position, color, thickness) DrawDebugPoint(GetWorld(), position, thickness, color)
#define DRAW_POINT_SIMPLE(position) DRAW_POINT(position, JOY_DRAW_DEFAULT_COLOR, 5.f)

#define DRAW_LINE(start, end, color, thickness) DrawDebugLine(GetWorld(), start, end, color, false, -1.f, 0.f, thickness)
#define DRAW_LINE_SIMPLE(start, end) DRAW_LINE(start, end, JOY_DRAW_DEFAULT_COLOR, JOY_DRAW_DEFAULT_THICKNESS)

#define DRAW_SPHERE(position, radius, color, thickness) DrawDebugSphere(GetWorld(), position, radius, 16, color, false, -1.f, 0, thickness)
#define DRAW_SPHERE_SIMPLE(position, radius) DRAW_SPHERE(position, radius, JOY_DRAW_DEFAULT_COLOR, JOY_DRAW_DEFAULT_THICKNESS)

#define DRAW_CIRCLE(position, radius, rotationQuat, color, thickness) DrawCircle(GetWorld(), position, rotationQuat.GetForwardVector(), rotationQuat.GetRightVector(), color, radius, 16, false, -1.f, 0, thickness)
#define DRAW_CIRCLE_SIMPLE(position, radius, rotationQuat) DRAW_CIRCLE(position, radius, rotationQuat, JOY_DRAW_DEFAULT_COLOR, JOY_DRAW_DEFAULT_THICKNESS)

#define DRAW_VECTOR(start, vector, color, thickness) DrawDebugVector(GetWorld(), start, vector, color, false, -1.f, 0, thickness)
#define DRAW_VECTOR_SIMPLE(start, vector) DRAW_VECTOR(start, vector, JOY_DRAW_DEFAULT_COLOR, JOY_DRAW_DEFAULT_THICKNESS)

#define DRAW_TEXT(position, color, fmt, ...) \
{\
	DrawDebugString(GetWorld(), position, *FString::Printf(TEXT(fmt), __VA_ARGS__), nullptr, color, 0.0f, true);\
}
#define DRAW_TEXT_SIMPLE(position, fmt, ...) DRAW_TEXT(position, JOY_DRAW_DEFAULT_COLOR, fmt, __VA_ARGS__)

#define DRAW_PLANE(referencePoint, plane, size, color, thickness) DrawDebugPlane(GetWorld(), referencePoint, plane, size, color, false, -1.f, 0, thickness)
#define DRAW_PLANE_SIMPLE(referencePoint, plane, size) DRAW_PLANE(referencePoint, plane, size, JOY_DRAW_DEFAULT_COLOR, JOY_DRAW_DEFAULT_THICKNESS)

#define DRAW_CAPSULE(start, end, radius, color, thickness) DrawDebugCapsule(GetWorld(), start, end, radius, color, false, -1.f, 0, thickness)
#define DRAW_CAPSULE_SIMPLE(start, end, radius) DRAW_CAPSULE(start, end, radius, JOY_DRAW_DEFAULT_COLOR, JOY_DRAW_DEFAULT_THICKNESS)

#define DRAW_ARROW(start, end, size, color, thickness)\
{\
	DrawDebugDirectionalArrow(GetWorld(), start, end, size, color, false, 0.f, 1, thickness);\
}
#define DRAW_ARROW_SIMPLE(start, end, size) DRAW_ARROW(start, end, size, JOY_DRAW_DEFAULT_COLOR, JOY_DRAW_DEFAULT_THICKNESS)

JOYLIBRARYRUNTIME_API void DrawDebugVector(const UWorld* _world, const FVector& _start, const FVector& _vector, const FColor& _color = JOY_DRAW_DEFAULT_COLOR, bool _bPersistentLines = false, float _lifeTime = -1.f, uint8 _depthPriority = 0, float _thickness = 0);
JOYLIBRARYRUNTIME_API void DrawDebugPlane(const UWorld* _world, const FVector& _referencePoint, const FPlane& _plane, float _planeSize, const FColor& _color = JOY_DRAW_DEFAULT_COLOR, bool _bPersistentLines = false, float _lifeTime = -1.f, uint8 _depthPriority = 0, float _thickness = 0);
JOYLIBRARYRUNTIME_API void DrawDebugCapsule(const UWorld* _world, const FVector& _start, const FVector& _end, float _radius, const FColor& _color = JOY_DRAW_DEFAULT_COLOR, bool _bPersistentLines = false, float _lifeTime = -1.f, uint8 _depthPriority = 0, float _thickness = 0);

JOYLIBRARYRUNTIME_API void DrawDebug2DCone(const UWorld* _world, const FVector& _location, const FQuat& _rotation, float _halfHangleDeg, float _length, const FColor& _color = JOY_DRAW_DEFAULT_COLOR, uint32 _samplingSteps = 32, bool _bPersistentLines = false, float _lifeTime = -1.f, uint8 _depthPriority = 0);
JOYLIBRARYRUNTIME_API void DrawDebug2DConeOutline(const UWorld* _world, const FVector& _location, const FQuat& _rotation, float _halfHangleDeg, float _length, const FColor& _color = JOY_DRAW_DEFAULT_COLOR, uint32 _samplingSteps = 32, bool _bPersistentLines = false, float _lifeTime = -1.f, uint8 _depthPriority = 0, float _thickness = 0);
JOYLIBRARYRUNTIME_API void DrawPrimitiveComponent(const UPrimitiveComponent* _component, FColor _color = JOY_DRAW_DEFAULT_COLOR, float _thickness = JOY_DRAW_DEFAULT_THICKNESS);

enum EDrawSplineComponentFlags
{
	DrawSplineComponent_Curve = 1 << 0,
	DrawSplineComponent_Points = 1 << 1,
	DrawSplineComponent_Tangents = 1 << 2,
};
JOYLIBRARYRUNTIME_API void DrawSplineComponent(const UWorld* _world, const USplineComponent* _spline, const FColor& _color = JOY_DRAW_DEFAULT_COLOR, bool _bPersistentLines = false, float _lifeTime = -1.f, uint8 _depthPriority = 0, float _thickness = 1.f, uint8 _drawFlags = (DrawSplineComponent_Curve | DrawSplineComponent_Points), uint8 _segmentIterationCount = 16);

JOYLIBRARYRUNTIME_API void DrawDebugCanvasString(UCanvas* _canvas, FVector2D _location, const FString& _string, FColor _color);
JOYLIBRARYRUNTIME_API void DrawDebugCanvasCurve(UCanvas* _canvas, UCurveFloat* _curve, FBox2D _location, float _curveXMin, float _curveXMax, float _curveValue, const FString& _curveName, FColor _curveColor = FColor::Red, FColor _valueColor = FColor::Yellow, uint32 _samplesCount = 64);
