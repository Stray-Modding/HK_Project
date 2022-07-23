#pragma once

#include <CoreMinimal.h>

#include "AnimationToolsEditor.generated.h"

JOYLIBRARYEDITOR_API FTransform GetBoneChainPoseForTime(const UAnimSequence* _animationSequence, FName _boneName, FName _relativeBoneName, float _time, bool _bExtractRootMotion);

/**
 *
 */
UCLASS()
class JOYLIBRARYEDITOR_API UAnimationToolsEditor : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Joy|Animation") static void GetBoneChainPoseForTime(const UAnimSequence* _animationSequence, FName _boneName, FName _relativeBoneName, float _time, bool _extractRootMotion, FTransform& _pose);
};

