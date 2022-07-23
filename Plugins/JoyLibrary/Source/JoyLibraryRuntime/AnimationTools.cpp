#include "AnimationTools.h"

#include <Assert.h>

#include <Animation/AnimationAsset.h>
#include <Animation/AnimInstance.h>
#include <Animation/AnimNode_StateMachine.h>
#include <Animation/AnimSequence.h>
#include <Animation/AnimSingleNodeInstance.h>
#include <Animation/AnimStateMachineTypes.h>
#include <Animation/BlendSpaceBase.h>

#include <Kismet/KismetMathLibrary.h>

//#include <AnimationBlueprintLibrary.h>
#include <Components/SkeletalMeshComponent.h>

#include "Assert.h"
#include "Log.h"
#include "MacroUtils.h"

float GetAnimationStateRelevantAnimTime(UAnimInstance* _animInstance, FName _stateMachineName, FName _stateName)
{
	int32 machineIndex = _animInstance->GetStateMachineIndex(_stateMachineName);
	if (machineIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown State Machine \"%s\"."), *_stateMachineName.ToString());
		return 0.f;
	}
	const FBakedAnimationStateMachine* machinePtr = _animInstance->GetStateMachineInstanceDesc(_stateMachineName);
	JOY_ASSERT(machinePtr);
	int32 stateIndex = machinePtr->FindStateIndex(_stateName);
	if (stateIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown State \"%s\" in StateMachine \"%s\"."), *_stateMachineName.ToString(), *_stateName.ToString());
		return 0.f;
	}

	return _animInstance->GetRelevantAnimTime(machineIndex, stateIndex);
}

float GetAnimationStateRelevantAnimTimeRemaining(UAnimInstance* _animInstance, FName _stateMachineName, FName _stateName)
{
	int32 machineIndex = _animInstance->GetStateMachineIndex(_stateMachineName);
	if (machineIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown State Machine \"%s\"."), *_stateMachineName.ToString());
		return 0.f;
	}
	const FBakedAnimationStateMachine* machinePtr = _animInstance->GetStateMachineInstanceDesc(_stateMachineName);
	JOY_ASSERT(machinePtr);
	int32 stateIndex = machinePtr->FindStateIndex(_stateName);
	if (stateIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown State \"%s\" in StateMachine \"%s\"."), *_stateMachineName.ToString(), *_stateName.ToString());
		return 0.f;
	}

	return _animInstance->GetRelevantAnimTimeRemaining(machineIndex, stateIndex);
}

float GetAnimationStateRelevantAnimTimeRemainingFraction(UAnimInstance* _animInstance, FName _stateMachineName, FName _stateName)
{
	int32 machineIndex = _animInstance->GetStateMachineIndex(_stateMachineName);
	if (machineIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown State Machine \"%s\"."), *_stateMachineName.ToString());
		return 0.f;
	}
	const FBakedAnimationStateMachine* machinePtr = _animInstance->GetStateMachineInstanceDesc(_stateMachineName);
	JOY_ASSERT(machinePtr);
	int32 stateIndex = machinePtr->FindStateIndex(_stateName);
	if (stateIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown State \"%s\" in StateMachine \"%s\"."), *_stateMachineName.ToString(), *_stateName.ToString());
		return 0.f;
	}

	return _animInstance->GetRelevantAnimTimeRemainingFraction(machineIndex, stateIndex);
}

const FAnimNotifyEvent* FindAnimationNotify(const UAnimSequence* _animation, FName _notifyName)
{
	TArray<FAnimNotifyEventReference> notifyReferences;
	_animation->GetAnimNotifies(0.f, const_cast<UAnimSequence*>(_animation)->GetPlayLength(), false, notifyReferences);
	for (const FAnimNotifyEventReference& ref : notifyReferences)
	{
		const FAnimNotifyEvent* evt = ref.GetNotify();
		if (evt->NotifyName == _notifyName)
		{
			return evt;
		}
	}
	return nullptr;
}

float FindAnimationNotifyTriggerTime(const UAnimSequence* _animation, FName _notifyName)
{
	const FAnimNotifyEvent* e = FindAnimationNotify(_animation, _notifyName);
	return e ? e->GetTriggerTime() : 0.f;
}

