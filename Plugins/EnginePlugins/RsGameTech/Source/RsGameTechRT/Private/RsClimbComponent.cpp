#include "RsClimbComponent.h"

void URsClimbComponent::UpdateReachState(bool shouldReach) {
}

void URsClimbComponent::UnlockPadInputOrientation() {
}

bool URsClimbComponent::TryRetargetingClimbSameWallMovement() {
    return false;
}

bool URsClimbComponent::TryAttachToClimbAtTransform(FTransform Transform, bool AlignWithActor, bool bSkipEntryAnim, bool drawDebug, float debugLifetime) {
    return false;
}

void URsClimbComponent::TriggerSurfaceTransitionMotion(float Duration) {
}

void URsClimbComponent::TriggerSurfaceTransition() {
}

void URsClimbComponent::TriggerQueuedClimbing(float climbDuration) {
}

void URsClimbComponent::TriggerQueuedCinematicNavigation() {
}

void URsClimbComponent::TriggerMovementSurfaceTransition() {
}

bool URsClimbComponent::StopClimbing() {
    return false;
}

void URsClimbComponent::StartDurationBasedClimbing(float Duration) {
}

void URsClimbComponent::StartClimbing() {
}

void URsClimbComponent::SkipGripInputForNextAttachment(float Timeout) {
}

void URsClimbComponent::SkipEntryAnimationForNextAttach(float Timeout) {
}



bool URsClimbComponent::ShouldUseGripForEntry(ERsClimbEntryType EntryType) const {
    return false;
}

bool URsClimbComponent::ShouldUseGrip() const {
    return false;
}

bool URsClimbComponent::ShouldUpdateGrabGripUI() const {
    return false;
}

bool URsClimbComponent::ShouldTickBP_Implementation() const {
    return false;
}

void URsClimbComponent::SetMovementRetargetingAllowed(bool allowed) {
}

void URsClimbComponent::SetMovementCancelingAllowed(bool allowed) {
}

void URsClimbComponent::SetDisabledJumpDirections(const UObject* Owner, const FRsDisabledConstrainedJumpDirections& disabledJumpDirections) {
}

void URsClimbComponent::SetCeilingHeadingImmediate(const FVector& desiredFacingDirection) {
}

void URsClimbComponent::RotateCeilingHeadingTowards(const FVector& desiredFacingDirection, const float DeltaTime) {
}

void URsClimbComponent::ResetDisabledJumpDirections(const UObject* Owner) {
}

void URsClimbComponent::ReleaseClimb() {
}

void URsClimbComponent::ReenableRotationInJumpAnimations() {
}

bool URsClimbComponent::QueueJumpOffWall(FRsConstrainedJumpWeights jumpWeights) {
    return false;
}

bool URsClimbComponent::QueueJumpOffCeiling(FVector JumpDirection) {
    return false;
}

bool URsClimbComponent::QueueClimbing() {
    return false;
}

void URsClimbComponent::QueueCinematicNavigation(const FRsCharacterAnimationData& AnimData, bool waitForTrigger, const FRsCinematicNavigationDelegate& cinematicNavigationDelegate, float Timeout, FName Tag) {
}


void URsClimbComponent::OnSurfaceTransitionMovementTimedOut() {
}


void URsClimbComponent::OnSkipGripInputTimedOut() {
}

void URsClimbComponent::OnSkipEntryInputTimedOut() {
}

void URsClimbComponent::OnQueuedJumpTimedOut() {
}

void URsClimbComponent::OnQueuedJumpMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

void URsClimbComponent::OnQueuedClimbingTimedOut() {
}

void URsClimbComponent::OnDropOffStartedOrEnded(FGameplayTag DropoffTag, int32 TagCount) {
}





void URsClimbComponent::OnCharacterTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void URsClimbComponent::OnCharacterInterrupted(ARsCharacter* InterruptedCharacter) {
}

void URsClimbComponent::OnBeginPivotAnimation() {
}


void URsClimbComponent::LockPadInputOrientation() {
}

bool URsClimbComponent::IsWallClimb() const {
    return false;
}

bool URsClimbComponent::IsPlayerTryingToClimb() const {
    return false;
}

bool URsClimbComponent::IsPadInputOrientationLocked() const {
    return false;
}

bool URsClimbComponent::IsInState(ERsClimbState climbState) const {
    return false;
}

bool URsClimbComponent::IsInNavTransition() const {
    return false;
}

