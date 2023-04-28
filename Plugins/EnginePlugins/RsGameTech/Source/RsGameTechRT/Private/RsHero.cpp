#include "RsHero.h"

void ARsHero::UnregisterOnActionUnbuffered(const FRsActionBufferDelegate& Delegate, FName ActionName) {
}

void ARsHero::UnregisterOnActionBuffered(const FRsActionBufferDelegate& Delegate, FName ActionName) {
}

void ARsHero::UnmarkPlayingAsCere() {
}

void ARsHero::SlideNavStop() {
}

bool ARsHero::SlideNav() {
    return false;
}

bool ARsHero::ShouldSlideNav() const {
    return false;
}

void ARsHero::SetSoftTargetLocked(bool bIsLocked) {
}

void ARsHero::SetSoftTarget(AActor* Target) {
}

void ARsHero::SetParriedTarget(ARsCharacter* Target, float ValidDuration) {
}

void ARsHero::SetOverrideActionSet(URsInputActionSetDefinition* OverrideActionSet) {
}

void ARsHero::ResetToDefaultActionSet() {
}

void ARsHero::ResetSpecificBufferedAction(FName ActionName) {
}

void ARsHero::ResetInputFlags() {
}

void ARsHero::ResetBufferFlags() {
}

void ARsHero::ResetBufferedAction() {
}

void ARsHero::ResetAllState() {
}

void ARsHero::RemoveToggleHoldAction(const TSet<FName>& ActionNames) {
}

void ARsHero::RemoveHeroUpgradeTag(FGameplayTag Tag) {
}

void ARsHero::RemoveHeroUpgradeFlag_DEPRECATED(ERsHeroUpgradeFlags Flags) {
}

bool ARsHero::RemoveHeroStateModifier(UObject* InstanceOwner, URsHeroStateModifierDefinition* Modifier, float BlendTime) {
    return false;
}

void ARsHero::RemoveHeroLoadoutFlag(ERsHeroLoadoutFlags Flags, bool bOnlyIfItDoesntAffectWorldState) {
}

void ARsHero::RemoveAllLoadoutFlagsThatDontAffectWorldState() {
}

void ARsHero::RegisterOnActionUnbuffered(const FRsActionBufferDelegate& Delegate, FName ActionName) {
}

void ARsHero::RegisterOnActionBuffered(const FRsActionBufferDelegate& Delegate, FName ActionName) {
}

void ARsHero::PushHeroInputFlags(const FName Name, const FRsBitfield_HeroInputFlags SetFlags, const FRsBitfield_HeroInputFlags ClearFlags, const FRsBitfield_HeroInputFlags InvalidFlags, const FRsBitfield_HeroInputFlags ClearInvalidFlags) {
}

void ARsHero::PopulateActionNameList(UObject* ContextObject, TArray<FName>& Options) {
}

void ARsHero::PopHeroInputFlags(const FName Name) {
}

void ARsHero::PhysicalAnimationBlendingCustomControllerFactorChanged(FRsPhysicalAnimationBlendingCustomController blendingCustomController, float previousBlendValue, float newBlendValue) {
}

void ARsHero::OnDeformationSamplingReady(const FRsDynamicDeformationSampleResult& Result) {
}

void ARsHero::OnActionReleased(FName ActionName) {
}

void ARsHero::OnActionPressed(FName ActionName) {
}

void ARsHero::MarkPlayingAsCere() {
}

bool ARsHero::LastActionReleasedWithinTime(FName ActionName, float Duration) const {
    return false;
}

bool ARsHero::LastActionPressedWithinTime(FName ActionName, float Duration) const {
    return false;
}

bool ARsHero::IsMarkedPlayingAsCere() const {
    return false;
}

bool ARsHero::IsInputPressed(FName ActionName) const {
    return false;
}

bool ARsHero::IsExecutingBufferedAction() const {
    return false;
}

bool ARsHero::IsExecutingActions() const {
    return false;
}

bool ARsHero::IsActionBuffered(FName ActionName, bool bIncludeBufferedRelease) const {
    return false;
}

bool ARsHero::HasHeroUpgradeTags(FGameplayTagContainer TagsToCheck) const {
    return false;
}

bool ARsHero::HasHeroUpgradeTag(FGameplayTag Tag) const {
    return false;
}

bool ARsHero::HasHeroUpgradeFlags_DEPRECATED(FRsBitfield_HeroUpgradeFlags Flags) const {
    return false;
}

bool ARsHero::HasHeroUpgradeFlag_DEPRECATED(ERsHeroUpgradeFlags flag) const {
    return false;
}

