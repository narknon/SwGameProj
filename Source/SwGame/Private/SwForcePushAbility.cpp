#include "SwForcePushAbility.h"

FVector USwForcePushAbility::GetSimplePullPushVelocityVector(AActor* InRawTarget, TEnumAsByte<ESwAbilityUpgradeLevel::Type> InUpgradeLevel, float InStrength) const {
    return FVector{};
}

USwForcePushAbility::USwForcePushAbility() {
    this->PullPushPitchRemapper = NULL;
    this->bShouldRemovePitch = false;
    this->DistanceToRemovePitch = 500.00f;
    this->bUseForwardVectorForPushDirection = true;
    this->bShouldAddPrimaryTarget = false;
    this->TraceType = TraceTypeQuery1;
    this->PushSuperHitMaxDurationMultiplier = 1.00f;
    this->PushSuperHitMinDurationMultiplier = 1.00f;
    this->PushGlancingHitMaxDurationMultiplier = 1.00f;
    this->PushGlancingHitMinDurationMultiplier = 1.00f;
    this->PushSuperHitMaxStrength = 1.60f;
    this->PushSuperHitMinStrength = 1.30f;
    this->PushSecondaryMaxStrength = 0.50f;
    this->PushSecondaryMinStrength = 0.20f;
    this->bShouldAddUserSpeed = true;
    this->PushWaveSpeed = 4000.00f;
    this->PushWaveStartDirectionOffset = 0.00f;
    this->AdditionalDurationToIgnoreCharactersInPushWaveForCollisionDamage = 1.00f;
    this->MaxDirectionVarianceAngle = 50.00f;
    this->DirectionVarianceScalingCurve = NULL;
    this->TurnDuration = -1.00f;
    this->MinSpeedToUseGroundNav = 10.00f;
    this->MountAnimation = NULL;
    this->PullPushAnimation = NULL;
    this->GroundAnimation = NULL;
    this->GroundNavRightAnimation = NULL;
    this->GroundNavLeftAnimation = NULL;
    this->AirAnimation = NULL;
    this->SpecialAnimation = NULL;
    this->GroundStaticFailAnimation = NULL;
    this->GroundNavFailAnimation = NULL;
    this->AirFailAnimation = NULL;
    this->SpecialFailAnimation = NULL;
    this->WaveParticleSystem = NULL;
    this->WaveParticleTimeToDeath = 0.00f;
    this->AudioCastStart = NULL;
    this->AudioCastStop = NULL;
    this->AudioFail = NULL;
    this->TimeSinceLastPullToCombo = 0.50f;
}

