#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RsRagdollComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsRagdollComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollMaximumLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollMaximumAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionBodyScaleMinDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionBodyScaleMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBoneScale;
    
    URsRagdollComponent();
    UFUNCTION(BlueprintCallable)
    void StartFreeFallingRagdoll(const USkeletalMeshComponent* inSkeletalMeshComponent, bool startSimulatePhysics);
    
    UFUNCTION(BlueprintCallable)
    void SetupContinuousRotation(bool applyContinuousRotation, FVector continuousRotationStrength);
    
    UFUNCTION(BlueprintCallable)
    void OverrideLinearDampingForAllBodies(float newLinearDamping);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAngularDampingForAllBodies(float newAngularDamping);
    
};

