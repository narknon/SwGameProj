#include "SwMindTrickComponent.h"





bool USwMindTrickComponent::RunMindTrickBehavior_Implementation() const {
    return false;
}

UAnimSequenceBase* USwMindTrickComponent::OverrideMindTrickFinishAnimation_Implementation(UAnimSequenceBase* InMindTrickFinishAnimation) {
    return NULL;
}


void USwMindTrickComponent::OnHealthChanged(float PrevHealth, float Health) {
}


void USwMindTrickComponent::OnDeath(AActor* DeadActor) {
}

void USwMindTrickComponent::OnAIWakeStateChange(ARsAIController* InAIController, const bool bAwake) {
}

bool USwMindTrickComponent::IsTrickingInProgress() const {
    return false;
}

bool USwMindTrickComponent::IsTrickedAndNonTargetable() {
    return false;
}

bool USwMindTrickComponent::IsTrickableBP_Implementation() const {
    return false;
}

bool USwMindTrickComponent::IsMindTricked() const {
    return false;
}




int32 USwMindTrickComponent::GetMindTrickSuccessFightingIterations_Implementation(int32 InDefaultFightActiveIterations) const {
    return 0;
}

void USwMindTrickComponent::ForceReleaseMindTrick(bool bInAllowReMindTrick) {
}

void USwMindTrickComponent::ForceMindTricked() {
}

void USwMindTrickComponent::FinishMindTrickBT() {
}



USwMindTrickComponent::USwMindTrickComponent() {
    this->MindTrickRTPCName = TEXT("RTPC_MindTrickProgress");
    this->MindTrickedAwarenessStateMachine = NULL;
    this->MindTrickFinishAnimation = NULL;
    this->AngryAnimation = NULL;
    this->MindTrickEndAnimation = NULL;
    this->MindTrickBBVarName = TEXT("MindTrickRef");
    this->MindTrickIdleBeaviorBBVarName = TEXT("MindTrickIdleBeavior");
    this->IsMindTrickedBBVarName = TEXT("IsMindTricked");
    this->HighlightType = ESwHighlightType::BeastTame;
    this->bForceAggroWhenMindTrickEnds = true;
    this->BehaviorTreeToRun = NULL;
    this->MindTrickSuccessFightingIterationsScale = 1;
    this->MindTrickedEffectBlendCurve = NULL;
    this->bIsMindTrickable = true;
    this->bEnableMindTrickSuccessHighLight = true;
    this->MaxMindTrickRadius = 1600.00f;
    this->AngryAnimationCooldown = 0.00f;
    this->CanMindTrickWithDamage = true;
    this->MindTrickLoadoutFlag = ERsHeroLoadoutFlags::WallRunUnlocked;
    this->ProgressDecaySpeed = 2.00f;
    this->DurationToTrick = 2.00f;
    this->ForceAwarenesOnAIRadius = 1000.00f;
    this->MaxMindTrickAttempts = 1;
    this->ProgressLostOnDamagePrcnt = 0.40f;
    this->TrickingEffectMinAlpha = 0.33f;
    this->MindTrickFactionSwitchDelay = 1.00f;
    this->MindTrickSuccessHighlightDuration = 1.00f;
    this->AudioMindTricked = NULL;
    this->bCountOnlyDamageInflictingAttacks = false;
    this->bCountOnlyFinishedAttacks = true;
    this->MindTrickMaxTime = -1.00f;
    this->NonTargetableWhileTricked = -1.00f;
    this->IsControlledByPlayerAndNonTargetableByAIBBVarName = TEXT("IsControlledByPlayerAndNonTargetableByAIBB");
    this->MindTrickBehaviorStartTime = -1.00f;
    this->bStartedTimeoutProgress = false;
    this->LastTimeAngryAnimationStarted = -1.00f;
    this->bStoppedTimeoutProgress = false;
    this->DefaultAwarenessStateMachine = NULL;
    this->DefaultFightActiveIterations = 0;
    this->MindTrickState = EMindTrickState::Inactive;
    this->bPausedTimeline = false;
    this->bCanBeMindTricked = false;
    this->bIsMindTricked = false;
    this->MindTrickStartTime = -1.00f;
    this->MindTrickCount = 0;
    this->OwnerAICharacter = NULL;
    this->RsAIController = NULL;
    this->StoredTurnInPlaceThresholdMin = 0.00f;
    this->StoredTurnInPlaceThresholdMax = 0.00f;
    this->Hero = NULL;
    this->bCleanedMindTrick = true;
    this->bPlayingOutro = false;
    this->MindTrickHoldSuccessTime = 0.00f;
    this->bSetAllyTag = false;
}

