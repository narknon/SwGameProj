#include "DismembermentConfiguration.h"

FDismembermentConfiguration::FDismembermentConfiguration() {
    this->bChangeToRagdoll = false;
    this->bApplyRadialImpulse = false;
    this->bTransferVelocityFromParentCharacter = false;
    this->ParentCharacterVelocityMultiplier = 0.00f;
    this->ImpulseStrength = 0.00f;
    this->AnimationToPlay = NULL;
}

