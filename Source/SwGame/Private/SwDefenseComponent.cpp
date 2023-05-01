#include "SwDefenseComponent.h"

void USwDefenseComponent::StartDefense(ARsCharacter* Attacker, const TSoftClassPtr<URsDamageType>& DamageClass, AActor* DamageCauser) {
}

void USwDefenseComponent::BlockContact(ARsCharacter* Attacker) {
}

USwDefenseComponent::USwDefenseComponent() {
    this->bCanBlockInAir = false;
}

