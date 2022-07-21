#include "AnimationTools.h"

class UAnimSequence;
class UAnimNotify_PlaySound;
class USoundBase;
class USkeletalMeshComponent;
class UAnimationAsset;
class UBlendSpaceBase;

void UAnimationTools::SetAnimNotifyPlaySound_VolumeMultiplier(const UAnimNotify_PlaySound* _notify, float _volumeMultiplier) {
}

void UAnimationTools::SetAnimNotifyPlaySound_Sound(const UAnimNotify_PlaySound* _notify, USoundBase* _sound) {
}

void UAnimationTools::SetAnimNotifyPlaySound_PitchMultiplier(const UAnimNotify_PlaySound* _notify, float _pitchMultiplier) {
}

void UAnimationTools::SetAnimNotifyPlaySound_Follow(const UAnimNotify_PlaySound* _notify, bool _follow) {
}

void UAnimationTools::SetAnimNotifyPlaySound_AttachName(const UAnimNotify_PlaySound* _notify, FName _attachName) {
}

void UAnimationTools::RefreshAnimationCache(UAnimSequence* _animationSequence) {
}

float UAnimationTools::GetPlayLength(const UAnimSequence* _animationSequence) {
    return 0.0f;
}

bool UAnimationTools::GetBoneChain(const USkeletalMeshComponent* _skeletalMesh, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain) {
    return false;
}

UAnimationAsset* UAnimationTools::GetAnimation(USkeletalMeshComponent* _skeletalMeshComponent) {
    return NULL;
}

FTransform UAnimationTools::ExtractRootTrackTransformFromBlendsapce(const UBlendSpaceBase* _blendSpace, const float _posx, const float _posy, const float _time) {
    return FTransform{};
}

FTransform UAnimationTools::ExtractRootTrackTransform(const UAnimSequence* _animationSequence, float _pos) {
    return FTransform{};
}

FTransform UAnimationTools::ExtractRootMotionFromRange(const UAnimSequence* _animationSequence, float _startTrackPosition, float _endTrackPosition) {
    return FTransform{};
}

float UAnimationTools::ExtractDurationFromBlendsapce(const UBlendSpaceBase* _blendSpace, const float _posx, const float _posy) {
    return 0.0f;
}

FTransform UAnimationTools::ExtractBoneTransformFromBlendspace(const UBlendSpaceBase* _blendSpace, const FName _boneName, float _posx, float _posy, const float _time, bool _extractRootMotion) {
    return FTransform{};
}

FTransform UAnimationTools::ExtractBoneTransformAtTime(const UAnimSequence* _animationSequence, const FName _boneName, const float _time, const bool _extractRootMotion) {
    return FTransform{};
}

FTransform UAnimationTools::ConsumeRootMotion(USkeletalMeshComponent* _skeletalMeshComponent) {
    return FTransform{};
}

UAnimationTools::UAnimationTools() {
}

