#include "RsPhysicalAnimationComponent.h"

void URsPhysicalAnimationComponent::OnPostPerformBlendInPhysics(USkeletalMeshComponent* SkeletalMeshComponent) {
}

void URsPhysicalAnimationComponent::OnPerformCustomBlendInPhysics_BuddyDroid(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<uint16>& InRequiredBones, TArray<FTransform>& InOutComponentSpaceTransforms, TArray<FTransform>& InBoneSpaceTransforms) {
}

void URsPhysicalAnimationComponent::OnPerformCustomBlendInPhysics(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<uint16>& InRequiredBones, TArray<FTransform>& InOutComponentSpaceTransforms, TArray<FTransform>& InBoneSpaceTransforms) {
}

void URsPhysicalAnimationComponent::HandleOnBeforeBlendInPhysics(USkeletalMeshComponent* SkeletalMeshComponent) {
}

URsPhysicalAnimationComponent::URsPhysicalAnimationComponent() {
    // Null default object.
}

