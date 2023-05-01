#include "SwAIBuddyDroidController.h"

void ASwAIBuddyDroidController::SignalDroidForAction() {
}

void ASwAIBuddyDroidController::ResetActionKeySignal() {
}

bool ASwAIBuddyDroidController::IsWaitingForActionKeySignal() const {
    return false;
}

void ASwAIBuddyDroidController::ExecuteOverchargeBehavior(ARsCharacter* OverchargeTarget) {
}

ASwAIBuddyDroidController::ASwAIBuddyDroidController() {
    this->DefaultOverchargeBehaviorTree = NULL;
}

