#include "SwSuperJumpComponent.h"





bool USwSuperJumpComponent::IsJumping() const {
    return false;
}

bool USwSuperJumpComponent::IsJumpDescending() const {
    return false;
}

bool USwSuperJumpComponent::IsJumpAscending() const {
    return false;
}

bool USwSuperJumpComponent::IsCharging() const {
    return false;
}

bool USwSuperJumpComponent::IsChargeComplete() const {
    return false;
}

ESwSuperJumpState USwSuperJumpComponent::GetState() const {
    return ESwSuperJumpState::NotChargingOrJumping;
}

void USwSuperJumpComponent::EndJump() {
}

void USwSuperJumpComponent::EndCharge(const ESwSuperJumpEndChargeReason Reason) {
}

void USwSuperJumpComponent::BeginJump() {
}

void USwSuperJumpComponent::BeginCharge() {
}

void USwSuperJumpComponent::_OnTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity) {
}

void USwSuperJumpComponent::_OnTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void USwSuperJumpComponent::_OnCharacterInterrupted(ARsCharacter* InterruptedCharacter) {
}

USwSuperJumpComponent::USwSuperJumpComponent() {
    this->Settings = NULL;
}

