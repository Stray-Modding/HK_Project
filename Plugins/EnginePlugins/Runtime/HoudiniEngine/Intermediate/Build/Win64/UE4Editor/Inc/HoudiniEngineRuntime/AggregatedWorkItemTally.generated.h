// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_AggregatedWorkItemTally_generated_h
#error "AggregatedWorkItemTally.generated.h already included, missing '#pragma once' in AggregatedWorkItemTally.h"
#endif
#define HOUDINIENGINERUNTIME_AggregatedWorkItemTally_generated_h

#define Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_AggregatedWorkItemTally_h_8_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TotalWorkItems() { return STRUCT_OFFSET(FAggregatedWorkItemTally, TotalWorkItems); } \
	FORCEINLINE static uint32 __PPO__WaitingWorkItems() { return STRUCT_OFFSET(FAggregatedWorkItemTally, WaitingWorkItems); } \
	FORCEINLINE static uint32 __PPO__ScheduledWorkItems() { return STRUCT_OFFSET(FAggregatedWorkItemTally, ScheduledWorkItems); } \
	FORCEINLINE static uint32 __PPO__CookingWorkItems() { return STRUCT_OFFSET(FAggregatedWorkItemTally, CookingWorkItems); } \
	FORCEINLINE static uint32 __PPO__CookedWorkItems() { return STRUCT_OFFSET(FAggregatedWorkItemTally, CookedWorkItems); } \
	FORCEINLINE static uint32 __PPO__ErroredWorkItems() { return STRUCT_OFFSET(FAggregatedWorkItemTally, ErroredWorkItems); } \
	FORCEINLINE static uint32 __PPO__CookCancelledWorkItems() { return STRUCT_OFFSET(FAggregatedWorkItemTally, CookCancelledWorkItems); } \
	typedef FWorkItemTallyBase Super;


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FAggregatedWorkItemTally>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_AggregatedWorkItemTally_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
