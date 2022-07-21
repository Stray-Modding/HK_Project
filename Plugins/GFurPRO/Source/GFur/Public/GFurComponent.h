#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/MeshComponent.h"
#include "FurLod.h"
#include "GFurComponent.generated.h"

class USkeletalMesh;
class UStaticMesh;
class UFurSplines;
class UMaterialInstanceDynamic;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GFUR_API UGFurComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* SkeletalGrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* StaticGrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFurSplines* FurSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USkeletalMesh*> SkeletalGuideMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UStaticMesh*> StaticGuideMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FFurLod> LODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LODFromParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShellBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FurLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFurLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RemoveFacesWithoutSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PhysicsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ConstantForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxForceTorqueFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReferenceHairBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HairLengthForceUniformity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPhysicsOffsetLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableMorphTargets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float StreamingDistanceMultiplier;
    
private:
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> FurMaterials;
    
public:
    UGFurComponent();
    UFUNCTION(BlueprintCallable)
    void RegenerateFur();
    
};

