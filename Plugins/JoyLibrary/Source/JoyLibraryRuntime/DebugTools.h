// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <Engine/Canvas.h>

JOYLIBRARYRUNTIME_API void ToggleShowDebugEnabled(UWorld* _world);
JOYLIBRARYRUNTIME_API void SetShowDebugEnabled(UWorld* _world, bool _enabled);
JOYLIBRARYRUNTIME_API bool IsShowDebugEnabled(UWorld* _world);
JOYLIBRARYRUNTIME_API bool IsActorDebugTarget(AActor* _actor);
JOYLIBRARYRUNTIME_API void SetActorAsDebugTarget(AActor* _actor);

template<typename... Args>
void DebugCanvasPrintf(UCanvas* _canvas, float _xOffset, const TCHAR* _fmt, Args... _args)
{
	TCHAR fmtBuffer[256] = { 0 };
	wcscpy_s(fmtBuffer, 256, _fmt);

	FDisplayDebugManager& DisplayDebugManager = _canvas->DisplayDebugManager;
	FString s = FString::Printf(fmtBuffer, _args...);
	DisplayDebugManager.DrawString(s, _xOffset);
}

template<typename... Args>
void DebugCanvasPrintf(UCanvas* _canvas, const TCHAR* _fmt, Args... _args)
{
	DebugCanvasPrintf(_canvas, 0.f, _fmt, _args...);
}
