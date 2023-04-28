#include "TransitionGenerationInfo.h"

FTransitionGenerationInfo::FTransitionGenerationInfo() {
    this->Priority = 0;
    this->bIsPreEvalTransition = false;
    this->bUseAutomaticTransitionRule = false;
    this->bRunOnEndOnBeginForPreEval = false;
    this->bIsBidirectional = false;
}

