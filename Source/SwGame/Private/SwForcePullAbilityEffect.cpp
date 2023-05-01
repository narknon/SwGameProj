#include "SwForcePullAbilityEffect.h"

void USwForcePullAbilityEffect::SetPullTractorRootMotionRotationEnabled(bool bInIsEnabled) {
}

void USwForcePullAbilityEffect::SetOverridePullTractorRotation(FRotator InOverrideRotation, float InOverrideBlendTime) {
}

void USwForcePullAbilityEffect::OnDoubleSlamContactCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

USwForcePullAbilityEffect::USwForcePullAbilityEffect() {
    this->ParticleTemplate = NULL;
    this->ParticleSocketName = TEXT("zTargetSocket");
    this->PullMaxDuration = 0.30f;
    this->PullBaseSpeed = 1000.00f;
    this->PullRopeSpeed = 2500.00f;
    this->DistanceToStartCatch = 0.00f;
    this->PullUserSocket = TEXT("l_wristEnd");
    this->PullDoubleUserSocket = TEXT("force_powerB");
    this->PullRopeUserSocket = TEXT("l_wristEnd");
    this->PullDefaultVictimSocket = TEXT("PullSocket");
    this->AngleJiggleScale = 4.50f;
    this->JiggleDuration = 0.30f;
    this->ForcePullEnterCharacterStartEvent = NULL;
    this->ForcePullEnterCharacterStopEvent = NULL;
    this->ForcePullLeadInCharacterEvent = NULL;
    this->ForcePullLeadInThreshold = 500.00f;
    this->ForcePullEnterNonCharacterStartEvent = NULL;
    this->ForcePullEnterNonCharacterStopEvent = NULL;
    this->PhysicalAnimationProfileForcePull = NULL;
    this->bIgnoreObjectChannel = false;
    this->bTopologyTraceChannel = false;
    this->IgnoreObjectChannel = ObjectTypeQuery1;
    this->TopologyTraceChannel = TraceTypeQuery1;
    this->DefaultCharacterYankDistance = 500.00f;
    this->DefaultCharacterClosestYank = 50.00f;
    this->TimeoutToHoldEnter = 3.00f;
    this->CounterBaseDuration = 0.50f;
    this->YankSpeed = 1000.00f;
    this->DoubleSlamDamageType = NULL;
    this->DurationToZeroYOffsetInSlam = 0.10f;
    this->AuxiliaryTractorRadius = 200.00f;
    this->AuxiliaryYankRadius = 300.00f;
    this->AuxiliaryAttachmentRadius = 300.00f;
    this->DynamicDeformationClass = NULL;
    this->TKConstraint = NULL;
    this->PullEnterStopEvent = NULL;
}

