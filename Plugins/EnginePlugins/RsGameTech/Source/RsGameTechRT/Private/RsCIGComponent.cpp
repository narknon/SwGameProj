#include "RsCIGComponent.h"
#include "Templates/SubclassOf.h"

void URsCIGComponent::SetTacticsService(TSubclassOf<URsCIGTacticsService> TacticsServiceClass) {
}

bool URsCIGComponent::IsMatchLeaderModeEnabled(ERsCIGMatchLeaderMode Mode) {
    return false;
}

void URsCIGComponent::EnableMatchLeaderMode(ERsCIGMatchLeaderMode Mode, FVector ModeSetting) {
}

void URsCIGComponent::DisableMatchLeaderMode(ERsCIGMatchLeaderMode Mode) {
}

URsCIGComponent::URsCIGComponent() {
    // Null default object.
}

