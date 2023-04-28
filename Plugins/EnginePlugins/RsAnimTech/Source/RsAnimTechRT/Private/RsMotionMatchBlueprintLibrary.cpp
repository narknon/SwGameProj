#include "RsMotionMatchBlueprintLibrary.h"

UAnimSequence* URsMotionMatchBlueprintLibrary::SelectSequenceByRootVelocityAtStart(const UAnimInstance* AnimInstance, TArray<UAnimSequence*> InputSequences, float SearchDuration) {
    return NULL;
}

UAnimSequence* URsMotionMatchBlueprintLibrary::PoseMatchSequence(const UAnimInstance* AnimInstance, TArray<UAnimSequence*> InputSequences, const FRsPoseMatchWeightAndBoneOptions& Option, float& OutStartTime, int32& OutFrame) {
    return NULL;
}

UBlendSpaceBase* URsMotionMatchBlueprintLibrary::PoseMatchBlendSpace(const UAnimInstance* AnimInstance, TArray<UBlendSpaceBase*> InputBlendSpaces, const FVector& BlendInput, const FRsPoseMatchWeightAndBoneOptions& Option, float& OutStartPosition, UAnimSequence*& OutSequence, int32& OutFrame) {
    return NULL;
}

FVector URsMotionMatchBlueprintLibrary::GetRootVelocityAtStart(const UAnimSequence* InSequence, float SearchDuration) {
    return FVector{};
}

FVector URsMotionMatchBlueprintLibrary::GetRootVelocity(const UAnimSequence* InSequence, int32 Frame) {
    return FVector{};
}

float URsMotionMatchBlueprintLibrary::GetRootDistance(const UAnimSequence* InSequence, int32 Frame) {
    return 0.0f;
}

float URsMotionMatchBlueprintLibrary::GetRemainingRootDistance(const UAnimSequence* InSequence, int32 Frame) {
    return 0.0f;
}

int32 URsMotionMatchBlueprintLibrary::GetMotionMetaDataAtTime(const UAnimSequence* InSequence, float Time, TArray<FName>& OutBoneNames, TArray<FRsAnimMotionBoneData>& OutMotionData) {
    return 0;
}

int32 URsMotionMatchBlueprintLibrary::GetMotionMetaDataAtFrame(const UAnimSequence* InSequence, int32 Frame, TArray<FName>& OutBoneNames, TArray<FRsAnimMotionBoneData>& OutMotionData) {
    return 0;
}

URsMotionMatchBlueprintLibrary::URsMotionMatchBlueprintLibrary() {
    // Null default object.
}

