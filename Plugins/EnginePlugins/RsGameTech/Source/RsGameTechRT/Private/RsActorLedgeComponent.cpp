#include "RsActorLedgeComponent.h"

bool URsActorLedgeComponent::VaultLedge() {
    return false;
}

void URsActorLedgeComponent::UpdateReachState(ERsLedgeReachMode reachMode, float ReachAngle) {
}

void URsActorLedgeComponent::UpdateLedgeInputDirection() {
}

void URsActorLedgeComponent::UpdateForcePullup(bool forcePullup) {
}

void URsActorLedgeComponent::UnlockPadInput() {
}

void URsActorLedgeComponent::TryRetargetHorizontalShimmy(float distanceRatio) {
}

bool URsActorLedgeComponent::TryAttachToLedgeAtTransform(FTransform Transform, bool bSkipEntry) {
    return false;
}

void URsActorLedgeComponent::TriggerQueuedShimmyJump() {
}

void URsActorLedgeComponent::TriggerQueuedShimmy(float shimmyDuration) {
}

void URsActorLedgeComponent::TriggerQueuedCinematicNavigation() {
}

void URsActorLedgeComponent::StopShimmy() {
}

void URsActorLedgeComponent::StopReaching() {
}

void URsActorLedgeComponent::StopPullup_Implementation() {
}

void URsActorLedgeComponent::StartVerticalShimmy(ERsLedgeShimmyDirection Direction) {
}

void URsActorLedgeComponent::StartShimmyWithDuration(TEnumAsByte<ERsLedgeShimmyTarget::Type> Target, ERsLedgeShimmyDirection Direction, float Duration) {
}

void URsActorLedgeComponent::StartPullup_Implementation(float pullupAngle) {
}

void URsActorLedgeComponent::StartHorizontalShimmy(ERsLedgeShimmyDirection Direction) {
}


bool URsActorLedgeComponent::ShouldUseGripForEntry(ERsLedgeEntryType EntryType) const {
    return false;
}

bool URsActorLedgeComponent::ShouldUseGrip() const {
    return false;
}

bool URsActorLedgeComponent::ShouldOnlyAllowStraightPullup() const {
    return false;
}

void URsActorLedgeComponent::SetQueuedShimmyAnimation(UAnimMontage* Montage) {
}

void URsActorLedgeComponent::SetMode(const ERsLedgeMode ledgeMode) {
}

void URsActorLedgeComponent::SetDisabledJumpDirections(const UObject* Owner, const FRsDisabledConstrainedJumpDirections& disabledJumpDirections) {
}

void URsActorLedgeComponent::ResetPendingShimmySurveys() {
}

void URsActorLedgeComponent::ResetDisabledJumpDirections(const UObject* Owner) {
}

void URsActorLedgeComponent::ReleaseLedge() {
}

void URsActorLedgeComponent::ReenableFallWindowTimer() {
}

bool URsActorLedgeComponent::QueueShimmy(const TEnumAsByte<ERsLedgeShimmyTarget::Type> Target, const ERsLedgeShimmyDirection Direction) {
    return false;
}

bool URsActorLedgeComponent::QueueJumpOff(ERsConstrainedJumpDirection JumpDirection) {
    return false;
}

void URsActorLedgeComponent::QueueCinematicNavigation(const FRsCharacterAnimationData& AnimData, bool waitForTrigger, bool overrideEntry, const FRsCinematicNavigationDelegate& cinematicNavigationDelegate, float Timeout, FName Tag) {
}

bool URsActorLedgeComponent::QueueBackwardsJumpOff() {
    return false;
}

bool URsActorLedgeComponent::PadInputIsLocked() const {
    return false;
}





void URsActorLedgeComponent::OnQueuedShimmyMontageEnded(UAnimMontage* Montage, bool interrupted) {
}

void URsActorLedgeComponent::OnQueuedJumpOffMontageEnded(UAnimMontage* Montage, bool interrupted) {
}




void URsActorLedgeComponent::OnLedgePullupComplete() {
}

void URsActorLedgeComponent::OnLedgePullupCommitted() {
}


