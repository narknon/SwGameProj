#include "RsInfluence.h"

FRsInfluence::FRsInfluence() {
    this->LinearType = ERsInfluenceLinearType::NONE;
    this->LinearDuration = 0.00f;
    this->AngularType = ERsInfluenceAngularType::NONE;
    this->AngularDuration = 0.00f;
    this->base = ERsBase::LOCAL;
    this->StripLinearIdentity = false;
    this->StripAngularIdentity = false;
}

