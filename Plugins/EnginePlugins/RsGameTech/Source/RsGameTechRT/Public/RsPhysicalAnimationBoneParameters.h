#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationBodyMode.h"
#include "RsPhysicalAnimationBoneParameters_ConstraintDriveParameters.h"
#include "RsPhysicalAnimationBoneParameters_MotorDriveParameters.h"
#include "RsPhysicalAnimationBoneParameters_VelocityDriveParameters.h"
#include "RsPhysicalAnimationBoneParameters.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationBoneParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationBodyMode BodyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationBoneParameters_MotorDriveParameters MotorDriveModeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationBoneParameters_VelocityDriveParameters VelocityDriveModeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationBoneParameters_ConstraintDriveParameters ConstraintDriveModeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IgnorePhysicsBlendWeightFromAnimationNotify: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DisableAllCollisionResponses: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DisableCollisionResponseIfOverlapsCollisions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TurnToKinematicBodyModeIfOverlapsCollisions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TurnToKinematicBodyModeIfThatBodyOverlapsCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnToFreeBodyModeIfLinearDivergenceIsMoreThan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TurnToFreeBodyModeIfThatBodyIsInFreeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterialToUse;
    
    FRsPhysicalAnimationBoneParameters();
};

