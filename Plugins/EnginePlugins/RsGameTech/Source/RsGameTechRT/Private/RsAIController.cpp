#include "RsAIController.h"
#include "Templates/SubclassOf.h"

bool ARsAIController::WantToRunGoal(TSubclassOf<URsAIGoal> GoalType) const {
    return false;
}

ERsAIPOIRequestResult ARsAIController::TestPOIAvailability(ARsAIPOI* InPOIActor) {
    return ERsAIPOIRequestResult::Succeeded;
}

bool ARsAIController::ShouldUnsheatheWeaponOnSpawn() const {
    return false;
}

bool ARsAIController::SetToAggro(AActor* SourceOfAwarenessChange, bool bForceActualBehaviorStateChange) {
    return false;
}

void ARsAIController::SetThreatEvaluator(TSubclassOf<URsAIThreatEvaluator> ThreatEvaluatorClass) {
}

void ARsAIController::SetTargetEvaluator(TSubclassOf<URsAITargetEvaluator> TargetEvaluatorClass) {
}

void ARsAIController::SetSourceOfLastAwarenessStateChange(AActor* NewActor) {
}

void ARsAIController::SetScriptingMode(TEnumAsByte<ERsAIScriptingMode::Type> NewScriptingMode) {
}

void ARsAIController::SetRole(TEnumAsByte<ERsAIRole::Type> NewAIRole) {
}

void ARsAIController::SetOverrideFocusTarget(AActor* FocusTarget) {
}

void ARsAIController::SetLeashingBounds(const ARsAILeashingActor* LeashingActor) {
}

void ARsAIController::SetDelegatePOIActor(AActor* DelegateActor) {
}

void ARsAIController::SetAttackTargetOverrideActor(AActor* AttackTarget) {
}

void ARsAIController::SetAllyEvaluator(TSubclassOf<URsAIAllyEvaluator> AllyEvaluatorClass) {
}

void ARsAIController::SetAICharacterDefinition(URsAICharacterDefinition* NewCharacterDefinition) {
}

bool ARsAIController::SetAIBehaviorStateByName(FName NewStateName, bool bRestartState, bool bStackState, bool AssertOnNotFound, bool bDynamicRootBehavior, UBehaviorTree* OverrideBehaviorTreeAsset, URsAIGoal* AssociatedGoal, bool bOnlyOverrideBehaviorTreeAssetIfStateDoesNotAlreadyHaveOne) {
    return false;
}

void ARsAIController::SetAIBehaviorState(const URsAIBehaviorState* NewStateTemplate, bool bStackState, bool bDynamicRootBehavior) {
}

void ARsAIController::ResumeReturnHome() {
}

void ARsAIController::ResumeDefaultBehavior() {
}



float ARsAIController::QueueUpAmbientToAlertTransition() {
    return 0.0f;
}

void ARsAIController::OnTakeNoDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void ARsAIController::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void ARsAIController::OnPreFactionChange(URsTargetableComponent* TargetableComponent, FGameplayTag PreviousFactionTag, FGameplayTag NewFactionTag) {
}

void ARsAIController::OnOwnerDied(AActor* DeadActor) {
}

void ARsAIController::OnNavLinkTraversalSyncEnding(UAnimMontage* Montage, bool bInterrupted) {
}

void ARsAIController::OnNavLinkConstrainedMovementAnimEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void ARsAIController::OnNavLinkApproachSyncEnding(UAnimMontage* Montage, bool bInterrupted) {
}

void ARsAIController::OnFactionChanged(URsTargetableComponent* TargetableComponent) {
}

void ARsAIController::K2_StopWaiting() {
}

void ARsAIController::K2_StartWaiting() {
}

void ARsAIController::K2_SetHomeLocation(const FVector& InHomeLocation) {
}

void ARsAIController::K2_GrantSpecialFightAccess(float RetryTimer) {
}

bool ARsAIController::IsWaiting() const {
    return false;
}

bool ARsAIController::IsUsingPatrolPath() const {
    return false;
}

bool ARsAIController::IsRunningDefaultBehaviorStateMachine() const {
    return false;
}

bool ARsAIController::IsOnScreenUnoccluded(float Tolerance) const {
    return false;
}

bool ARsAIController::IsOnScreen() const {
    return false;
}

bool ARsAIController::IsInConversation() const {
    return false;
}

bool ARsAIController::IsBehaviorMachineInState(FName StateNameToTest, bool AssertOnNotFound) {
    return false;
}

bool ARsAIController::IsAwareOfThreat() const {
    return false;
}

bool ARsAIController::IsAttackTargetOverridden() const {
    return false;
}

bool ARsAIController::IsAttackTargetLocked() const {
    return false;
}

bool ARsAIController::IsAttacking() const {
    return false;
}

