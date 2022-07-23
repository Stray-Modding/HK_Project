#include "AnimationToolsEditor.h"

#include <Assert.h>


#include <AnimationBlueprintLibrary.h>

#include "JoyLibraryRuntime/AnimationTools.h"
#include "JoyLibraryRuntime/Log.h"
#include "JoyLibraryRuntime/MacroUtils.h"


FTransform GetBoneChainPoseForTime(const UAnimSequence* _animationSequence, FName _boneName, FName _relativeBoneName, float _time, bool _extractRootMotion)
{
	FTransform result = FTransform::Identity;
	TArray<FName> boneChain;
	if (!GetBoneChain(_animationSequence->GetSkeleton(), _relativeBoneName, _boneName, boneChain))
	{
		LOGF_WARNING(TEXT("Failed to find bone chain \"%s\" -> \"%s\" in animation \"%s\"."), *_boneName.ToString(), *_relativeBoneName.ToString(), *_animationSequence->GetName());
		return result;
	}

	for (FName boneName : boneChain)
	{
		FTransform boneTransform;
		UAnimationBlueprintLibrary::GetBonePoseForTime(_animationSequence, boneName, _time, _extractRootMotion, boneTransform);

		result = boneTransform * result;
	}

	return result;
}

void UAnimationToolsEditor::GetBoneChainPoseForTime(const UAnimSequence* _animationSequence, FName _boneName, FName _relativeBoneName, float _time, bool _bExtractRootMotion, FTransform& _pose)
{
	_pose = ::GetBoneChainPoseForTime(_animationSequence, _boneName, _relativeBoneName, _time, _bExtractRootMotion);
}
