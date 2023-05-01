#include "SwHolofightEditorComponent.h"

bool USwHolofightEditorComponent::IsEditor() {
    return false;
}

bool USwHolofightEditorComponent::AddChallengeToDataTable(const FName ChallengeName, FSwHolofightChallengeData ChallengeData) {
    return false;
}

USwHolofightEditorComponent::USwHolofightEditorComponent() {
    this->HolofightChallengesDataTable = NULL;
}

