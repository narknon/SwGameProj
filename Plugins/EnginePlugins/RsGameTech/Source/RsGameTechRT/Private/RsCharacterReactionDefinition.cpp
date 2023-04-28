#include "RsCharacterReactionDefinition.h"

ERsCharacterReaction URsCharacterReactionDefinition::GetReactionFromDamageType(const UDamageType* DamageType) const {
    return ERsCharacterReaction::Unknown;
}

URsCharacterReactionDefinition::URsCharacterReactionDefinition() {
    // Null default object.
}

