#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HKCamera.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "CameraThirdPersonPreset.h"
#include "JoyLibraryRuntime/Smoother.h"
#include "UObject/NoExportTypes.h"
#include "CameraThirdPerson.generated.h"

class USceneComponent;
class UCameraComponent;
class UCurveFloat;
class AActor;
class USplineComponent;
class UProximityProbeComponent;
class UCameraTargetComponent;
class ACatPawn;

UCLASS()
class HK_PROJECT_API ACameraThirdPerson : public AHKCamera {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_speedOffsetEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_speedOffsetInfluence;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* m_armRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCameraComponent* m_camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_probeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_cameraTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_inputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_additionalRaycastDeadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_forwardDistanceDamping90Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_backwardDistanceDamping90Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_useLinearVelocityOnSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_collisionsAvoidanceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_collisionAvoidanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_collisionAvoidanceMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_collisionsAvoidanceExtrapolationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_collisionAvoidanceHorizontalExtrapolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_collisionAvoidanceVerticalExtrapolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_resetCameraTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_resetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve m_attachLocationSmoothDistanceToSamplingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_attachLocationSmoothSampleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_attachLocationJumpCorrectionRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_backCamDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_gamepadInputResponseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_mouseInputResponseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_gamepadInputTimeTo90Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_mouseInputTimeTo90Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_mouseInputPitchRatioInputFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_gamePadPitchRatioInputFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_emptyGamepadInputTimeTo90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_emptyMouseInputTimeTo90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_invertVelocityWithStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_yawRealignEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_yawRealignCurve_InputDirectionDot_YawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_speedOffsetLengthSmootherForwardTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_speedOffsetLengthSmootherBackwardTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_speedOffsetDirectionSmootherTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_speedOffsetDoubleSmootherTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_forwardSpeedOffsetPitchResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_forwardSpeedOffsetCameraDotResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSmootherFloat m_modifierTargetDistanceSmooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSmootherFloat m_modifierTargetFOVSmooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_dynamicSplineHeightEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_dynamicSplineHeightMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_dynamicSplineHeightRecoverBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_cameraTargetSmoothTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_cameraTargetBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_cameraTargetDistanceOutMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_cameraTargetOtherOffsetsResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> m_cameraTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_cameraTargetDistanceXBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_cameraTargetDistanceYBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_cameraTargetDistanceOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_cameraTargetDistanceInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_cameraTargetInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_resetCameraOnInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraThirdPersonPreset DefaultPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_dialogResetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_dialogResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_dialogResetMinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_dialogResetMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_dialogResetPitchUnderMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_dialogResetPitchAboveMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_dialogResetProbeDistanceToObstacle;
    
    UPROPERTY(EditAnywhere)
    bool m_editionMode;
    
    UPROPERTY(EditAnywhere)
    bool m_smoothSplines;
    
    UPROPERTY(EditAnywhere, Export)
    USplineComponent* m_cameraSpline;
    
    UPROPERTY(EditAnywhere, Export)
    USplineComponent* m_targetSpline;
    
    UPROPERTY(EditAnywhere)
    float m_raycastTargetSmoothTimeTo90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve m_raycastTargetDynamicheight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_antiWobbleActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_antiWobbleTimeToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_antiWobbleSensivityToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_antiWobbleDistanceToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_antiWobbleCatForwardAngleToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_antiWobbleCatBackwardAngleToRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_antiWobbleCatSpeedToRelease;
    
private:
    UPROPERTY(Export, Transient)
    UProximityProbeComponent* m_proximityProbeAttachPoint;
    
    UPROPERTY(Export, Transient)
    UProximityProbeComponent* m_proximityProbeCamera;
    
public:
    ACameraThirdPerson();
    UFUNCTION(BlueprintNativeEvent)
    FVector UpdateWantedTargetLocation(float _yaw, float _pitchRatio, float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector UpdateWantedRaycastTarget(float _yaw, float _pitchRatio, float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector UpdateWantedCameraLocation(float _yaw, float _pitchRatio, float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector UpdateIdealAttachLocation(float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector UpdateFinalRaycastTarget(float _yaw, float _pitchRatio, float _dt);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector UpdateFinalExtrapolatedVelocity(float _dt, FVector _raycastStart, FVector _raycastEnd, FVector _previousRaycastEnd);
    
    UFUNCTION(BlueprintNativeEvent)
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisplayDebug();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCatUnset(ACatPawn* _cat);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCatSet(ACatPawn* _cat);
    
    UFUNCTION(BlueprintPure)
    bool IsResetingRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsResetCamDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInputEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBackCamDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBackCamActivated() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void InputProcess(FVector2D _input, float _deltaTime, float& _yawIncrement, float& _pitchIncrement);
    
    UFUNCTION(BlueprintNativeEvent)
    FVector2D InputFilter(FVector2D _rawInput, float _dt);
    
    UFUNCTION(BlueprintPure)
    float GetYaw() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWantedTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWantedRaycastTarget() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWantedCameraLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetRoll() const;
    
    UFUNCTION(BlueprintPure)
    bool GetResetCameraOnInput() const;
    
    UFUNCTION(BlueprintPure)
    float GetPitchRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetPitch() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetIdealAttachLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetFOVPitchModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetFOVBase() const;
    
    UFUNCTION(BlueprintPure)
    float GetFOV() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFinalRaycastTarget() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFinalAttachLocation() const;
    
    UFUNCTION(BlueprintPure)
    ACatPawn* GetCat() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetCamera() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttachLocationSmoothRatio() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAbsoluteOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void AlignToPosition(FVector _position, float _time, float _inputDisableTime, bool _inputCancel);
    
    UFUNCTION(BlueprintCallable)
    void AddTarget(UCameraTargetComponent* _target);
    
    UFUNCTION(BlueprintCallable)
    void AddModifier(const FName& _id, const FCameraThirdPersonPreset& _preset, int32 _priority);
    
private:
    UFUNCTION()
    void _OnControllerTypeChanged();
    
};