float FindStateMachineTransitionCrossFadeTime(UAnimInstance* _animInstance, FName _stateMachineName, FName _fromStateName, FName _toStateName)
{
	int32 machineIndex = _animInstance->GetStateMachineIndex(_stateMachineName);
	if (machineIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown State Machine \"%s\"."), *_stateMachineName.ToString());
		return 0.f;
	}
	const FBakedAnimationStateMachine* machinePtr = _animInstance->GetStateMachineInstanceDesc(_stateMachineName);
	JOY_ASSERT(machinePtr);
	int32 fromStateIndex = machinePtr->FindStateIndex(_fromStateName);
	if (fromStateIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown State \"%s\" in StateMachine \"%s\"."), *_stateMachineName.ToString(), *_fromStateName.ToString());
		return 0.f;
	}
	int32 toStateIndex = machinePtr->FindStateIndex(_toStateName);
	if (toStateIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown State \"%s\" in StateMachine \"%s\"."), *_stateMachineName.ToString(), *_toStateName.ToString());
		return 0.f;
	}

	int32 transitionIndex = machinePtr->FindTransitionIndex(fromStateIndex, toStateIndex);
	if (transitionIndex == INDEX_NONE)
	{
		LOGF_WARNING(TEXT("Unknown Transition from state \"%s\" to state \"%s\" in StateMachine \"%s\"."), *_fromStateName.ToString() , *_toStateName.ToString(), *_stateMachineName.ToString());
		return 0.f;
	}
	return machinePtr->Transitions[transitionIndex].CrossfadeDuration;
}

bool GetBoneChain(const USkeletalMeshComponent* _skeletalMesh, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain)
{
	return GetBoneChain(_skeletalMesh->SkeletalMesh->RefSkeleton, _firstBone, _lastBone, _outChain);
}

bool GetBoneChain(const USkeleton* _skeleton, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain)
{
	return GetBoneChain(_skeleton->GetReferenceSkeleton(), _firstBone, _lastBone, _outChain);
}

bool GetBoneChain(const FReferenceSkeleton& _referenceSkeleton, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain)
{
	int32 firstBoneIndex = _referenceSkeleton.FindRawBoneIndex(_firstBone);
	if (firstBoneIndex == INDEX_NONE)
		return false;

	int32 lastBoneIndex = _referenceSkeleton.FindRawBoneIndex(_lastBone);
	if (lastBoneIndex == INDEX_NONE)
		return false;

	if (_firstBone == _lastBone)
	{
		_outChain.Add(_firstBone);
		return true;
	}

	TArray<int32> firstBoneChain;
	firstBoneChain.Add(firstBoneIndex);
	{
		int32 parentBone = _referenceSkeleton.GetParentIndex(firstBoneChain.Last());
		while (parentBone != INDEX_NONE)
		{
			firstBoneChain.Add(parentBone);

			parentBone = _referenceSkeleton.GetParentIndex(firstBoneChain.Last());
		}
	}

	TArray<int32> lastBoneChain;
	lastBoneChain.Add(lastBoneIndex);
	{
		int32 parentBone = _referenceSkeleton.GetParentIndex(lastBoneChain.Last());
		while (parentBone != INDEX_NONE)
		{
			int32 index;
			if (firstBoneChain.Find(parentBone, index))
			{
				for (int32 i = 0; i <= index; ++i)
				{
					_outChain.Add(_referenceSkeleton.GetBoneName(firstBoneChain[i]));
				}

				for (int32 boneIndex : lastBoneChain)
				{
					_outChain.Add(_referenceSkeleton.GetBoneName(boneIndex));
				}
				return true;
			}

			lastBoneChain.EmplaceAt(0, parentBone);

			parentBone = _referenceSkeleton.GetParentIndex(lastBoneChain[0]);
		}
	}

	return false;
}

