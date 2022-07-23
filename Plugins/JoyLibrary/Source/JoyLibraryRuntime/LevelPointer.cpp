// Fill out your copyright notice in the Description page of Project Settings.

#include "LevelPointer.h"

FString ULevelPointerFunctionLibrary::GetLevelName(const FLevelPointer& _levelPointer)
{
	return _levelPointer.Level.GetAssetName();
}
