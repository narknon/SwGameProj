#include "RsAIStepAsideComponent.h"


void URsAIStepAsideComponent::SetStepAsideEnabled(bool bInEnabled) {
}





void URsAIStepAsideComponent::OnCompletedReturningToPlace() {
}

void URsAIStepAsideComponent::OnCompletedReactionDelay() {
}

void URsAIStepAsideComponent::OnCompletedInitialStepAside() {
}

void URsAIStepAsideComponent::OnCompletedHolding() {
}

bool URsAIStepAsideComponent::IsStepAsideEnabled() const {
    return false;
}

float URsAIStepAsideComponent::GetLastStepAsideStateChangeTime() const {
    return 0.0f;
}

float URsAIStepAsideComponent::GetElapsedSecondsSinceLastStateChange() const {
    return 0.0f;
}

URsAIStepAsideBehaviorParameters* URsAIStepAsideComponent::GetDataDrivenParameters() const {
    return NULL;
}

ERsStepAsideState URsAIStepAsideComponent::GetCurrentStepAsideState() const {
    return ERsStepAsideState::Idle;
}

FRsStepAsideRequestData URsAIStepAsideComponent::GetCurrentStepAsideRequestData() const {
    return FRsStepAsideRequestData{};
}

void URsAIStepAsideComponent::ChangeState(ERsStepAsideState NewState) {
}

URsAIStepAsideComponent::URsAIStepAsideComponent() {
    // Null default object.
}

