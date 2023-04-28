#include "RsGameAnimInstance.h"

void URsGameAnimInstance::SetOverrideIkOffsetForNextTopologyActivation(const FVector& Offset) {
}

void URsGameAnimInstance::RequestForceUnlockIk() {
}

int32 URsGameAnimInstance::RemoveIKModifier(URsIKModifier* Modifier) {
    return 0;
}

bool URsGameAnimInstance::GetSlotAnimMarkupInfoByAnimName(FName AnimName, FRsAnimMarkupData& AnimInfo) {
    return false;
}

bool URsGameAnimInstance::GetSlotAnimMarkupInfo(FName SlotName, bool bIsForTransition, FName& AnimName, FRsAnimMarkupData& AnimInfo) {
    return false;
}

float URsGameAnimInstance::GetAdjustmentBlendAlpha(FName Channel) const {
    return 0.0f;
}

void URsGameAnimInstance::DisableAdjustmentBlends() {
}

void URsGameAnimInstance::ClearOverrideIkOffsetForNextTopologyActivation() {
}

URsIKOverrideModifier* URsGameAnimInstance::AddIkOverrideForDuration(const FRsIKOverride& IkOverride, float Duration) {
    return NULL;
}

URsIKOverrideModifier* URsGameAnimInstance::AddIkOverride(const FRsIKOverride& IkOverride) {
    return NULL;
}

int32 URsGameAnimInstance::AddIKModifier(URsIKModifier* Modifier) {
    return 0;
}

URsIKDisableIKModifier* URsGameAnimInstance::AddDisableIkModifier(const TArray<ERsIkBoneType>& BonesToDisable) {
    return NULL;
}

URsGameAnimInstance::URsGameAnimInstance() {
    // Null default object.
}

