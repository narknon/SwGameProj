#include "RsAbilityState.h"

ERsCombatDefenseSuccessType URsAbilityState::OnDefenseSuccess_Implementation(ARsCharacter* TheDefender, const FRsDamageParams& DamageInfo, ARsCharacter* AttackingCharacter, AActor* DamageCauser) {
    return CDS_None;
}

AActor* URsAbilityState::GetCurrentAbilityTarget() const {
    return NULL;
}

URsAbilityState::URsAbilityState() {
    // Null default object.
}

