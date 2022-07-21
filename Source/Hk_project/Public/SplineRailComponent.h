#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "Engine/EngineTypes.h"
#include "SplineRailComponent.generated.h"

class USplineRailComponent;
class UProceduralMeshComponent;
class ACatPawn;
class UBoxComponent;
class USplineRailConnection;
class UStreamingComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API USplineRailComponent : public USplineComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRailCatDelegate, USplineRailComponent*, _rail, ACatPawn*, _cat);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrajectoryRaycastEndOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRailCatDelegate AfterCatEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRailCatDelegate BeforeCatExited;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* m_proceduralMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_encapsulatingCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStreamingComponent* m_streamingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USplineRailConnection* m_beginGroundConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USplineRailConnection* m_endGroundConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_drawMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isBucket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableBeginConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableEndConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_additionalEncapsulatingColliderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_samplingStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_connectionRaycastDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_connectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACatPawn*> m_ridingCats;
    
public:
    USplineRailComponent();
    UFUNCTION(BlueprintCallable)
    void SetQuadrantEnabled(int32 _quadrantId, bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enabled);
    
    UFUNCTION(BlueprintCallable)
    void RefreshConnections();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuadrantEnabled(int32 _quadrantId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBucket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACatPawn*> GetRidingCats() const;
    
    UFUNCTION(BlueprintCallable)
    void FixUpSpline();
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnStreamedOut(UStreamingComponent* _streamingComponent);
    
    UFUNCTION(BlueprintCallable)
    void _OnStreamedIn(UStreamingComponent* _streamingComponent);
    
    UFUNCTION(BlueprintCallable)
    void _OnConnectionColliderEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnConnectionColliderBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
};

