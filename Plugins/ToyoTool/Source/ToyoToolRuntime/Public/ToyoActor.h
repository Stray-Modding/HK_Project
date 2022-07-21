#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EToyoSplineMeshUpDefinitionType.h"
#include "ToyoJointData.h"
#include "UObject/NoExportTypes.h"
#include "EToyoSegmentLengthCalculationMode.h"
#include "ToyoSplineMeshData.h"
#include "UObject/NoExportTypes.h"
#include "ToyoActor.generated.h"

class UPhysicalMaterial;
class UMaterialInterface;
class USceneComponent;
class UToyoSplineComponent;
class UToyoSplineMeshComponent;
class UToyoJointMeshComponent;

UCLASS()
class TOYOTOOLRUNTIME_API AToyoActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    float MaxRadius;
    
    UPROPERTY(EditAnywhere)
    float SnapDistance;
    
    UPROPERTY(EditAnywhere)
    EToyoSegmentLengthCalculationMode SegmentLengthCalcMode;
    
    UPROPERTY(EditAnywhere)
    EToyoSplineMeshUpDefinitionType SplineMeshUpDefinition;
    
    UPROPERTY(EditAnywhere)
    FVector CustomSplineUpDir;
    
    UPROPERTY(EditAnywhere)
    bool bUseSplineRoll;
    
    UPROPERTY(EditAnywhere)
    float RollScale;
    
    UPROPERTY(EditAnywhere)
    bool bSmoothInterpRollScale;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCollision;
    
    UPROPERTY(EditAnywhere)
    FName CollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    bool bGeneratesOverlapEvents;
    
    UPROPERTY(EditAnywhere)
    bool bGeneratesHitEvents;
    
    UPROPERTY(EditAnywhere)
    FToyoSplineMeshData Small;
    
    UPROPERTY(EditAnywhere)
    FToyoSplineMeshData Medium;
    
    UPROPERTY(EditAnywhere)
    FToyoSplineMeshData Big;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> ToyoMaterials;
    
    UPROPERTY(EditAnywhere)
    TArray<FToyoJointData> JointsData;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> JointMaterials;
    
    UPROPERTY(EditAnywhere)
    TArray<FToyoJointData> StartEndData;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> StartEndMaterials;
    
    UPROPERTY(EditAnywhere)
    FRotator StartFlipRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator EndFlipRotation;
    
    UPROPERTY(EditAnywhere)
    TArray<FToyoJointData> PropsData;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> PropsMaterials;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* DummyRoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    UToyoSplineComponent* SplineComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    TArray<UToyoSplineMeshComponent*> ToyoSplineMeshCompsList;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TArray<UToyoJointMeshComponent*> JointMeshCompsList;
    
public:
    AToyoActor();
    UFUNCTION(BlueprintCallable)
    void CreateToyoMesh();
    
    UFUNCTION(BlueprintCallable)
    void ClearOldData();
    
};