void URsActorLedgeComponent::OnHeroStateChanged(ERsNavState NewState, ERsNavState PrevState) {
}


void URsActorLedgeComponent::OnCharacterTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void URsActorLedgeComponent::OnCharacterInterrupted(ARsCharacter* InterruptedCharacter) {
}

void URsActorLedgeComponent::OnBeginLedgeIdle_Implementation() {
}

bool URsActorLedgeComponent::MantleLedge() {
    return false;
}

void URsActorLedgeComponent::LockPadInput() {
}

bool URsActorLedgeComponent::IsVaulting() const {
    return false;
}

bool URsActorLedgeComponent::IsShimmyJumping() const {
    return false;
}

bool URsActorLedgeComponent::IsReaching() const {
    return false;
}

bool URsActorLedgeComponent::IsInNavTransition() const {
    return false;
}

bool URsActorLedgeComponent::IsInMode(const ERsLedgeMode ledgeMode) const {
    return false;
}

bool URsActorLedgeComponent::IsInCinematicNavigation() const {
    return false;
}

bool URsActorLedgeComponent::IsHanging() const {
    return false;
}

bool URsActorLedgeComponent::IsCurrentShimmyInterruptible() const {
    return false;
}

bool URsActorLedgeComponent::IsAttached() const {
    return false;
}


bool URsActorLedgeComponent::HasPotentialMantleOrVaultLedge() {
    return false;
}

bool URsActorLedgeComponent::GripIsConfirm() const {
    return false;
}

float URsActorLedgeComponent::GetTimeInCurrentMode() const {
    return 0.0f;
}

TEnumAsByte<ERsLedgeShimmyTarget::Type> URsActorLedgeComponent::GetShimmySurveysResults() {
    return ERsLedgeShimmyTarget::SHIMMY_HORIZONTAL;
}

float URsActorLedgeComponent::GetReachAngle(ERsLedgeReachMode reachMode) {
    return 0.0f;
}

float URsActorLedgeComponent::GetPlayerControllerMagnitude() const {
    return 0.0f;
}

FVector URsActorLedgeComponent::GetPlayerControllerDirectionWorld() const {
    return FVector{};
}

FVector2D URsActorLedgeComponent::GetPlayerControllerDirectionLocal() const {
    return FVector2D{};
}

ERsLedgeMode URsActorLedgeComponent::GetMode() const {
    return ERsLedgeMode::Disabled;
}

FVector URsActorLedgeComponent::GetLockedLedgeTopNormal() const {
    return FVector{};
}

FVector URsActorLedgeComponent::GetLockedLedgeFrontNormal() const {
    return FVector{};
}

FVector URsActorLedgeComponent::GetLockedLedgeAxis() const {
    return FVector{};
}

URsActorLedgeSettings* URsActorLedgeComponent::GetLedgeSettings() const {
    return NULL;
}

bool URsActorLedgeComponent::GetLeapSurveyResult(float& distanceToTargetLedge) {
    return false;
}

ERsLedgeInputDirection URsActorLedgeComponent::GetLastFrameLedgeInputDirection() const {
    return ERsLedgeInputDirection::DIRECTION_NONE;
}

float URsActorLedgeComponent::GetGripTimerDuration() const {
    return 0.0f;
}

bool URsActorLedgeComponent::GetForcePullup() const {
    return false;
}

bool URsActorLedgeComponent::GetForcePullEntrySurveyResult() {
    return false;
}

bool URsActorLedgeComponent::GetDropDownSurveyResult(bool bUseExtrapolation) {
    return false;
}

TEnumAsByte<ERsLedgeShimmyTarget::Type> URsActorLedgeComponent::GetCurrentShimmyTarget() {
    return ERsLedgeShimmyTarget::SHIMMY_HORIZONTAL;
}

ERsLedgeShimmyDirection URsActorLedgeComponent::GetCurrentShimmyDirection() {
    return ERsLedgeShimmyDirection::DIRECTION_NONE;
}

ERsLedgeReachMode URsActorLedgeComponent::GetCurrentReachMode() const {
    return ERsLedgeReachMode::NOT_REACHING;
}

