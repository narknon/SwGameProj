#include "SwDFXStateHandler_AboveBase.h"

float USwDFXStateHandler_AboveBase::GetXYSpeedScale_Implementation(float InAlpha, float InTime) {
    return 0.0f;
}

FVector USwDFXStateHandler_AboveBase::GetTargetPositionBP_Implementation(FVector TargetPositionOffsetted, FVector TargetPosition, FVector TargetForward, FVector HeroPosition) const {
    return FVector{};
}

FRotator USwDFXStateHandler_AboveBase::GetFallTargetRotatorBP_Implementation(FRotator RotToTarget, FRotator HeroRotator, FRotator TargetOrientation) {
    return FRotator{};
}


USwDFXStateHandler_AboveBase::USwDFXStateHandler_AboveBase() {
    // Null default object.
}

