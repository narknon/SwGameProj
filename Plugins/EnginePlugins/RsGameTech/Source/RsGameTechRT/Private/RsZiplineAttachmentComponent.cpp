#include "RsZiplineAttachmentComponent.h"

void URsZiplineAttachmentComponent::ZiplineJumpInputPressed() {
}

void URsZiplineAttachmentComponent::ZiplineEntryComplete() {
}

bool URsZiplineAttachmentComponent::ZiplineChangeDirectionInputPressed() {
    return false;
}

bool URsZiplineAttachmentComponent::TryAttachToZiplineAtLocation(const FTransform& searchTransform, const float SearchRadius, bool bDebug, float debugLifetime) {
    return false;
}


bool URsZiplineAttachmentComponent::ShouldUseGrip() const {
    return false;
}

bool URsZiplineAttachmentComponent::ShouldAllowChangeOfDirection() const {
    return false;
}

void URsZiplineAttachmentComponent::SetDesiredMovementDirection(ERsZiplineMovementDirection MovementDirection, bool bForce) {
}

void URsZiplineAttachmentComponent::ReleaseZipline() {
}

void URsZiplineAttachmentComponent::OnZiplineJumpModifierRemoved(URsHeroStateModifierDefinition* HeroStateModifier) {
}

void URsZiplineAttachmentComponent::OnZiplineDisableModifierRemoved(URsHeroStateModifierDefinition* HeroStateModifier) {
}

bool URsZiplineAttachmentComponent::OnPlayerJumpToZiplineInputPressed() {
    return false;
}

void URsZiplineAttachmentComponent::OnNavStateChanged(ERsNavState NewState, ERsNavState PrevState) {
}





void URsZiplineAttachmentComponent::OnCharacterTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void URsZiplineAttachmentComponent::OnCharacterInterrupted(ARsCharacter* Character) {
}

bool URsZiplineAttachmentComponent::IsInState(const ERsZiplineAttachmentState State) const {
    return false;
}

bool URsZiplineAttachmentComponent::IsInMovementMode(const ERsZiplineMovementMode Mode) const {
    return false;
}

bool URsZiplineAttachmentComponent::IsFullyStopped() const {
    return false;
}

bool URsZiplineAttachmentComponent::IsBraking() const {
    return false;
}

bool URsZiplineAttachmentComponent::IsBoosting() const {
    return false;
}

bool URsZiplineAttachmentComponent::IsAttached() const {
    return false;
}


bool URsZiplineAttachmentComponent::HasZiplineNearLocation(const FVector Location, const float SearchRadius, bool bExcludeCurrentZipline, bool bDebug, float debugLifetime) {
    return false;
}

bool URsZiplineAttachmentComponent::GripIsConfirm() const {
    return false;
}

float URsZiplineAttachmentComponent::GetZiplineMaxSpeed() const {
    return 0.0f;
}

float URsZiplineAttachmentComponent::GetZiplineCurrentSpeed() const {
    return 0.0f;
}

ERsZiplineAttachmentState URsZiplineAttachmentComponent::GetCurrentState() const {
    return ERsZiplineAttachmentState::Disabled;
}

float URsZiplineAttachmentComponent::GetCurrentProgressionAlongZipline() const {
    return 0.0f;
}

ERsZiplineMovementMode URsZiplineAttachmentComponent::GetCurrentMovementMode() const {
    return ERsZiplineMovementMode::Normal;
}

ERsZiplineMovementDirection URsZiplineAttachmentComponent::GetCurrentMovementDirection() const {
    return ERsZiplineMovementDirection::Descending;
}

ERsZiplineAnimationState URsZiplineAttachmentComponent::GetCurrentAnimState() const {
    return ERsZiplineAnimationState::NotAttached;
}

void URsZiplineAttachmentComponent::EnableOverrideZiplineSearchRangeMultiplier(float searchRangeMultiplier, float overrideTime) {
}

void URsZiplineAttachmentComponent::DoZiplineJump() {
}

void URsZiplineAttachmentComponent::DoSidewaysZiplineJump() {
}

void URsZiplineAttachmentComponent::DisableOverrideZiplineSearchRangeMultiplier() {
}

bool URsZiplineAttachmentComponent::CanZiplineJump(FName ActionName) const {
    return false;
}

bool URsZiplineAttachmentComponent::CanZipline() const {
    return false;
}


URsZiplineAttachmentComponent::URsZiplineAttachmentComponent() {
    // Null default object.
}

