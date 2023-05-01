#include "SwDefenseDefinition.h"

EDefenseTypes USwDefenseDefinition::GetDefenseFromDamageType(const TSoftClassPtr<URsDamageType> DamageType) const {
    return EDefenseTypes::Unknown;
}

USwDefenseDefinition::USwDefenseDefinition() {
}