float URsActorLedgeComponent::GetCurrentPullupAngle() const {
    return 0.0f;
}

ERsLedgeInputDirection URsActorLedgeComponent::GetCurrentLedgeInputDirection() const {
    return ERsLedgeInputDirection::DIRECTION_NONE;
}

ERsLedgeEntryType URsActorLedgeComponent::GetCurrentLedgeEntryType() const {
    return ERsLedgeEntryType::NO_ENTRY;
}

TArray<UPrimitiveComponent*> URsActorLedgeComponent::GetCurrentAttachedComponents() {
    return TArray<UPrimitiveComponent*>();
}

float URsActorLedgeComponent::GetAttachedLedgeWidth() const {
    return 0.0f;
}

float URsActorLedgeComponent::GetAttachedLedgeSlope() const {
    return 0.0f;
}

float URsActorLedgeComponent::GetAttachedLedgeHeight() const {
    return 0.0f;
}

void URsActorLedgeComponent::GetActiveLedgeRelativeDisplacementAndVelocity(FVector& Displacement, FVector& Velocity) const {
}

void URsActorLedgeComponent::ForceReleaseLedge() {
}

void URsActorLedgeComponent::ExitCinematicNavigationMode() {
}

void URsActorLedgeComponent::EnterCinematicNavigationMode(bool overrideEntry, const FRsCinematicNavigationDelegate& cinematicNavigationDelegate, FName Tag) {
}

void URsActorLedgeComponent::DoShimmySurveys_Async(const ERsLedgeShimmyDirection Direction) {
}

ERsLedgeReachSurveyResult URsActorLedgeComponent::DoReachSurvey(ERsLedgeShimmyDirection Direction) {
    return ERsLedgeReachSurveyResult::WAITING_FOR_RESULT;
}

void URsActorLedgeComponent::DoQueuedJumpOff() {
}

void URsActorLedgeComponent::DoMantleAndVaultSurvey_Async() {
}

void URsActorLedgeComponent::DoLedgeDropDownSurvey_Async() {
}

void URsActorLedgeComponent::DoLeapSurvey_Async(const ERsLedgeShimmyDirection Direction) {
}

bool URsActorLedgeComponent::DoForcePullLedgeEntry() {
    return false;
}

void URsActorLedgeComponent::DoForcePullEntrySurvey_Async() {
}

bool URsActorLedgeComponent::DoDropDownEntry() {
    return false;
}

void URsActorLedgeComponent::DisableLedgeReattachment() {
}

void URsActorLedgeComponent::DisableLedgeForRelease() {
}

void URsActorLedgeComponent::DisableFallWindowTimer() {
}

void URsActorLedgeComponent::DetermineValidLedgeEntryTypes(bool& canGrab, bool& canDoKneeEntry, bool& movingIntoLedgeVelocity, bool& movingIntoLedgePad, bool& willPassOverLedge) const {
}

void URsActorLedgeComponent::ClearPendingCinematicNavigation() {
}

bool URsActorLedgeComponent::CheckAndTriggerTransitions(ERsLedgeInputDirection frameInputDirection) {
    return false;
}

ERsLedgeInputDirection URsActorLedgeComponent::CategorizePadInput_Implementation() const {
    return ERsLedgeInputDirection::DIRECTION_NONE;
}

bool URsActorLedgeComponent::CanVaultLedge() {
    return false;
}

bool URsActorLedgeComponent::CanRelease_Implementation() const {
    return false;
}

bool URsActorLedgeComponent::CanPullup(float pullupAngle) const {
    return false;
}

bool URsActorLedgeComponent::CanMantleLedge() {
    return false;
}

bool URsActorLedgeComponent::CanDoLedgeDropDown() const {
    return false;
}

bool URsActorLedgeComponent::CanContinueLedgeGrab(float maxPitch, float maxRoll) {
    return false;
}


bool URsActorLedgeComponent::AttachToActiveLedge(ERsLedgeEntryType EntryType) {
    return false;
}

bool URsActorLedgeComponent::AllowShimmyRetargeting() {
    return false;
}

URsActorLedgeComponent::URsActorLedgeComponent() {
    // Null default object.
}