bool URsClimbComponent::IsInCinematicNavigation() const {
    return false;
}

bool URsClimbComponent::IsCurrentSurfaceTransitionCancelable() const {
    return false;
}

bool URsClimbComponent::IsCurrentClimbMovementCancelable() const {
    return false;
}

bool URsClimbComponent::IsCurrentAttachmentHanging() const {
    return false;
}

bool URsClimbComponent::IsClimbMoving() const {
    return false;
}

bool URsClimbComponent::IsCinematicNavigationQueued() const {
    return false;
}

bool URsClimbComponent::IsCeilingClimb() const {
    return false;
}

bool URsClimbComponent::IsAttached() const {
    return false;
}



bool URsClimbComponent::HasLedgeInDirection(const FVector2D padInput) {
    return false;
}

bool URsClimbComponent::HasClimbingClaws() const {
    return false;
}

bool URsClimbComponent::HandleClimbGrabSurveyResults() {
    return false;
}

bool URsClimbComponent::GripIsConfirm() const {
    return false;
}

bool URsClimbComponent::GetSurfaceTransitionSurveyResult() {
    return false;
}

float URsClimbComponent::GetPlayerControllerMagnitude() const {
    return 0.0f;
}

FVector URsClimbComponent::GetPlayerControllerDirectionWorld() const {
    return FVector{};
}

FVector2D URsClimbComponent::GetPlayerControllerDirectionLocal() const {
    return FVector2D{};
}

FRsConstrainedJumpWeights URsClimbComponent::GetJumpWeightsFromPadInput(FVector2D padInput) const {
    return FRsConstrainedJumpWeights{};
}

ERsConstrainedJumpDirection URsClimbComponent::GetJumpDirectionFromPadInput(FVector2D padInput) const {
    return ERsConstrainedJumpDirection::NONE;
}

float URsClimbComponent::GetGripTimerDuration() const {
    return 0.0f;
}

ERsClimbState URsClimbComponent::GetCurrentState() const {
    return ERsClimbState::Disabled;
}

ERsClimbEntryType URsClimbComponent::GetCurrentEntryType() const {
    return ERsClimbEntryType::NO_ENTRY;
}

ERsClimbSurfaceType URsClimbComponent::GetCurrentClimbSurfaceType() const {
    return ERsClimbSurfaceType::Wall;
}

TArray<UPrimitiveComponent*> URsClimbComponent::GetCurrentAttachedComponents() {
    return TArray<UPrimitiveComponent*>();
}

URsClimbSettings* URsClimbComponent::GetClimbSettings() const {
    return NULL;
}

ERsClimbMovementSurveyResult URsClimbComponent::GetClimbMovementSurveysResult() {
    return ERsClimbMovementSurveyResult::SameSurface;
}

float URsClimbComponent::GetClimbCornerTransitionAngle() const {
    return 0.0f;
}

float URsClimbComponent::GetAngleBetweenCameraForwardAndClimbWallNormal() const {
    return 0.0f;
}

void URsClimbComponent::ForceReleaseClimb() {
}

void URsClimbComponent::ExitCinematicNavigationMode() {
}

void URsClimbComponent::EnterCinematicNavigationMode(const FRsCinematicNavigationDelegate& cinematicNavigationDelegate, FName Tag, float Timeout) {
}

void URsClimbComponent::DoSurfaceTransitionSurvey_Async() {
}

void URsClimbComponent::DoQueuedJump() {
}

void URsClimbComponent::DoClimbMovementSurveys_Async() {
}

bool URsClimbComponent::DoClimbGrabSurveys_Async() {
    return false;
}

void URsClimbComponent::DisableRotationInJumpAnimations() {
}

void URsClimbComponent::ClimbFallTimerComplete() {
}

void URsClimbComponent::ClimbEntryTimerFinished() {
}


void URsClimbComponent::ClearPendingCinematicNavigation() {
}

bool URsClimbComponent::CanRelease_Implementation() const {
    return false;
}

bool URsClimbComponent::CanReach(const FVector2D padInput) const {
    return false;
}


bool URsClimbComponent::AllowSurfaceTransition_Implementation() const {
    return false;
}

bool URsClimbComponent::AllowForcePullEntry_Implementation() const {
    return false;
}

void URsClimbComponent::AllowCurrentSurfaceTransitionCancel() {
}

URsClimbComponent::URsClimbComponent() {
    // Null default object.
}

