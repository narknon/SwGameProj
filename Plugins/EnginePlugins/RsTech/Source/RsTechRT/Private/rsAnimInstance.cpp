#include "rsAnimInstance.h"

ArsActor* UrsAnimInstance::TryGetRsActorOwner() const {
    return NULL;
}

void UrsAnimInstance::SetIsSyncing(bool NewIsSyncing) {
}

bool UrsAnimInstance::MotionSampleIsLessThan(const TEnumAsByte<ERsMotionSample> motionSample, const float V) const {
    return false;
}

bool UrsAnimInstance::MotionSampleIsInRange(const TEnumAsByte<ERsMotionSample> motionSample, const float RangeMin, const float RangeMax) const {
    return false;
}

bool UrsAnimInstance::MotionSampleIsGreaterThan(const TEnumAsByte<ERsMotionSample> motionSample, const float V) const {
    return false;
}

void UrsAnimInstance::LockMotionSample(const TEnumAsByte<ERsMotionSample> motionSample, const bool Lock) {
}

bool UrsAnimInstance::IsSyncing() const {
    return false;
}

bool UrsAnimInstance::IsSlotActive(FName SlotName) const {
    return false;
}

bool UrsAnimInstance::IgnoreMotionSampleOrIsLessThan(const TEnumAsByte<ERsMotionSample> motionSample, const float V, const float ignoreValue, const bool ignoredReturn) const {
    return false;
}

bool UrsAnimInstance::IgnoreMotionSampleOrIsInRange(const TEnumAsByte<ERsMotionSample> motionSample, const float RangeMin, const float RangeMax, const float ignoreValue, const bool ignoredReturn) const {
    return false;
}

bool UrsAnimInstance::IgnoreMotionSampleOrIsGreaterThan(const TEnumAsByte<ERsMotionSample> motionSample, const float V, const float ignoreValue, const bool ignoredReturn) const {
    return false;
}

bool UrsAnimInstance::GetVariableAsInteger(int32& Value, const FRsScriptVariable& Variable) {
    return false;
}

bool UrsAnimInstance::GetVariableAsFloat(float& Value, const FRsScriptVariable& Variable) {
    return false;
}

bool UrsAnimInstance::GetVariableAsBool(bool& Value, const FRsScriptVariable& Variable) {
    return false;
}

FTransform UrsAnimInstance::GetRootMotionTransform() const {
    return FTransform{};
}

FRotator UrsAnimInstance::GetRootMotionRotation() const {
    return FRotator{};
}

TEnumAsByte<ERootMotionMode::Type> UrsAnimInstance::GetRootMotionMode() const {
    return ERootMotionMode::NoRootMotionExtraction;
}

float UrsAnimInstance::GetMotionSample(const TEnumAsByte<ERsMotionSample> motionSample) const {
    return 0.0f;
}

void UrsAnimInstance::GetCurrentStateForStateMachine(FName MachineName, FName& StateName, bool& bFullyBlendedIn) {
}

FName UrsAnimInstance::GetAnimNamePlayingInSlot(FName SlotName) {
    return NAME_None;
}

bool UrsAnimInstance::FindVariable(FRsScriptVariable& Variable, const FName VariableName) const {
    return false;
}

UrsAnimInstance::UrsAnimInstance() {
}

