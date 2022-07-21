// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniMultiParmModificationType_generated_h
#error "EHoudiniMultiParmModificationType.generated.h already included, missing '#pragma once' in EHoudiniMultiParmModificationType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniMultiParmModificationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stray_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniMultiParmModificationType_h


#define FOREACH_ENUM_EHOUDINIMULTIPARMMODIFICATIONTYPE(op) \
	op(EHoudiniMultiParmModificationType::None) \
	op(EHoudiniMultiParmModificationType::Inserted) \
	op(EHoudiniMultiParmModificationType::Removed) \
	op(EHoudiniMultiParmModificationType::Modified) 

enum class EHoudiniMultiParmModificationType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniMultiParmModificationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
