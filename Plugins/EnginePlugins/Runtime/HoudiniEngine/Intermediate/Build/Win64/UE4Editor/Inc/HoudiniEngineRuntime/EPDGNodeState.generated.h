// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EPDGNodeState_generated_h
#error "EPDGNodeState.generated.h already included, missing '#pragma once' in EPDGNodeState.h"
#endif
#define HOUDINIENGINERUNTIME_EPDGNodeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGNodeState_h


#define FOREACH_ENUM_EPDGNODESTATE(op) \
	op(EPDGNodeState::None) \
	op(EPDGNodeState::Dirtied) \
	op(EPDGNodeState::Dirtying) \
	op(EPDGNodeState::Cooking) \
	op(EPDGNodeState::Cook_Complete) \
	op(EPDGNodeState::Cook_Failed) 

enum class EPDGNodeState : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGNodeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
