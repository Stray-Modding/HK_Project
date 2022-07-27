#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HKCamera.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "CameraThirdPersonPreset.h"
#include "JoyLibraryRuntime/Smoother.h"
#include "CameraThirdPerson.generated.h"

class USceneComponent;
class UCameraComponent;
class UCurveFloat;
class ACatPawn;
class AActor;
class USplineComponent;
class UProximityProbeComponent;
class UCameraTargetComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API ACameraThirdPerson : public AHKCamera {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_speedOffsetEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_speedOffsetInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_armRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* m_camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_probeRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_cameraTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_inputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_additionalRaycastDeadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_forwardDistanceDamping90Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_backwardDistanceDamping90Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useLinearVelocityOnSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_collisionsAvoidanceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_collisionAvoidanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_collisionAvoidanceMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_collisionsAvoidanceExtrapolationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_collisionAvoidanceHorizontalExtrapolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_collisionAvoidanceVerticalExtrapolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resetCameraTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_attachLocationSmoothDistanceToSamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_attachLocationSmoothSampleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_attachLocationJumpCorrectionRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_backCamDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_gamepadInputResponseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_mouseInputResponseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_gamepadInputTimeTo90Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_mouseInputTimeTo90Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_mouseInputPitchRatioInputFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_gamePadPitchRatioInputFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_emptyGamepadInputTimeTo90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_emptyMouseInputTimeTo90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_invertVelocityWithStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_yawRealignEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_yawRealignCurve_InputDirectionDot_YawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_speedOffsetLengthSmootherForwardTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_speedOffsetLengthSmootherBackwardTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_speedOffsetDirectionSmootherTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_speedOffsetDoubleSmootherTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_forwardSpeedOffsetPitchResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_forwardSpeedOffsetCameraDotResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherFloat m_modifierTargetDistanceSmooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmootherFloat m_modifierTargetFOVSmooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dynamicSplineHeightEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dynamicSplineHeightMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dynamicSplineHeightRecoverBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraTargetSmoothTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraTargetBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraTargetDistanceOutMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraTargetOtherOffsetsResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_cameraTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraTargetDistanceXBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraTargetDistanceYBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraTargetDistanceOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraTargetDistanceInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cameraTargetInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_resetCameraOnInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraThirdPersonPreset DefaultPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dialogResetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dialogResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dialogResetMinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dialogResetMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dialogResetPitchUnderMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dialogResetPitchAboveMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dialogResetProbeDistanceToObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_editionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_smoothSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_cameraSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_targetSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_raycastTargetSmoothTimeTo90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_raycastTargetDynamicheight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_antiWobbleActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_antiWobbleTimeToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_antiWobbleSensivityToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_antiWobbleDistanceToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_antiWobbleCatForwardAngleToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_antiWobbleCatBackwardAngleToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_antiWobbleCatSpeedToRelease;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProximityProbeComponent* m_proximityProbeAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProximityProbeComponent* m_proximityProbeCamera;
    
public:
    ACameraThirdPerson();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector UpdateWantedTargetLocation(float _yaw, float _pitchRatio, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector UpdateWantedRaycastTarget(float _yaw, float _pitchRatio, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector UpdateWantedCameraLocation(float _yaw, float _pitchRatio, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector UpdateIdealAttachLocation(float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector UpdateFinalRaycastTarget(float _yaw, float _pitchRatio, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector UpdateFinalExtrapolatedVelocity(float _dt, FVector _raycastStart, FVector _raycastEnd, FVector _previousRaycastEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector UpdateFinalAttachLocation(float _dt, const FVector& _target);
    
    UFUNCTION(BlueprintCallable)
    void SyncWithTargetLocation();
    
    UFUNCTION(BlueprintCallable)
    void SetRoll(float _roll);
    
    UFUNCTION(BlueprintCallable)
    void SetResetCameraOnInput(bool _resetOnInput);
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFOV(float _fov);
    
    UFUNCTION(BlueprintCallable)
    void ResetToRotation(const FRotator& _rotation, float _time, float _inputDisableTime, bool _inputCancel);
    
    UFUNCTION(BlueprintCallable)
    void ResetToRelativeRotation(float _yaw, float _pitch, float _roll, float _time, float _inputDisableTime, bool _inputCancel);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaultPosition(float _time, bool _hardSyncWithTarget);
    
    UFUNCTION(BlueprintCallable)
    void ResetBackCam();
    
    UFUNCTION(BlueprintCallable)
    void RequestResetToClosestFreeRotation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTarget(UCameraTargetComponent* _target);
    
    UFUNCTION(BlueprintCallable)
    void RemoveModifier(const FName& _id);
    
    UFUNCTION(BlueprintCallable)
    void PushDisableResetCam();
    
    UFUNCTION(BlueprintCallable)
    void PushDisableBackCam();
    
    UFUNCTION(BlueprintCallable)
    void PopDisableResetCam();
    
    UFUNCTION(BlueprintCallable)
    void PopDisableBackCam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCatUnset(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCatSet(ACatPawn* _cat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResetingRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResetCamDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackCamDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackCamActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputProcess(FVector2D _input, float _deltaTime, float& _yawIncrement, float& _pitchIncrement);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D InputFilter(FVector2D _rawInput, float _dt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWantedTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWantedRaycastTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWantedCameraLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetResetCameraOnInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitchRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetIdealAttachLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOVPitchModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOVBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFinalRaycastTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFinalAttachLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACatPawn* GetCat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttachLocationSmoothRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAbsoluteOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void AlignToPosition(FVector _position, float _time, float _inputDisableTime, bool _inputCancel);
    
    UFUNCTION(BlueprintCallable)
    void AddTarget(UCameraTargetComponent* _target);
    
    UFUNCTION(BlueprintCallable)
    void AddModifier(const FName& _id, const FCameraThirdPersonPreset& _preset, int32 _priority);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnControllerTypeChanged();
    
};

