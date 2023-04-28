#include "RsAIPOI.h"

void ARsAIPOI::UsePOI() {
}

bool ARsAIPOI::ShouldDisableOnInteract() const {
    return false;
}

void ARsAIPOI::SetSyncPointComponent(USceneComponent* InSyncPoint) {
}

void ARsAIPOI::OnEncounterInstanceIncremented() {
}

bool ARsAIPOI::IsSyncSlotFull() const {
    return false;
}

bool ARsAIPOI::IsEnabled() const {
    return false;
}

FRotator ARsAIPOI::GetSyncPointRotation() const {
    return FRotator{};
}

FVector ARsAIPOI::GetSyncPointLocation() const {
    return FVector{};
}

FVector ARsAIPOI::GetSyncPointForwardVector() const {
    return FVector{};
}

USceneComponent* ARsAIPOI::GetSyncPointComponent() const {
    return NULL;
}

float ARsAIPOI::GetLastInteractionTime() const {
    return 0.0f;
}

float ARsAIPOI::GetCooldownDuration() const {
    return 0.0f;
}

void ARsAIPOI::EnablePOI() {
}

void ARsAIPOI::DisablePOI(ERsAIPOIBehaviorAction BehaviorAction, bool bTriggerUseEventOnAbort) {
}

void ARsAIPOI::DisableAllPOIsWithMatchingTags(FGameplayTagContainer IgnoredTags) {
}

ARsAIPOI::ARsAIPOI() {
    // Null default object.
}

