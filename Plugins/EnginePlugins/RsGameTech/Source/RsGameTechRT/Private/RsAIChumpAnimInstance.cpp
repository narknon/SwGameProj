#include "RsAIChumpAnimInstance.h"

void URsAIChumpAnimInstance::UpdateCigChumpInHubMode(bool NewInHubMode) {
}

void URsAIChumpAnimInstance::SetCurrentGestureBlendWeight(float NewWeight) {
}

bool URsAIChumpAnimInstance::ReinitializeHomeRotation(FRotator NewHomeRotation, bool ActivateReturnToStartingPositionSetting) {
    return false;
}

bool URsAIChumpAnimInstance::IsChumpInConversation() {
    return false;
}

bool URsAIChumpAnimInstance::ChumpAnimTransitionRule_IdleToTurnInPlace() {
    return false;
}

void URsAIChumpAnimInstance::ChumpAnimSetDefaultIdle(FGameplayTag NewDefaultIdleTag) {
}

void URsAIChumpAnimInstance::ChumpAnimGetCurrentIdle(UAnimSequence*& OutIdleSequence, FGameplayTag& OutIdleTag) {
}

void URsAIChumpAnimInstance::ChumpAnimEnqueueNewIdle(FRsNarrativeConversationIdleRequest Request) {
}

bool URsAIChumpAnimInstance::ChumpAnimBlendRule_UseLookatBlendSpace() {
    return false;
}

bool URsAIChumpAnimInstance::ChumpAnimBlendRule_UseFullBodyGestures() {
    return false;
}

bool URsAIChumpAnimInstance::ChumpAnimBlendRule_UseCurrentIdleOrTransition() {
    return false;
}

bool URsAIChumpAnimInstance::ChumpAnimBlendRule_BlendOutFidgetsDuringConversation() {
    return false;
}

void URsAIChumpAnimInstance::AnimNotify_ConsiderPlayingFidget() {
}

URsAIChumpAnimInstance::URsAIChumpAnimInstance() {
    // Null default object.
}

