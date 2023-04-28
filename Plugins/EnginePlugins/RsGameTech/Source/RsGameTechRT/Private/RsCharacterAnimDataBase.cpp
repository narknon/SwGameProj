#include "RsCharacterAnimDataBase.h"

FRsCharacterAnimDataBase::FRsCharacterAnimDataBase() {
    this->StartTime = 0.00f;
    this->PlayRandomAnimation = false;
    this->Playrate = 0.00f;
    this->bStopAnimOnAbort = false;
    this->BlendInTime = 0.00f;
    this->BlendModeIn = EMontageBlendMode::Standard;
    this->BlendOutTime = 0.00f;
    this->BlendModeOut = EMontageBlendMode::Standard;
    this->LoopCount = 0;
    this->BlendOutTriggerTime = 0.00f;
    this->bUseMontage = false;
    this->bUseBlendSpace = false;
}

