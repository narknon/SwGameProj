#include "USwAnimNotify_HeroSoftLock.h"

UDEPRECATED_USwAnimNotify_HeroSoftLock::UDEPRECATED_USwAnimNotify_HeroSoftLock() {
    this->bReacquireSoftTarget = true;
    this->MaxDistance = 500.00f;
    this->MaxHalfAngle = 90.00f;
    this->OffsetAngle = 0.00f;
    this->MaxRotationSpeed = 720.00f;
    this->HeroRef = NULL;
}

