#include "RsBalanceBeamComponent.h"

bool URsBalanceBeamComponent::TrySwingBeamJump() {
    return false;
}

bool URsBalanceBeamComponent::TryStopSwingingOnBeam() {
    return false;
}

bool URsBalanceBeamComponent::TryStartSwingingOnBeam() {
    return false;
}

bool URsBalanceBeamComponent::TryJump() {
    return false;
}

bool URsBalanceBeamComponent::TryDropFromBeam(bool bAllowAllStates) {
    return false;
}

bool URsBalanceBeamComponent::TryClimb(bool bClimbToRight, bool& OutBlockedByCollision, bool& OutAllowMovingClimb) {
    return false;
}

bool URsBalanceBeamComponent::ShouldBeamTransitionOnRightSide() const {
    return false;
}

void URsBalanceBeamComponent::OnTurnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void URsBalanceBeamComponent::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}


void URsBalanceBeamComponent::OnNavStateExited(ERsNavState NewState, ERsNavState PrevState) {
}


bool URsBalanceBeamComponent::JustEnteredBeamWithSwing() const {
    return false;
}

bool URsBalanceBeamComponent::IsTurning() const {
    return false;
}

bool URsBalanceBeamComponent::IsSwingMovingForward() const {
    return false;
}

bool URsBalanceBeamComponent::IsSwingingUpToTopOfBeam() const {
    return false;
}

bool URsBalanceBeamComponent::IsSwingingOnBeamDesired() const {
    return false;
}

bool URsBalanceBeamComponent::IsSwingingOnBeam() const {
    return false;
}

bool URsBalanceBeamComponent::IsOnBalanceBeam() const {
    return false;
}


float URsBalanceBeamComponent::GetSwingingToTopTimeElapsed() const {
    return 0.0f;
}

float URsBalanceBeamComponent::GetSwingCharacterAngularSpeedDegrees() const {
    return 0.0f;
}

float URsBalanceBeamComponent::GetSwingCharacterAngleDegrees() const {
    return 0.0f;
}

FVector URsBalanceBeamComponent::GetSwingBeamForward() const {
    return FVector{};
}

FVector URsBalanceBeamComponent::GetSwingBeamAxis() const {
    return FVector{};
}

FVector URsBalanceBeamComponent::GetPlayerFacingDir() const {
    return FVector{};
}

bool URsBalanceBeamComponent::GetIsParallelToBeam() const {
    return false;
}

float URsBalanceBeamComponent::GetGripTimerDuration() const {
    return 0.0f;
}

float URsBalanceBeamComponent::GetForwardDistanceOnBeam() const {
    return 0.0f;
}

EBalanceBeamState URsBalanceBeamComponent::GetCurrentState() const {
    return EBalanceBeamState::NotOnBeam;
}

TEnumAsByte<ERsMonkeyBeamClimbInputMode> URsBalanceBeamComponent::GetClimbFromMonkeyInputMode() const {
    return ClimbWhenNotSwinging;
}

UPrimitiveComponent* URsBalanceBeamComponent::GetBeamComponent() const {
    return NULL;
}

FVector URsBalanceBeamComponent::GetBalanceBeamDir() const {
    return FVector{};
}

FVector URsBalanceBeamComponent::GetBalanceBeamCenter() const {
    return FVector{};
}

float URsBalanceBeamComponent::GetAngleOfEntry() const {
    return 0.0f;
}

void URsBalanceBeamComponent::FallToMonkeyBeam(bool bEjectIfBlocked, bool bSkipGripConfirmation) {
}

void URsBalanceBeamComponent::EndOnMonkeyBeam_Implementation(EBalanceBeamState NextState) {
}





bool URsBalanceBeamComponent::CanSwingBeamOnCurrentBeam() const {
    return false;
}

bool URsBalanceBeamComponent::CanOnlySwingOnCurrentBeam() const {
    return false;
}

bool URsBalanceBeamComponent::CanMonkeyBeamUnderCurrentBeam() const {
    return false;
}

bool URsBalanceBeamComponent::CanBalanceBeamWalkOnCurrentBeam() const {
    return false;
}

void URsBalanceBeamComponent::BeginOnMonkeyBeam_Implementation(EBalanceBeamState PreviousState) {
}

void URsBalanceBeamComponent::BeginOnBalanceBeam_Implementation(EBalanceBeamState PreviousState) {
}


void URsBalanceBeamComponent::BeginFallingToMonkeyBeam_Implementation(EBalanceBeamState PreviousState) {
}

void URsBalanceBeamComponent::BeginClimbingToBalanceBeam_Implementation(EBalanceBeamState PreviousState) {
}

bool URsBalanceBeamComponent::AllowSwingJumpBackwards() const {
    return false;
}

URsBalanceBeamComponent::URsBalanceBeamComponent() {
    // Null default object.
}

