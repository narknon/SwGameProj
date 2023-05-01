#include "SwForceFocusAbility.h"

USwForceFocusAbility::USwForceFocusAbility() {
    this->AudioCastStart = NULL;
    this->AudioCastStop = NULL;
    this->AudioFail = NULL;
    this->HighlightType = ESwHighlightType::ForceFocusTarget;
    this->TurnDuration = 0.20f;
}

