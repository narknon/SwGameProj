#include "SwAnimNotifyState_Highlight.h"

USwAnimNotifyState_Highlight::USwAnimNotifyState_Highlight() {
    this->HighlightType = ESwHighlightType::Unblockable;
    this->BlendCurve = NULL;
    this->bShouldPlayAudio = true;
    this->AudioStart = NULL;
    this->AudioEnd = NULL;
}

