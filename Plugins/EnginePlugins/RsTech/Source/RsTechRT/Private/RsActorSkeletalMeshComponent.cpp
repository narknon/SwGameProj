#include "RsActorSkeletalMeshComponent.h"

bool URsActorSkeletalMeshComponent::ValidateForCompletion() {
    return false;
}

void URsActorSkeletalMeshComponent::SetFacialRig(USkeletalMeshComponent* NewFacialRig) {
}

void URsActorSkeletalMeshComponent::SetExternalToCustomizationSlot(USkeletalMeshComponent* MeshComponent, TEnumAsByte<ECustomizationSlot::Type> Slot) {
}

void URsActorSkeletalMeshComponent::SetCustomizationsAsync(const TArray<URsCustomizationPiece*>& NewPieces, const FRsOnSetCustomizationsAsyncCompleteDelegate& OnCompleteDelegate) {
}

void URsActorSkeletalMeshComponent::SetCustomizationAsync(URsCustomizationPiece* NewPiece, const FRsOnSetCustomizationsAsyncCompleteDelegate& OnCompleteDelegate) {
}

void URsActorSkeletalMeshComponent::SetCustomization(const URsCustomizationPiece* NewPiece, bool bEnsureDefaultsAreInPlace) {
}

void URsActorSkeletalMeshComponent::SetAnimAttachCmp(USkinnedMeshComponent* ParentRig, USkeletalMeshComponent* NewRig, const UClass* PostAttachAnimInstanceClass, UHavokClothAsset* ClothAsset) {
}

void URsActorSkeletalMeshComponent::SetAndAttachExternalToCustomizationSlot(USkeletalMeshComponent* MeshComponent, TEnumAsByte<ECustomizationSlot::Type> Slot, TEnumAsByte<EAttachmentType::Type> AttachType, TEnumAsByte<ECustomizationSlot::Type> ParentSlot, FName AttachSocket) {
}

void URsActorSkeletalMeshComponent::RemoveExternalAltMeshTag(FGameplayTag TagToRemove) {
}

void URsActorSkeletalMeshComponent::RemoveAnimAttachCmp(USkeletalMeshComponent* RigToRemove) {
}

void URsActorSkeletalMeshComponent::RemoveAnimationPhysicsTickDependancy(USkeletalMeshComponent* Dependent) {
}

void URsActorSkeletalMeshComponent::RemoveAllCustomiztion() {
}

void URsActorSkeletalMeshComponent::K2_RemoveCustomizationFromSlot(TEnumAsByte<ECustomizationSlot::Type> Slot) {
}

void URsActorSkeletalMeshComponent::K2_RemoveCustomization(const URsCustomizationPiece* NewPiece) {
}

USkeletalMeshComponent* URsActorSkeletalMeshComponent::GetMeshInCustomizationSlot(TEnumAsByte<ECustomizationSlot::Type> Slot) const {
    return NULL;
}

bool URsActorSkeletalMeshComponent::GetFullInfoCustomizationSlot(TEnumAsByte<ECustomizationSlot::Type> Slot, FRsCustomizationSlot& Info) const {
    return false;
}

FText URsActorSkeletalMeshComponent::GetCustomizationNameInSlot(TEnumAsByte<ECustomizationSlot::Type> Slot) const {
    return FText::GetEmpty();
}

TArray<FRsCustomizationSlot> URsActorSkeletalMeshComponent::GetAllCustomizationSlots() const {
    return TArray<FRsCustomizationSlot>();
}

void URsActorSkeletalMeshComponent::EnsureCustomizationDefaults() {
}

void URsActorSkeletalMeshComponent::EnsureAlternativeMeshes() {
}

bool URsActorSkeletalMeshComponent::CanPossiblyHaveAltMeshes() const {
    return false;
}

void URsActorSkeletalMeshComponent::CancelSetCustomizationsAsync() {
}

void URsActorSkeletalMeshComponent::ApplyMaterialSwatchByName(FName Name, TEnumAsByte<ECustomizationSlot::Type> Slot) {
}

void URsActorSkeletalMeshComponent::ApplyMaterialSwatchByIndex(int32 SwatchIndex, TEnumAsByte<ECustomizationSlot::Type> Slot) {
}

void URsActorSkeletalMeshComponent::AddExternalAltMeshTag(FGameplayTag RequestedMeshTag) {
}

void URsActorSkeletalMeshComponent::AddAnimationPhysicsTickDependancy(USkeletalMeshComponent* Dependent, bool ForceAlwaysDependOnPhysicalAnimation) {
}

URsActorSkeletalMeshComponent::URsActorSkeletalMeshComponent() {
}

