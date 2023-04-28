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
    // Null default object.
}

