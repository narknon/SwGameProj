#include "RsAIAnimInstance.h"

void URsAIAnimInstance::SetAllowMoveTransition(bool bUseMoveTransition) {
}

UBlendSpaceBase* URsAIAnimInstance::SelectNavStartAnimation(float Yaw, float Speed, const TArray<FRsNavStartAnimationSet>& NavStartAnimations) const {
    return NULL;
}

void URsAIAnimInstance::PreEnterLocomotionNavStart_Implementation() {
}

bool URsAIAnimInstance::IsPlayingArrivalTransitionAnimation() const {
    return false;
}

bool URsAIAnimInstance::HasReachedDistanceToGoal(float Distance, float Tolerance) const {
    return false;
}

bool URsAIAnimInstance::HasAnyValidNavStartAnimation(const TArray<FRsNavStartAnimationSet>& NavStartAnimations) const {
    return false;
}

float URsAIAnimInstance::GetDepartureFacingYaw() const {
    return 0.0f;
}

bool URsAIAnimInstance::GetAllowMoveTransition() const {
    return false;
}

bool URsAIAnimInstance::EvaluateNavStopCondition_Implementation() {
    return false;
}

bool URsAIAnimInstance::EvaluateNavStartCondition_Implementation() {
    return false;
}

void URsAIAnimInstance::AnimNotify_UnlockDepartureFacingYawNative_Implementation() {
}

void URsAIAnimInstance::AnimNotify_LockedFocusYawNative_Implementation() {
}

void URsAIAnimInstance::AnimNotify_LockDepartureFacingYawNative_Implementation() {
}

URsAIAnimInstance::URsAIAnimInstance() {
    // Null default object.
}

