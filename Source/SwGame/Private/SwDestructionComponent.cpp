#include "SwDestructionComponent.h"

void UDEPRECATED_SwDestructionComponent::PlayPartOfAnimation(USkeletalMeshComponent* SkeletalMeshComponentToPlayAnimation, const float TimeToPlay) {
}

void UDEPRECATED_SwDestructionComponent::AdvanceAnimationFrames(USkeletalMeshComponent* SkeletalMeshComponentToPlayAnimation, const int32 NumberOfFramesToAdvance) {
}

UDEPRECATED_SwDestructionComponent::UDEPRECATED_SwDestructionComponent() {
    this->TargetSkeletalMeshComponent = NULL;
    this->DebugPerformanceSkeletalMeshComponent = NULL;
}

