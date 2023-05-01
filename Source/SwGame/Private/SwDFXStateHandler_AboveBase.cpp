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
    this->FallStallAbortTime = 0.33f;
    this->FallStallAccelerationTolerance = -100.00f;
    this->InitialVelocityXYTimelineSpeed = 3.00f;
    this->FailedStartDistanceTolerance = 500.00f;
    this->FailedStartTimeTolerance = 1.00f;
    this->FallAnimation = NULL;
    this->FallAnimBlendIn = 0.10f;
    this->FallAnimBlendOut = 0.00f;
    this->OffsetFromTargetPosition = -100.00f;
    this->FallHeightAdjustment = -50.00f;
    this->FallMontage = NULL;
    this->CurrentFallAnimation = NULL;
    this->DFXStartTime = 0.00f;
    this->DFXFallStartTime = 0.00f;
    this->DFXStartFallDuration = 0.00f;
    this->FallMontagePlayTime = 0.00f;
    this->FallStallTime = -1.00f;
    this->FallStartTime = 0.00f;
    this->FallDuration = 0.00f;
    this->FallPrevSpeed = 0.00f;
    this->StartFallHeight = 0.00f;
    this->CurrentFallAlpha = 0.00f;
    this->HeroCapsuleSize = 0.00f;
    this->TargetCapsuleSize = 0.00f;
    this->bStartedFall = false;
}

