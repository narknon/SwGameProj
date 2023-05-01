#include "SwCinematicCharacter.h"
#include "Templates/SubclassOf.h"

void ASwCinematicCharacter::SetFacialRig(USkeletalMeshComponent* NewFacialRig) {
}

void ASwCinematicCharacter::SetCustomization(URsCustomizationPiece* NewPiece) {
}

void ASwCinematicCharacter::SetAnimAttachCmp(USkeletalMeshComponent* NewRig, TSubclassOf<UAnimInstance> PostAttachAnimBPClass) {
}

void ASwCinematicCharacter::RemoveCustomizationFromSlot(TEnumAsByte<ECustomizationSlot::Type> Slot) {
}

void ASwCinematicCharacter::RemoveCustomization(const URsCustomizationPiece* NewPiece) {
}

void ASwCinematicCharacter::RemoveAnimAttachCmp(USkeletalMeshComponent* RigToRemove) {
}

URsActorSkeletalMeshComponent* ASwCinematicCharacter::GetRsMesh() const {
    return NULL;
}

USkeletalMeshComponent* ASwCinematicCharacter::GetFacialRig() const {
    return NULL;
}

ASwCinematicCharacter::ASwCinematicCharacter() {
    this->FacialRig = NULL;
}

