#include "RsCameraModeDefinition.h"

void URsCameraModeDefinition::SetBehaviorEnabled(const URsBaseCameraBehaviorDefinition* BehaviorDefinition, ERsCameraBehaviorCategory Category, bool bEnabled) {
}

void URsCameraModeDefinition::ResetBehaviorsToDefaults() {
}

void URsCameraModeDefinition::ReplaceBehavior(const URsBaseCameraBehaviorDefinition* OldBehaviorDefinition, URsBaseCameraBehaviorDefinition* NewBehaviorDefinition, ERsCameraBehaviorCategory Category) {
}

void URsCameraModeDefinition::RemoveBehavior(const URsBaseCameraBehaviorDefinition* BehaviorDefinition, ERsCameraBehaviorCategory Category) {
}

void URsCameraModeDefinition::InsertBehavior(const URsBaseCameraBehaviorDefinition* BehaviorDefinition, int32 Index, ERsCameraBehaviorCategory Category) {
}

bool URsCameraModeDefinition::ContainsBehavior(const URsBaseCameraBehaviorDefinition* BehaviorDefinition, ERsCameraBehaviorCategory Category) const {
    return false;
}

URsCameraModeDefinition::URsCameraModeDefinition() {
    // Null default object.
}

