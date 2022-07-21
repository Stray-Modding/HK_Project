// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EPDGLinkState_generated_h
#error "EPDGLinkState.generated.h already included, missing '#pragma once' in EPDGLinkState.h"
#endif
#define HOUDINIENGINERUNTIME_EPDGLinkState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGLinkState_h


#define FOREACH_ENUM_EPDGLINKSTATE(op) \
	op(EPDGLinkState::Inactive) \
	op(EPDGLinkState::Linking) \
	op(EPDGLinkState::Linked) \
	op(EPDGLinkState::Error_Not_Linked) 

enum class EPDGLinkState : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGLinkState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
