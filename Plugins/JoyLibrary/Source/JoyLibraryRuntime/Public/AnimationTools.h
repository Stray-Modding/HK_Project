#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "AnimationTools.generated.h"

class USoundBase;
class UAnimSequence;
class UAnimNotify_PlaySound;
class USkeletalMeshComponent;
class UAnimationAsset;
class UBlendSpaceBase;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UAnimationTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationTools();
    UFUNCTION(BlueprintCallable)
    static void SetAnimNotifyPlaySound_VolumeMultiplier(const UAnimNotify_PlaySound* _notify, float _volumeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimNotifyPlaySound_Sound(const UAnimNotify_PlaySound* _notify, USoundBase* _sound);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimNotifyPlaySound_PitchMultiplier(const UAnimNotify_PlaySound* _notify, float _pitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimNotifyPlaySound_Follow(const UAnimNotify_PlaySound* _notify, bool _follow);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimNotifyPlaySound_AttachName(const UAnimNotify_PlaySound* _notify, FName _attachName);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshAnimationCache(UAnimSequence* _animationSequence);
    
    UFUNCTION(BlueprintPure)
    static float GetPlayLength(const UAnimSequence* _animationSequence);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoneChain(const USkeletalMeshComponent* _skeletalMesh, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain);
    
    UFUNCTION(BlueprintPure)
    static UAnimationAsset* GetAnimation(USkeletalMeshComponent* _skeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static FTransform ExtractRootTrackTransformFromBlendsapce(const UBlendSpaceBase* _blendSpace, const float _posx, const float _posy, const float _time);
    
    UFUNCTION(BlueprintCallable)
    static FTransform ExtractRootTrackTransform(const UAnimSequence* _animationSequence, float _pos);
    
    UFUNCTION(BlueprintCallable)
    static FTransform ExtractRootMotionFromRange(const UAnimSequence* _animationSequence, float _startTrackPosition, float _endTrackPosition);
    
    UFUNCTION(BlueprintCallable)
    static float ExtractDurationFromBlendsapce(const UBlendSpaceBase* _blendSpace, const float _posx, const float _posy);
    
    UFUNCTION(BlueprintCallable)
    static FTransform ExtractBoneTransformFromBlendspace(const UBlendSpaceBase* _blendSpace, const FName _boneName, float _posx, float _posy, const float _time, bool _extractRootMotion);
    
    UFUNCTION(BlueprintCallable)
    static FTransform ExtractBoneTransformAtTime(const UAnimSequence* _animationSequence, const FName _boneName, const float _time, const bool _extractRootMotion);
    
    UFUNCTION(BlueprintCallable)
    static FTransform ConsumeRootMotion(USkeletalMeshComponent* _skeletalMeshComponent);
    
};

