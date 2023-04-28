#include "RsOilBlueprintEffectHandler.h"

bool URsOilBlueprintEffectHandler::ShouldSpawnFlameEffectsAttached(USceneComponent* ParentComponent) const {
    return false;
}










bool URsOilBlueprintEffectHandler::GetIsDebugEnabled() {
    return false;
}

bool URsOilBlueprintEffectHandler::CheckOilAudioDataValidity(FOilIgnitionAudioInfo Info) {
    return false;
}

URsOilBlueprintEffectHandler::URsOilBlueprintEffectHandler() {
    // Null default object.
}