bool ARsAIController::HasSpawnIntroPlayed() const {
    return false;
}

bool ARsAIController::HasPathToAttackTarget() const {
    return false;
}

bool ARsAIController::HasAttackTarget() const {
    return false;
}

TArray<AActor*> ARsAIController::GetThreatListOfActors() const {
    return TArray<AActor*>();
}

AActor* ARsAIController::GetSourceOfLastAwarenessStateChange() const {
    return NULL;
}

TEnumAsByte<ERsAIScriptingMode::Type> ARsAIController::GetScriptingMode() const {
    return ERsAIScriptingMode::None;
}

TEnumAsByte<ERsAIRole::Type> ARsAIController::GetRole() const {
    return ERsAIRole::Default;
}

TEnumAsByte<ERsAIAwarenessState::Type> ARsAIController::GetPreviousAwarenessState() const {
    return ERsAIAwarenessState::None;
}

AActor* ARsAIController::GetOverrideFocusTarget() const {
    return NULL;
}

int32 ARsAIController::GetNumThreats() const {
    return 0;
}

FRotator ARsAIController::GetHomeRotation() const {
    return FRotator{};
}

FVector ARsAIController::GetHomeLocation() const {
    return FVector{};
}

URsAIGoalManager* ARsAIController::GetGoalManager() const {
    return NULL;
}

float ARsAIController::GetDistance2DToPathCorner() const {
    return 0.0f;
}

AActor* ARsAIController::GetDelegatePOIActor() const {
    return NULL;
}

void ARsAIController::GetDefaultBehaviorStateMachineClass_Implementation(TSubclassOf<URsAIBehaviorStateMachine>& OutClass) const {
}

ARsAIPOI* ARsAIController::GetCurrentPOI() const {
    return NULL;
}

FName ARsAIController::GetCurrentBehaviorStateName() {
    return NAME_None;
}

URsAIBehaviorStateMachine* ARsAIController::GetBehaviorStateMachine() const {
    return NULL;
}

TEnumAsByte<ERsAIAwarenessState::Type> ARsAIController::GetAwarenessState() const {
    return ERsAIAwarenessState::None;
}

TEnumAsByte<ERsAIAwarenessReactionState::Type> ARsAIController::GetAwarenessReactionState() const {
    return ERsAIAwarenessReactionState::None;
}

AActor* ARsAIController::GetAttackTargetAsActor() const {
    return NULL;
}

FRsAIAwarenessStateSettings_Alert ARsAIController::GetAlertAwarenessSettings(bool& HasValidValue) const {
    return FRsAIAwarenessStateSettings_Alert{};
}

URsAICharacterDefinition* ARsAIController::GetAICharacterDefinition() const {
    return NULL;
}

FRsAIAwarenessStateSettings_Aggro ARsAIController::GetAggroAwarenessSettings(bool& HasValidValue) const {
    return FRsAIAwarenessStateSettings_Aggro{};
}

void ARsAIController::FinishPOIBehavior() {
}

AActor* ARsAIController::FindHuntTarget() const {
    return NULL;
}

void ARsAIController::ExecuteUpAmbientToAlertTransition() {
}

void ARsAIController::EnableCrowdAvoidance(bool bEnable) {
}

void ARsAIController::DontGarbageCollectDuringLifetimeOfCurrentBehaviorStateMachine(UObject* Object) {
}

bool ARsAIController::DisableReturnHome() {
    return false;
}

void ARsAIController::ClearOverrideFocusTarget() {
}

void ARsAIController::ClearLeashingBounds() {
}

void ARsAIController::ClearAttackTargetOverride() {
}

ERsAIPOIRequestResult ARsAIController::BeginPOIBehavior(ARsAIPOI* InPOIActor, bool bInterruptCurrent) {
    return ERsAIPOIRequestResult::Succeeded;
}

void ARsAIController::ActivateBehaviorStateMachineSetter(TSubclassOf<URsAIBehaviorStateMachine> NewBehaviorStateMachineClass) {
}

void ARsAIController::ActivateBehaviorStateMachineFromTemplate(UBehaviorTree* InitialStateBehavior, EBehaviorStateMachineTemplate StateMachineTemplate, const FBehaviorStateMachineTemplateTransitionEvaluateDelegate& TransitionEvaluateDelegate, float MinPlayerDistanceBeforeTransition, bool bResetHomePositionOnResumeDefaultBehavior, bool bOnlyIfAlive) {
}

void ARsAIController::ActivateBehaviorStateMachine(TSubclassOf<URsAIBehaviorStateMachine> NewBehaviorStateMachine, bool bOnlyIfAlive, bool bIsFromTemplate) {
}

void ARsAIController::AbortPOIBehavior(bool bTriggersUsePOIEvent) {
}

ARsAIController::ARsAIController() {
    // Null default object.
}

