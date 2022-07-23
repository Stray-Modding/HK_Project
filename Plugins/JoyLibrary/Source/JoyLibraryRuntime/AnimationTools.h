#pragma once

#include <CoreMinimal.h>

#include "AnimationTools.generated.h"

struct FReferenceSkeleton;
class UBlendSpaceBase;

JOYLIBRARYRUNTIME_API float GetAnimationStateRelevantAnimTime(UAnimInstance* _animInstance, FName _stateMachineName, FName _stateName);
JOYLIBRARYRUNTIME_API float GetAnimationStateRelevantAnimTimeRemaining(UAnimInstance* _animInstance, FName _stateMachineName, FName _stateName);
JOYLIBRARYRUNTIME_API float GetAnimationStateRelevantAnimTimeRemainingFraction(UAnimInstance* _animInstance, FName _stateMachineName, FName _stateName);
JOYLIBRARYRUNTIME_API const FAnimNotifyEvent* FindAnimationNotify(const UAnimSequence* _animation, FName _notifyName);
JOYLIBRARYRUNTIME_API float FindAnimationNotifyTriggerTime(const UAnimSequence* _animation, FName _notifyName);
JOYLIBRARYRUNTIME_API float FindStateMachineTransitionCrossFadeTime(UAnimInstance* _animInstance, FName _stateMachineName, FName _sourceStateName, FName _targetStateName);

JOYLIBRARYRUNTIME_API bool GetBoneChain(const USkeletalMeshComponent* _skeletalMesh, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain);
JOYLIBRARYRUNTIME_API bool GetBoneChain(const USkeleton* _skeleton, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain);
JOYLIBRARYRUNTIME_API bool GetBoneChain(const FReferenceSkeleton& _referenceSkeleton, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain);

JOYLIBRARYRUNTIME_API FTransform ExtractBoneTransformAtTime(const UAnimSequence* _animationSequence, const FName _boneName, const float _time, const bool _extractRootMotion);
JOYLIBRARYRUNTIME_API FTransform ExtractRootTrackTransformFromBlendsapce(const UBlendSpaceBase* _blendSpace, const float _posx, const float _posy, const float _time = -1);

JOYLIBRARYRUNTIME_API struct FAnimStateMachineDumpState
{
	FAnimStateMachineDumpState(FName _name, float _weight) : Name(_name), Weight(_weight) {}
	FName Name;
	float Weight;
};

JOYLIBRARYRUNTIME_API struct FAnimStateMachineDumpTransition
{
	FAnimStateMachineDumpTransition(FName _sourceState, FName _targetState) : SourceState(_sourceState), TargetState(_targetState) {}
	FName SourceState;
	FName TargetState;
};

JOYLIBRARYRUNTIME_API struct FAnimStateMachineDump
{
	FString ToString() const;

	FName StateMachineName;
	FName CurrentState;
	TArray<FAnimStateMachineDumpState> ActiveStates;
	TArray<FAnimStateMachineDumpTransition> ActiveTransitions;
};

JOYLIBRARYRUNTIME_API FAnimStateMachineDump DumpAnimStateMachine(UAnimInstance* _animInstance, FName _stateMachineName);

/**
 *
 */
UCLASS()
class JOYLIBRARYRUNTIME_API UAnimationTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Joy|Animation") static UAnimationAsset* GetAnimation(USkeletalMeshComponent* _skeletalMeshComponent);
	UFUNCTION(BlueprintCallable, Category = "Joy|Animation") static FTransform ConsumeRootMotion(USkeletalMeshComponent* _skeletalMeshComponent);

	UFUNCTION(BlueprintCallable, Category = "Joy|Animation") static bool GetBoneChain(const USkeletalMeshComponent* _skeletalMesh, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain);

	UFUNCTION(BlueprintCallable, Category = "Joy|Animation") static FTransform ExtractRootMotionFromRange(const UAnimSequence* _animationSequence, float _startTrackPosition, float _endTrackPosition);
	UFUNCTION(BlueprintCallable, Category = "Joy|Animation") static FTransform ExtractRootTrackTransform(const UAnimSequence* _animationSequence, float _pos);
	
	/** time -1 extract the full motion of the root bone in the animation at specified blendspace position */
	UFUNCTION(BlueprintCallable, Category = "Joy|Animation") static FTransform ExtractRootTrackTransformFromBlendsapce(const UBlendSpaceBase* _blendSpace, const float _posx, const float _posy, const float _time = -1);

	UFUNCTION(BlueprintCallable, Category = "Joy|Animation") static FTransform ExtractBoneTransformAtTime(const UAnimSequence* _animationSequence, const FName _boneName, const float _time, const bool _extractRootMotion);

	UFUNCTION(BlueprintPure, Category = "Joy|Animation") static float GetPlayLength(const UAnimSequence* _animationSequence);

	UFUNCTION(BlueprintCallable, Category = "Joy|Animation") static void RefreshAnimationCache(UAnimSequence* _animationSequence);
};

