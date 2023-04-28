#include "SwRopeAttachmentComponent.h"

bool USwRopeAttachmentComponent::SwingImpactFound() const {
    return false;
}

void USwRopeAttachmentComponent::SetupRopeHandAttachments(URsRopeComponent* Rope, const bool leftHand, const bool rightHand, const bool activateAutoAttach) {
}

void USwRopeAttachmentComponent::SetHandPosition(ESwRopeAttachmentHandPosition HandPosition) {
}

void USwRopeAttachmentComponent::RemoveRopeHipAttachment() {
}

void USwRopeAttachmentComponent::RemoveRopeHandAttachments(bool bRemoveLeftHand, bool bRemoveRightHand) {
}

void USwRopeAttachmentComponent::OnGroundTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity) {
}

void USwRopeAttachmentComponent::OnCharacterDeath(AActor* DeadActor) {
}

bool USwRopeAttachmentComponent::IsSwingInputActive() const {
    return false;
}

bool USwRopeAttachmentComponent::IsRopeValidForAttachment_Implementation(const URsRopeComponent* Rope, const bool bIsAutoAttachment) const {
    return false;
}


bool USwRopeAttachmentComponent::IsPlayingRopeDetachMontage() const {
    return false;
}

bool USwRopeAttachmentComponent::IsPlayingRopeAttachMontage() const {
    return false;
}

bool USwRopeAttachmentComponent::IsPlayingRopeAnticipateAttachMontage() const {
    return false;
}

bool USwRopeAttachmentComponent::IsOnGround() const {
    return false;
}

bool USwRopeAttachmentComponent::IsInSwingTurningState() const {
    return false;
}

bool USwRopeAttachmentComponent::IsInSwingStartedState() const {
    return false;
}

bool USwRopeAttachmentComponent::IsInSwingingState() const {
    return false;
}

bool USwRopeAttachmentComponent::IsInSwingingForwardState() const {
    return false;
}

bool USwRopeAttachmentComponent::IsInSwingingBackwardState() const {
    return false;
}

bool USwRopeAttachmentComponent::IsInStrafingState() const {
    return false;
}

bool USwRopeAttachmentComponent::IsInDetachingFromRopeState() const {
    return false;
}

bool USwRopeAttachmentComponent::IsInClimbTurningState() const {
    return false;
}

bool USwRopeAttachmentComponent::IsInClimbingState() const {
    return false;
}


bool USwRopeAttachmentComponent::IsClimbInputActive() const {
    return false;
}

bool USwRopeAttachmentComponent::IsCeilingClimbTransitionInRange() const {
    return false;
}

bool USwRopeAttachmentComponent::IsAnticipateRopeAttachAllowed() const {
    return false;
}

float USwRopeAttachmentComponent::GetTimeOnGround() const {
    return 0.0f;
}

float USwRopeAttachmentComponent::GetTimeInCurrentState() const {
    return 0.0f;
}

float USwRopeAttachmentComponent::GetTimeAttachedToRope() const {
    return 0.0f;
}

bool USwRopeAttachmentComponent::GetTargetSwingingTurnAroundState_Implementation(ESwRopeAttachmentState& outNextState) const {
    return false;
}

ESwRopeAttachmentState USwRopeAttachmentComponent::GetTargetClimbState_Implementation() const {
    return ESwRopeAttachmentState::NotAttachedToRope;
}

ESwRopeAttachmentState USwRopeAttachmentComponent::GetState() const {
    return ESwRopeAttachmentState::NotAttachedToRope;
}

ESwRopeAttachmentState USwRopeAttachmentComponent::GetNextState() const {
    return ESwRopeAttachmentState::NotAttachedToRope;
}


URsRopeComponent* USwRopeAttachmentComponent::GetLastAttachedRope() const {
    return NULL;
}

ESwRopeAttachmentHandPosition USwRopeAttachmentComponent::GetHandPosition() const {
    return ESwRopeAttachmentHandPosition::RightHandUp;
}


URsRopeComponent* USwRopeAttachmentComponent::FindRopeForAttachment(int32& outClosestParticleIndex, float& outDistSq, bool bUseAnticapteAttachRope) const {
    return NULL;
}

void USwRopeAttachmentComponent::DontDetachRopeOnNextSync() {
}

void USwRopeAttachmentComponent::DetachFromRopeWithMontage(UAnimationAsset* Anim) {
}



void USwRopeAttachmentComponent::AddRopeHipAttachment(const FName& Bone) {
}

USwRopeAttachmentComponent::USwRopeAttachmentComponent() {
    // Null default object.
}