FTransform ExtractBoneTransformAtTime(const UAnimSequence* _animationSequence, const FName _boneName, const float _time, const bool _extractRootMotion)
{
	FTransform resultTransform = FTransform::Identity;

	auto _getAnimationTrackForBone = [&](FName _boneToFind) -> int
	{
		int boneIndex = _animationSequence->GetSkeleton()->GetReferenceSkeleton().FindBoneIndex(_boneToFind);

		TArray<FTrackToSkeletonMap> map = _animationSequence->GetRawTrackToSkeletonMapTable();

		for (int i = 0; i < map.Num(); i++)
		{
			if (map[i].BoneTreeIndex == boneIndex)
				return i;
		}

		return -1;
	};

	if (_animationSequence)
	{ 
		int boneTrackIndex = _getAnimationTrackForBone(_boneName);

		if (boneTrackIndex >= 0)
		{
			_animationSequence->ExtractBoneTransform(_animationSequence->GetRawAnimationTrack(boneTrackIndex), resultTransform, _time);

			TArray<FName> parentBoneChain;
			GetBoneChain(_animationSequence->GetSkeleton(), _animationSequence->GetSkeleton()->GetReferenceSkeleton().GetBoneName(0), _boneName, parentBoneChain);

			if (parentBoneChain.Num() > 1)
			{
				FTransform parentBoneTransform = FTransform::Identity;

				for (int x = parentBoneChain.Num() - 1; x >= 0; x--)
				{
					if (parentBoneChain[x] == _boneName)
						continue;

					if (!_extractRootMotion && x == 0)
						continue;

					_animationSequence->ExtractBoneTransform(_animationSequence->GetRawAnimationTrack(_getAnimationTrackForBone(parentBoneChain[x])),
						parentBoneTransform,
						_time);

					resultTransform.SetLocation(UKismetMathLibrary::TransformLocation(parentBoneTransform, resultTransform.GetLocation()));
					resultTransform.SetRotation(UKismetMathLibrary::TransformRotation(parentBoneTransform, resultTransform.GetRotation().Rotator()).Quaternion());
				}
			}
		}
	}

	return resultTransform;
}

FTransform ExtractRootTrackTransformFromBlendsapce(const UBlendSpaceBase* _blendSpace, const float _posx, const float _posy, const float _time)
{
	FTransform resultTransform = FTransform::Identity;

	if (_blendSpace)
	{
		TArray<FBlendSampleData> outBlendSamplesData;
		_blendSpace->GetSamplesFromBlendInput(FVector(_posx, _posy, 0.f), outBlendSamplesData);

		FTransform accumulatedBlendSpaceRootMotionTransform = FTransform::Identity;

		for (int i = 0; i < outBlendSamplesData.Num(); i++)
		{
			float extractAtTime = _time;
			float currentSamplePlayLength = outBlendSamplesData[i].Animation->GetPlayLength();
			float currentSamplePlayRate   = outBlendSamplesData[i].SamplePlayRate;
			float currentAnimationWeight  = outBlendSamplesData[i].GetWeight();

			if (_time < 0.f || _time > currentSamplePlayLength)
			{
				extractAtTime = currentSamplePlayLength;
			}

			FTransform currentAnimationTransform = outBlendSamplesData[i].Animation->ExtractRootTrackTransform(extractAtTime, NULL);

			accumulatedBlendSpaceRootMotionTransform.AddToTranslation((currentAnimationTransform.GetLocation() * currentAnimationWeight) * currentSamplePlayRate);
			accumulatedBlendSpaceRootMotionTransform.ConcatenateRotation(((currentAnimationTransform.GetRotation().Rotator() * currentAnimationWeight) * currentSamplePlayRate).Quaternion());
		}

		resultTransform = accumulatedBlendSpaceRootMotionTransform;
	}

	return resultTransform;
}

FAnimStateMachineDump DumpAnimStateMachine(UAnimInstance* _animInstance, FName _stateMachineName)
{
	FAnimStateMachineDump result;
	result.StateMachineName = _stateMachineName;

	if (!_animInstance)
		return result;

	int32 machineIndex = _animInstance->GetStateMachineIndex(_stateMachineName);
	if (machineIndex == INDEX_NONE)
		return result;

	FAnimNode_StateMachine* instance = _animInstance->GetStateMachineInstance(machineIndex);
	if (!instance)
		return result;

	const FBakedAnimationStateMachine* instanceDesc = _animInstance->GetStateMachineInstanceDesc(_stateMachineName);
	if (!instanceDesc)
		return result;

	result.CurrentState = instance->GetCurrentStateName();
	for (const FBakedAnimationState& state : instanceDesc->States)
	{
		int32 index = instanceDesc->FindStateIndex(state.StateName);
		float weight = instance->GetStateWeight(index);
		if (weight > 0.f)
		{
			result.ActiveStates.Add(FAnimStateMachineDumpState(state.StateName, weight));
		}
	}

	for (int32 i = 0; i < instanceDesc->Transitions.Num(); ++i)
	{
		if (!instance->IsValidTransitionIndex(i))
			continue;

		if (!instance->IsTransitionActive(i))
			continue;

		result.ActiveTransitions.Add(FAnimStateMachineDumpTransition(instance->GetStateInfo(instanceDesc->Transitions[i].PreviousState).StateName, instance->GetStateInfo(instanceDesc->Transitions[i].NextState).StateName));
	}

	return result;
}

