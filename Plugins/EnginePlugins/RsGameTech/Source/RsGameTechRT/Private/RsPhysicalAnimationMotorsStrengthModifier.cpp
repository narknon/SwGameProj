#include "RsPhysicalAnimationMotorsStrengthModifier.h"

FRsPhysicalAnimationMotorsStrengthModifier::FRsPhysicalAnimationMotorsStrengthModifier() {
    this->bDoNotUse = false;
    this->CustomBlendCurve = NULL;
    this->HorizontalAxisType = FRsPhysicalAnimationMotorStrengthModifierHorizontalAxis::None;
    this->HorizontalAxisRange = 0.00f;
    this->VerticalAxisScale = 0.00f;
}

