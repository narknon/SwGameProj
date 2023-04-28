#include "SwWallRunComponent.h"

void USwWallRunComponent::TriggerTransitionToWallHang() {
}

void USwWallRunComponent::SetWallRunState(const ESwWallRunState State) {
}




bool USwWallRunComponent::IsWallRunJumping() const {
    return false;
}

bool USwWallRunComponent::IsWallRunFalling() const {
    return false;
}


bool USwWallRunComponent::HasWallRunExpired() const {
    return false;
}

float USwWallRunComponent::GetWallRunTotalTime() const {
    return 0.0f;
}

ESwWallRunState USwWallRunComponent::GetWallRunState() const {
    return ESwWallRunState::NotWallRunning;
}

ERsCharacterWallSide USwWallRunComponent::GetWallRunSide() const {
    return ERsCharacterWallSide::NotOnWall;
}

float USwWallRunComponent::GetWallRunRemainingTime() const {
    return 0.0f;
}

FVector USwWallRunComponent::GetWallRunMovementDirection() const {
    return FVector{};
}

float USwWallRunComponent::GetWallRunExpiredElapsedTime() const {
    return 0.0f;
}

float USwWallRunComponent::GetWallRunElapsedTime() const {
    return 0.0f;
}

float USwWallRunComponent::GetWallRunAbsoluteElapsedTime() const {
    return 0.0f;
}

FVector USwWallRunComponent::GetWallNormal() const {
    return FVector{};
}


void USwWallRunComponent::EndWallRun(const ERsWallRunEndReason Reason) {
}

bool USwWallRunComponent::CanTransitionToWallHang() const {
    return false;
}

bool USwWallRunComponent::BeginWallRun(const ERsCharacterWallSide WallSide, const bool bShouldHaveInputGracePeriod) {
    return false;
}

void USwWallRunComponent::_OnWallTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity) {
}

void USwWallRunComponent::_OnWallRunFallHeroStateModifierRemoved(URsHeroStateModifierDefinition* fallModifier) {
}

void USwWallRunComponent::_OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void USwWallRunComponent::_OnGroundTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity) {
}

void USwWallRunComponent::_OnCharacterInterrupted(ARsCharacter* myCharacter) {
}

USwWallRunComponent::USwWallRunComponent() {
    // Null default object.
}

