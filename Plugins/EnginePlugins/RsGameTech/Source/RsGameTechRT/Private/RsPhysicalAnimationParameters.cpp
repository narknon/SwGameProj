#include "RsPhysicalAnimationParameters.h"

FRsPhysicalAnimationParameters::FRsPhysicalAnimationParameters() {
    this->DoNotActivate = false;
    this->MaximumLinearVelocity = 0.00f;
    this->MaximumAngularVelocity = 0.00f;
    this->MinimumPhysicsBlendWeightFromAnimationNotifies = 0.00f;
    this->MaximumPhysicsBlendWeightFromAnimationNotifies = 0.00f;
    this->OverrideBlendTimeForPhysicsBlendWeightFromAnimationNotifies = 0.00f;
    this->OverrideProjectionLinearThreshold = 0.00f;
    this->OverrideProjectionActivation = 0;
    this->blendingCustomController = FRsPhysicalAnimationBlendingCustomController::None;
    this->CustomBlendInPhysics = FRsPhysicalAnimationCustomBlendInPhysics::None;
    this->ProfilePriority = 0;
    this->UpdateActorWorldPositionFromPhysics = false;
    this->UseRsDominanceGroupFromOwnerKineticActor = false;
    this->EnableRagdollCollisionProfile = false;
    this->EnableHardcodedCollisionSettings = false;
    this->ApplyRootMotion = false;
    this->ZeroRsPhysicsVelocity = false;
    this->ConfigureCollisionSettingsForCharacterWeapons = false;
    this->ModifyPhysicsAssetCollisionsToIncludeWeapons = false;
    this->SetupRagdollSoundEvents = false;
    this->EnableCallbackOnBeforeBlendInPhysics = false;
    this->DoNotForceDependentComponentsToPostPhysics = false;
    this->UseExclusivePhysicsScene = false;
    this->OverrideDeltaTimeForSmoothVelocity = 0.00f;
    this->PhysicalMaterialOverride = NULL;
    this->MotorsDriveProfile = NULL;
}

