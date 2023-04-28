#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationBlendingCustomController.h"
#include "FRsPhysicalAnimationCustomBlendInPhysics.h"
#include "RsPhysicalAnimationBlendingCustomControllerParameters.h"
#include "RsPhysicalAnimationBoneParameters.h"
#include "RsPhysicalAnimationJointAngularParameters.h"
#include "RsPhysicalAnimationJointLinearParameters.h"
#include "RsPhysicalAnimationMotorsStrengthModifier.h"
#include "RsPhysicalAnimationTimeUpdateSchemeParameters.h"
#include "RsPhysicalAnimationParameters.generated.h"

class UPhysicalMaterial;
class URsPhysicalAnimationMotorsDriveProfile;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoNotActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationBoneParameters DefaultBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationBoneParameters RootBoneBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsPhysicalAnimationBoneParameters> BonesOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsPhysicalAnimationJointAngularParameters> JointsAngularOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsPhysicalAnimationJointLinearParameters> JointsLinearOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumPhysicsBlendWeightFromAnimationNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumPhysicsBlendWeightFromAnimationNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideBlendTimeForPhysicsBlendWeightFromAnimationNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideProjectionLinearThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 OverrideProjectionActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationBlendingCustomController blendingCustomController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationBlendingCustomControllerParameters BlendingCustomControllerParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationCustomBlendInPhysics CustomBlendInPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ProfilePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UpdateActorWorldPositionFromPhysics: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseRsDominanceGroupFromOwnerKineticActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableRagdollCollisionProfile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableHardcodedCollisionSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ApplyRootMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ZeroRsPhysicsVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ConfigureCollisionSettingsForCharacterWeapons: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ModifyPhysicsAssetCollisionsToIncludeWeapons: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SetupRagdollSoundEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableCallbackOnBeforeBlendInPhysics: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DoNotForceDependentComponentsToPostPhysics: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseExclusivePhysicsScene: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationTimeUpdateSchemeParameters TimeUpdateScheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideDeltaTimeForSmoothVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationMotorsDriveProfile* MotorsDriveProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsPhysicalAnimationMotorsStrengthModifier> MotorsStrengthModifiers;
    
    FRsPhysicalAnimationParameters();
};

