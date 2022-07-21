#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "Engine/EngineTypes.h"
#include "SplineRailComponent.generated.h"

class USplineRailComponent;
class UPrimitiveComponent;
class ACatPawn;
class UProceduralMeshComponent;
class UStreamingComponent;
class UBoxComponent;
class USplineRailConnection;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API USplineRailComponent : public USplineComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRailCatDelegate, USplineRailComponent*, _rail, ACatPawn*, _cat);
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    float TrajectoryRaycastEndOffset;
    
    UPROPERTY(BlueprintAssignable)
    FRailCatDelegate AfterCatEntered;
    
    UPROPERTY(BlueprintAssignable)
    FRailCatDelegate BeforeCatExited;
    
private:
    UPROPERTY(Instanced)
    UProceduralMeshComponent* m_proceduralMeshComponent;
    
    UPROPERTY(Instanced)
    UBoxComponent* m_encapsulatingCollider;
    
    UPROPERTY(Instanced)
    UStreamingComponent* m_streamingComponent;
    
    UPROPERTY()
    USplineRailConnection* m_beginGroundConnection;
    
    UPROPERTY()
    USplineRailConnection* m_endGroundConnection;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool m_enabled;
    
    UPROPERTY(EditAnywhere)
    bool m_drawMesh;
    
    UPROPERTY(EditAnywhere)
    bool m_isBucket;
    
    UPROPERTY(EditAnywhere)
    bool m_enableBeginConnection;
    
    UPROPERTY(EditAnywhere)
    bool m_enableEndConnection;
    
    UPROPERTY(EditAnywhere)
    float m_additionalEncapsulatingColliderSize;
    
    UPROPERTY(EditAnywhere)
    float m_samplingStep;
    
    UPROPERTY(EditAnywhere)
    bool m_debug;
    
    UPROPERTY(EditAnywhere)
    float m_connectionRaycastDistance;
    
    UPROPERTY(EditAnywhere)
    float m_connectionRadius;
    
    UPROPERTY()
    TArray<ACatPawn*> m_ridingCats;
    
public:
    USplineRailComponent();
    UFUNCTION(BlueprintCallable)
    void SetQuadrantEnabled(int32 _quadrantId, bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void RefreshConnections();
    
    UFUNCTION(BlueprintPure)
    bool IsQuadrantEnabled(int32 _quadrantId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBucket() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ACatPawn*> GetRidingCats() const;
    
    UFUNCTION()
    void FixUpSpline();
    
private:
    UFUNCTION()
    void _OnStreamedOut(UStreamingComponent* _streamingComponent);
    
    UFUNCTION()
    void _OnStreamedIn(UStreamingComponent* _streamingComponent);
    
    UFUNCTION()
    void _OnConnectionColliderEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION()
    void _OnConnectionColliderBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
};

