#include "SwForceSlowAbilityEffect.h"

void USwForceSlowAbilityEffect::OnPrimitiveOverlapped(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

USwForceSlowAbilityEffect::USwForceSlowAbilityEffect() {
    this->MotionTweakName = TEXT("ForceSlow");
    this->DefaultCharacterSlowDuration = 5.00f;
    this->DefaultCharacterSlowTimeDilation = 0.75f;
    this->DefaultCharacterBoostedSlowTimeDilation = 0.25f;
    this->DefaultCharacterTimeDilationCurve = NULL;
    this->DefaultCharacterSlowDurationMultiple = 1.00f;
    this->DefaultCharacterBoostedDurationMultiple = 2.00f;
    this->DefaultNonCharacterSlowDuration = 5.00f;
    this->DefaultNonCharacterSlowTimeDilation = 0.05f;
    this->DefaultNonCharacterBoostedDurationMultiple = 2.00f;
    this->SlowRecoveryPercentDuration = 0.00f;
    this->SlowRecoveryCurve = NULL;
    this->ParticleSystemTemplate = NULL;
    this->ForceSlowSoundEffectStart = NULL;
    this->AudioSlowOverride = NULL;
    this->BoostCurve = NULL;
    this->ReleaseCurve = NULL;
    this->RatioOfDurationToPlayBoost = 0.20f;
    this->SlowSoundEffect = NULL;
}