bool ARsHero::HasHeroLoadoutFlags(FRsBitfield_HeroLoadoutFlags Flags) const {
    return false;
}

bool ARsHero::HasHeroLoadoutFlag(ERsHeroLoadoutFlags flag) const {
    return false;
}

bool ARsHero::HasHeroInputFlags(FRsBitfield_HeroInputFlags Flags) const {
    return false;
}

bool ARsHero::HasHeroInputFlag(ERsHeroInputFlags flag) const {
    return false;
}

bool ARsHero::HasHeroBufferFlags(FRsBitfield_HeroBufferFlags Flags) const {
    return false;
}

bool ARsHero::HasHeroBufferFlag(ERsHeroBufferFlags flag) const {
    return false;
}

bool ARsHero::HasBufferedAction(bool bIncludeBufferedRelease) const {
    return false;
}

FName ARsHero::GetMotionTweaksNameFromEnum(ERsHeroMotionTweaks motionEnum) {
    return NAME_None;
}

float ARsHero::GetLastActionReleasedTime(FName ActionName) const {
    return 0.0f;
}

float ARsHero::GetLastActionPressTime(FName ActionName) const {
    return 0.0f;
}

USkeletalMeshComponent* ARsHero::GetCameraRig() const {
    return NULL;
}

float ARsHero::GetActionBufferTime(FName ActionName) const {
    return 0.0f;
}

void ARsHero::ForceReleaseInput(FName ActionName) {
}

void ARsHero::ForceExecuteBuffer(FName ActionName) {
}

void ARsHero::ForceBufferAction(FName ActionName) {
}

bool ARsHero::DoesHeroLoadoutFlagAffectWorldState(ERsHeroLoadoutFlags flag) const {
    return false;
}

void ARsHero::DetermineSoftLockTarget(float MaxDistance, float MaxAngle) {
}

void ARsHero::DeferResetInputActionState() {
}

void ARsHero::DebugSetHeroUpgradeTags(FGameplayTagContainer TagsToSet) {
}

void ARsHero::DebugSetHeroUpgradeFlags_DEPRECATED(FRsBitfield_HeroUpgradeFlags Flags) {
}

void ARsHero::DebugSetHeroLoadoutFlags(FRsBitfield_HeroLoadoutFlags Flags) {
}

FString ARsHero::DebugGetHeroUpgradeTagsText() const {
    return TEXT("");
}

bool ARsHero::DebugGetHeroStateModifiers(FString& HeroModifiers) const {
    return false;
}

FString ARsHero::DebugGetHeroLoadoutFlagsText() const {
    return TEXT("");
}

void ARsHero::DeactivateCombatSuction() {
}

void ARsHero::ClearSoftTarget() {
}

void ARsHero::AddToggleHoldAction(const TSet<FName>& ActionNames) {
}

void ARsHero::AddHeroUpgradeTag(FGameplayTag Tag) {
}

void ARsHero::AddHeroUpgradeFlag_DEPRECATED(ERsHeroUpgradeFlags flag) {
}

bool ARsHero::AddHeroStateModifierForDuration(UObject* InstanceOwner, URsHeroStateModifierDefinition* Modifier, const FRsHeroStateModifierDelegate& OnRemovedCallback, float Duration, float BlendInTime, float BlendOutTime) {
    return false;
}

bool ARsHero::AddHeroStateModifier(UObject* InstanceOwner, URsHeroStateModifierDefinition* Modifier, const FRsHeroStateModifierDelegate& OnRemovedCallback, float BlendTime) {
    return false;
}

void ARsHero::AddHeroLoadoutFlag(ERsHeroLoadoutFlags flag, bool bAffectsWorldState) {
}

void ARsHero::AddAllHeroUpgradeTags(FGameplayTagContainer TagsToAdd, bool bResetIfDieWithoutSaving) {
}

void ARsHero::AddAllHeroUpgradeFlags_DEPRECATED(FRsBitfield_HeroUpgradeFlags Flags, bool bSaveImmediately) {
}

void ARsHero::AddAllHeroLoadoutFlags(FRsBitfield_HeroLoadoutFlags Flags, bool bSaveImmediately, bool bAffectsWorldState) {
}

bool ARsHero::ActivateCombatSuction(AActor* SuctionTarget, float TimeToTarget, float Offset, float MaxRange, bool bUseOverrideMultipler, const float OverrideMultiplier) {
    return false;
}

ARsHero::ARsHero() {
    // Null default object.
}

