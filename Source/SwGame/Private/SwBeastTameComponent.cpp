#include "SwBeastTameComponent.h"




void USwBeastTameComponent::OwnerInstigatedZeroDamage(const FRsDamageParams& DamageInfo, AActor* OtherActor, AActor* WouldBeDamageCauser) {
}

void USwBeastTameComponent::OwnerInstigatedAnyDamage(float Damage, const FRsDamageParams& DamageInfo, AActor* DamagedActor, AActor* DamageCauser) {
}

void USwBeastTameComponent::OverrideTameTimeout(bool bEnableOverride, float InOverride) {
}


void USwBeastTameComponent::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void USwBeastTameComponent::OnHeroZTargeted(AActor* InActor) {
}

void USwBeastTameComponent::OnHeroUnsheathingDone() {
}

void USwBeastTameComponent::OnHeroSheathingDone() {
}

void USwBeastTameComponent::OnHeroInstantSheathe(bool bInUnsheathed) {
}

void USwBeastTameComponent::OnHeroExitedZTarget() {
}

void USwBeastTameComponent::OnHeroEvaded() {
}

void USwBeastTameComponent::OnHeroCombatStateChanged(ARsCharacter* Character, TEnumAsByte<ERsCombatState::Type> PreviousCombatState, TEnumAsByte<ERsCombatState::Type> NewCombatState) {
}

void USwBeastTameComponent::OnHealthChanged(float PrevHealth, float Health) {
}

void USwBeastTameComponent::OnDeath(AActor* DeadActor) {
}

void USwBeastTameComponent::OnAwarnessLevelChanged(ARsAIController* InAIController, AActor* InActor, TEnumAsByte<ERsAIAwarenessLevel::Type> InPreviousAwarenessLevel, TEnumAsByte<ERsAIAwarenessLevel::Type> InNewAwarenessLevel) {
}

void USwBeastTameComponent::OnArivedHome() {
}

void USwBeastTameComponent::OnAIWakeStateChange(ARsAIController* InAIController, const bool bAwake) {
}

void USwBeastTameComponent::OnAIAttackTargetChangedEvent(ARsAIController* InAIController) {
}

bool USwBeastTameComponent::IsTamingInProgress() const {
    return false;
}

bool USwBeastTameComponent::IsTamedAndNonTargetable() {
    return false;
}

bool USwBeastTameComponent::IsTamed() const {
    return false;
}

bool USwBeastTameComponent::IsTamableBP_Implementation() const {
    return false;
}




float USwBeastTameComponent::GetTameProgressRate() const {
    return 0.0f;
}

void USwBeastTameComponent::ForceTriggerTameRegress(bool bInTameRegressEnabled, bool bInResetOnEnable) {
}

void USwBeastTameComponent::ForceTamed() {
}

void USwBeastTameComponent::ForceSendHome() {
}

void USwBeastTameComponent::ForceReleaseTame(bool bInAllowReTame) {
}



bool USwBeastTameComponent::CanStartTameRegressBP_Implementation() {
    return false;
}

USwBeastTameComponent::USwBeastTameComponent() {
    this->BeastTameRTPCName = TEXT("RTPC_BeastTameProgress");
    this->TamedAwarenessStateMachine = NULL;
    this->TameFinishAnimation = NULL;
    this->AngryAnimation = NULL;
    this->MultiplierReferenceRangeMin = 400.00f;
    this->MultiplierReferenceRangeMax = 4000.00f;
    this->BeastTameSpeedUpgradeAdd = 0.50f;
    this->TamerBBVarName = TEXT("TamerRef");
    this->IsTamedBBVarName = TEXT("IsTamed");
    this->bRetamableOnTameTimeout = false;
    this->bResetProgressOnTameStop = false;
    this->TameStartFightingIterationsScale = 3;
    this->TameSuccessFightingIterationsScale = 5;
    this->TamedEffectBlendCurve = NULL;
    this->TamingEffectBlendCurve = NULL;
    this->bIsTameable = true;
    this->bEnableTameHighLight = true;
    this->bEnableTameSuccessHighLight = true;
    this->MaxTameRadius = 1600.00f;
    this->AngryAnimationCooldown = 5.00f;
    this->CanTameWithDamage = true;
    this->BeastTameLoadoutFlag = ERsHeroLoadoutFlags::WallRunUnlocked;
    this->ProgressDecaySpeed = 2.00f;
    this->BaseProgressGainOnEvadePrcnt = 0.20f;
    this->UpgradeProgressGainOnEvadePrcnt = 0.20f;
    this->EvadeBoostDistance = 600.00f;
    this->TameDuration = 10.00f;
    this->MaxTameAttempts = 2;
    this->WarningRingFadeTime = 0.20f;
    this->WarningRingDecalMaterial = NULL;
    this->ProgressLostOnDamagePrcnt = 0.40f;
    this->TamingEffectMinAlpha = 0.33f;
    this->TameSuccessHighlightDuration = 1.00f;
    this->AudioTamed = NULL;
    this->NonTargetableWhileTricked = -1.00f;
    this->IsControlledByPlayerAndNonTargetableByAIBBVarName = TEXT("IsControlledByPlayerAndNonTargetableByAIBB");
    this->bEncounteredEnemiesWhileTrciked = false;
    this->TameSuccessTime = 0.00f;
    this->TameTimeout = 10.00f;
    this->bHoldModeAvailable = false;
    this->bCanStartTameRegressBasedOnAwareness = false;
    this->bTameRegressEnabled = true;
    this->CurTameTimeout = 0.00f;
    this->TameTimeoutOverride = -1.00f;
    this->bIsTameTimeoutOverriden = false;
    this->bStartedTimeoutProgress = false;
    this->LastTimeAngryAnimationStarted = -1.00f;
    this->bStoppedTimeoutProgress = false;
    this->DefaultAwarenessStateMachine = NULL;
    this->DefaultFightActiveIterations = 0;
    this->bCanBeTamed = false;
    this->bIsTamed = false;
    this->TameProgress = 0.00f;
    this->CurTameTime = 0.00f;
    this->TameStartTime = -1.00f;
    this->TameCount = 0;
    this->bEvadeSuccess = false;
    this->bCurrentAttackEvadeInProgress = false;
    this->WarningRingDecalComponent = NULL;
    this->OwnerAICharacter = NULL;
    this->RsAIController = NULL;
    this->Hero = NULL;
    this->bCleanedTame = true;
    this->TameDurationScale = 1.00f;
}

