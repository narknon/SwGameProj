#include "RsQuadrupedIKAnimInstance.h"

bool URsQuadrupedIKAnimInstance::ShouldRunIKEvaluation_Implementation() {
    return false;
}

bool URsQuadrupedIKAnimInstance::IsFootPlantedAndIKValid(const FRsFootBoneData& FootBoneData) const {
    return false;
}

bool URsQuadrupedIKAnimInstance::IsFootPlanted(FName FootBone) const {
    return false;
}

void URsQuadrupedIKAnimInstance::GetFootIKParameters(FName BoneName, FVector& EffectorLocationCS, float& ALPHA) const {
}

FRotator URsQuadrupedIKAnimInstance::GetFootEffectorRelativeRotation(FName BoneName) const {
    return FRotator{};
}

FVector URsQuadrupedIKAnimInstance::GetFootEffectorLocationCS(FName BoneName) const {
    return FVector{};
}

TArray<FName> URsQuadrupedIKAnimInstance::GetFootBoneNames() const {
    return TArray<FName>();
}

URsQuadrupedIKAnimInstance::URsQuadrupedIKAnimInstance() {
    // Null default object.
}

