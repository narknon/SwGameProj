#include "SwForcePushAbilityEffect.h"

void USwForcePushAbilityEffect::OnTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Poximity) {
}

USwForcePushAbilityEffect::USwForcePushAbilityEffect() {
    this->VelocitySpeed = 4000.00f;
    this->TorqueScalar = 0.20f;
    this->DampingCurve = NULL;
    this->MaxVerticalDistance = 250.00f;
    this->ParticleTemplate = NULL;
    this->DirectDamageTypeInst = NULL;
    this->GlancingDamageTypeInst = NULL;
    this->ForcePushCharacterSoundEffect = NULL;
    this->ForcePushPullComboCharacterSoundEffect = NULL;
    this->ForcePushCharacterGlancingSoundEffect = NULL;
    this->ForcePushNonCharacterSoundEffect = NULL;
    this->ForcePushPullComboNonCharacterSoundEffect = NULL;
    this->ForcePushNonCharacterGlancingSoundEffect = NULL;
    this->NudgeSpeed = 500.00f;
    this->PortionOfVelocityForRagdoll = 0.00f;
    this->DefaultCollisionDamageData = NULL;
    this->bShouldUseDirectionAssist = false;
    this->PullHoldComboTime = 0.50f;
    this->DynamicDeformationClass = NULL;
}

