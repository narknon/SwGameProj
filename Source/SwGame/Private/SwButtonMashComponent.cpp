#include "SwButtonMashComponent.h"

void USwButtonMashComponent::OnDied(AActor* DeadActor) {
}

void USwButtonMashComponent::MontageStarted(UAnimMontage* Montage) {
}

void USwButtonMashComponent::MontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

float USwButtonMashComponent::GetCurrentButtonHoldTime() const {
    return 0.0f;
}

float USwButtonMashComponent::GetCurHoldToPressDuration() {
    return 0.0f;
}

USwButtonMashComponent::USwButtonMashComponent() {
    this->ButtonMashAnimNotifyTimeout = 10.00f;
}

