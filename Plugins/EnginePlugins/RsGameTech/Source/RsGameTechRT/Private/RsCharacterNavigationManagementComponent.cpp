#include "RsCharacterNavigationManagementComponent.h"

void URsCharacterNavigationManagementComponent::UpdateTransitionProgression(float Progression) {
}

bool URsCharacterNavigationManagementComponent::TrySetNavState(ERsNavState navState, bool forceNavStateChange, FName navStateChangeTag) {
    return false;
}

void URsCharacterNavigationManagementComponent::TriggerTransition(TEnumAsByte<ERsCharacterNavigationComponentType::Type> targetNavComponent, bool animationDriven) {
}

bool URsCharacterNavigationManagementComponent::ResetToBestNavState(bool forceNavStateChange, FName navStateChangeTag) {
    return false;
}

void URsCharacterNavigationManagementComponent::OnHeroStateChanged(ERsNavState NewState, ERsNavState PrevState) {
}

void URsCharacterNavigationManagementComponent::AbortTransition(bool resetNavState) {
}

URsCharacterNavigationManagementComponent::URsCharacterNavigationManagementComponent() {
    // Null default object.
}

