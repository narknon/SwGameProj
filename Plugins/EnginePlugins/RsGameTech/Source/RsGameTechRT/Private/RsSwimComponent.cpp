#include "RsSwimComponent.h"

void URsSwimComponent::SwitchDirectlyToDivingInNextVolume() {
}

void URsSwimComponent::StartPlayingUnderwaterBoostAnimation() {
}

void URsSwimComponent::StartDivingButtonReleased() {
}

void URsSwimComponent::StartDivingButtonPushed() {
}

void URsSwimComponent::StartDivingButtonHeld() {
}

void URsSwimComponent::StartDiving() {
}

bool URsSwimComponent::ShouldExitSwimmingInVolume() {
    return false;
}

bool URsSwimComponent::SetDesiredState(ERsSwimState DesiredState) {
    return false;
}

void URsSwimComponent::RemoveOverrideForDownwardAndUpwardSpeed() {
}

void URsSwimComponent::OverrideDownwardAndUpwardSpeed(float newDownwardSpeed, float newUpwardSpeed) {
}


void URsSwimComponent::OnNavStateExited(ERsNavState NewState, ERsNavState PrevState) {
}

void URsSwimComponent::OnIsInWaterStateChanged(ARsCharacter* RsCharacter, ARsNavVolume* Volume, bool bIsInWater, bool bWasInWater) {
}

bool URsSwimComponent::IsUnderwaterBoostAllowed() const {
    return false;
}

float URsSwimComponent::GetWaterVolumeSurfaceZ() const {
    return 0.0f;
}

ERsSwimState URsSwimComponent::GetCurrentState() const {
    return ERsSwimState::None;
}

bool URsSwimComponent::GetAnticipateSwimAfterCinematic() const {
    return false;
}

void URsSwimComponent::DiveUpwardButtonReleased() {
}

void URsSwimComponent::DiveUpwardButtonPushed() {
}

void URsSwimComponent::DiveDownwardButtonReleased() {
}

void URsSwimComponent::DiveDownwardButtonPushed() {
}

void URsSwimComponent::AnticipateSwimAfterCinematic() {
}

URsSwimComponent::URsSwimComponent() {
    // Null default object.
}

