#include "RsAIBehaviorState.h"

ARsAIController* URsAIBehaviorState::GetRsOwner() const {
    return NULL;
}

URsAIBehaviorStateMachine* URsAIBehaviorState::GetOwningStateMachine() const {
    return NULL;
}

void URsAIBehaviorState::CompleteState() {
}

URsAIBehaviorState::URsAIBehaviorState() {
    // Null default object.
}

