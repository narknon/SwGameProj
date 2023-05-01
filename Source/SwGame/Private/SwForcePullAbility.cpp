#include "SwForcePullAbility.h"

void USwForcePullAbility::OnForceMeterBarEmptied(FName ResponsibleForceName, float TimeUntilForceRegen) {
}



USwForcePullAbility::USwForcePullAbility() {
    this->WeightTable = NULL;
    this->PullSuccessAnimation = NULL;
    this->PullStrugleAnimation = NULL;
    this->PullAlternateAnimation = NULL;
    this->PullYankAnimation = NULL;
    this->PullFailAnimation = NULL;
    this->OutSection = TEXT("Out");
    this->HoldSection = TEXT("Hold");
    this->DropSection = TEXT("Drop");
    this->PullRopeAttachAnimation = NULL;
    this->RopePullAttachAnimBlendInTime = 0.20f;
    this->RopePullAttachAnimBlendOutTime = 1.00f;
    this->MountPullSuccessAnimation = NULL;
    this->ShakeType = NULL;
    this->bShouldTestTargetAtTrigger = false;
    this->TurnDuration = 0.50f;
    this->ParticleTemplate = NULL;
    this->ParticleSpeed = 2000.00f;
    this->ForcePullCastNonCharacterEvent = NULL;
    this->ForcePullCastNonCharacterStopEvent = NULL;
    this->ForcePullFailEvent = NULL;
    this->PullDoublePushEffectType = NULL;
    this->PullDoubleOffsetTransitionDuration = 0.20f;
    this->RopePullAirVelocityCancelPercentage = 0.25f;
    this->RopePullAirMotionStrength = 1500.00f;
}