UAnimationAsset* UAnimationTools::GetAnimation(USkeletalMeshComponent* _skeletalMeshComponent)
{
	JOY_ASSERT(_skeletalMeshComponent);
	return _skeletalMeshComponent->GetSingleNodeInstance() ? _skeletalMeshComponent->GetSingleNodeInstance()->GetAnimationAsset() : nullptr;
}

FTransform UAnimationTools::ConsumeRootMotion(USkeletalMeshComponent* _skeletalMeshComponent)
{
	JOY_ASSERT(_skeletalMeshComponent);
	return _skeletalMeshComponent->ConsumeRootMotion().GetRootMotionTransform();
}

bool UAnimationTools::GetBoneChain(const USkeletalMeshComponent* _skeletalMesh, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain)
{
	return ::GetBoneChain(_skeletalMesh, _firstBone, _lastBone, _outChain);
}

FTransform UAnimationTools::ExtractRootMotionFromRange(const UAnimSequence* _animationSequence, float _startTrackPosition, float _endTrackPosition)
{
	JOY_EXITCONDITION_RET(_animationSequence == nullptr, FTransform::Identity, TEXT("Null Anim Sequence"));

	return _animationSequence->ExtractRootMotionFromRange(_startTrackPosition, _endTrackPosition);
}

FTransform UAnimationTools::ExtractRootTrackTransform(const UAnimSequence* _animationSequence, float _pos)
{
	JOY_EXITCONDITION_RET(_animationSequence == nullptr, FTransform::Identity, TEXT("Null Anim Sequence"));

	return _animationSequence->ExtractRootTrackTransform(_pos, NULL);
}


float UAnimationTools::GetPlayLength(const UAnimSequence* _animationSequence)
{
	JOY_EXITCONDITION_RET(_animationSequence == nullptr, 0.f, TEXT("Null Anim Sequence"));

	return const_cast<UAnimSequence*>(_animationSequence)->GetPlayLength(); // NOTE(Remi|2019/04/03): Unreal design of not putting this function const is fucked up and dumb
}

void UAnimationTools::RefreshAnimationCache(UAnimSequence* _animationSequence)
{
#if WITH_EDITOR
	FPropertyChangedEvent emptyPropertyUpdateStruct(nullptr);
	_animationSequence->PostEditChangeProperty(emptyPropertyUpdateStruct);
	_animationSequence->PostProcessSequence();
	_animationSequence->RefreshCurveData();
#endif
	_animationSequence->RefreshCacheData();
}


FTransform UAnimationTools::ExtractRootTrackTransformFromBlendsapce(const UBlendSpaceBase* _blendSpace, const float _posx, const float _posy, const float _time)
{
	return ::ExtractRootTrackTransformFromBlendsapce(_blendSpace, _posx, _posy, _time);
}


FTransform UAnimationTools::ExtractBoneTransformAtTime(const UAnimSequence* _animationSequence, const FName _boneName, const float _time, const bool _extractRootMotion)
{
	return ::ExtractBoneTransformAtTime(_animationSequence, _boneName, _time, _extractRootMotion);
}

FString FAnimStateMachineDump::ToString() const
{
	FString result;
	result += FString::Printf(TEXT("CurrentState: %s\n"), *CurrentState.ToString());
	result += TEXT("ActiveStates: ");
	for (const FAnimStateMachineDumpState& state : ActiveStates)
	{
		result += FString::Printf(TEXT("%s(%.2f), "), *state.Name.ToString(), state.Weight);
	}
	result += TEXT("\n");

	result += TEXT("ActiveTransitions: ");
	for (const FAnimStateMachineDumpTransition& transition : ActiveTransitions)
	{
		result += FString::Printf(TEXT("%s -> %s, "), *transition.SourceState.ToString(), *transition.TargetState.ToString());
	}
	result += TEXT("\n");

	return result;
}
